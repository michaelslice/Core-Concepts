# Push CDN vs. Pull CDN
CDNs can be categorized into two types: Pull CDNs and Push CDNs. Both types aim to deliver content efficiently, but they differ in how they handle and distribute the content.
## Pull CDN
In a Pull CDN, the content is not stored on the CDN's servers by default. Instead, the CDN "pulls" the content from the origin server when a user requests it for the first time. Once the content is cached on the CDN's edge server, subsequent requests for the same content will be served directly from the CDN, reducing the load on the origin server.