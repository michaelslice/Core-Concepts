**User Datagram Protocol (UDP)**: Is a lightweight, connectionless communication protocol in the Internet Protocol suite. It is often used in scenarios where speed and low latency are prioritized over reliability

## Key Features of UDP
1. **Connectionless**
    - No handshaking or connection establishment occurs before sending data
    - Each packet (datagram) is independent of the others
2. **Unreliable**
    - UDP does not guarantee delivery, order, or protection against duplication of packets
    - There is no acknowledgement mechanism to confirm that data has been received
3. **Fast and Low Overhead**
    - UDP headers are minimal (8 bytes), compared to TCP (20 bytes or more)
    - Lack of reliability mechanism makes UDP faster than TCP
4. **Supports Broadcasting and Multicasting**
    - UDP is well suited for scenarios like broadcasting data to multiple devices or multicasting within a network     

## UDP Header Structure
Each UDP datagram has a simple header of 8 bytes
- Source Port: Port of the sender
- Destination Port: Port of the reciever
- Length: Length of the datagram(header + data)
- Checksum: Optional error-checking field

## Common Use Cases for UDP
1. Real-Time Applications
    - Video Streaming
    - Voice over IP
    - Online Gaming