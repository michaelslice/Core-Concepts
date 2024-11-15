# Limitations and Future Work

**IMPORTANT:** Don't forget to clean up your project after completing this course to avoid incurring costs. Resources created include:
- Cloud Run services
- Firestore database
- Firebase Functions
- Cloud Pub/Sub topic and subscription
- Cloud Storage buckets

In this section, we discuss the limitations of our application’s architecture and outline potential future work to improve and expand its capabilities. Implementing some of these enhancements would make a great addition to your resume and help deepen your knowledge.

---

## 1. Limitations

### 1.1 Long-Lived HTTP Requests
- **Challenge**: Pub/Sub has a max acknowledgment (ack) deadline of 600 seconds, while Cloud Run’s max processing time is 3600 seconds. If video processing takes over 600 seconds, Pub/Sub will close the HTTP connection, and the message will be redelivered to the queue repeatedly.
- **Solution**: Using a Pull Subscription method instead of Push would allow us to control when messages are pulled from the Pub/Sub queue, process them, and then send an ack to Pub/Sub, ensuring no messages are stuck indefinitely.
  
### 1.2 Video Processing Failure
- **Challenge**: If a message is pulled, its status changes to "processing" in Firestore, but then the service fails, the message remains in the queue indefinitely.
- **Solution**: Acknowledge the message immediately after pulling, then handle re-queuing if processing fails by resetting its status.

### 1.3 File Upload Time Limit
- **Note**: Although signed URLs are valid for 15 minutes, uploads will continue even after expiration if they start within this timeframe. A shorter expiration time (e.g., 1 minute) might be safer.

### 1.4 Video Streaming
- **Challenge**: Google Cloud Storage supports file streaming but isn’t optimized for adaptive streaming like YouTube’s DASH (Dynamic Adaptive Streaming over HTTP) or HLS (HTTP Live Streaming), which allow for quality adjustments based on user bandwidth.
- **Solution**: Implementing DASH or HLS could enhance video streaming quality and user experience.

### 1.5 Content Delivery Network (CDN)
- **Challenge**: Serving videos directly from a CDN would improve latency and user experience.
- **Solution**: Using a CDN for video delivery would reduce latency by serving content from locations geographically close to users.

### 1.6 Illegal Videos
- **Challenge**: We lack content moderation mechanisms to prevent illegal videos from being served, which poses risks if the app were publicly deployed.
- **Solution**: Implement content filtering to prevent hosting or serving prohibited content.

---

## 2. Future Work

Here are potential tasks for enhancing the application:

- **Add user's profile picture and email to Web Client**
- **Fix Bug**: Allow users to upload multiple videos without refreshing the page
- **Enhancements**:
  - Allow video thumbnail uploads
  - Enable adding titles and descriptions to videos
  - Display uploader’s name on videos
  - Implement user subscriptions to channels
  - Clean up raw videos in Cloud Storage post-processing
  - Serve videos via a CDN for improved performance
  - Add unit and integration tests

---

## 3. Conclusion

Thank you for following along! I hope this project gave you insight into designing and architecting applications, emphasizing that development involves numerous tradeoffs. Building complex applications like Twitter or YouTube is no small task, but each step offers valuable learning opportunities.

Please share any feedback you may have—I’m always eager to improve!
