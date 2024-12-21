# Networking Cheat Sheet

## Connection
1. **TCP**: Connection-oriented protocol. A connection is established before data transfer begins(Using the **three-way handshake**)
2. **UDP**: Connectionless, protocol. Data is sent without establishing a connection, which makes it faster but less reliable

## Examples of TCP & UDP
**TCP**: Used in applications where reliability and order are critical, such as
- Web browsing (HTTP/HTTPS)
- File transfer(FTP)
- Emails(SMTP/IMAP/POP3)

**UDP**: Used in applications where speed is more critical than reliability, such as
- Video streaming
- Online gaming
- Voice over IP(voIP)
- DNS(Domain Name System)

## 4-Layer TCP/IP Model

1. **Application Layer**: Supports communication between applications on different devices
- Example:
    - HTTP/HTTPS
    - SMTP
    - FTP
    - DNS
2. **Transport Layer**: Provides end-to-end communication, reliability, and error handling between devices
- Example:
    - TCP
    - UDP
3. **Internet Layer**: Handles the routing of data packets across interconnected networks
- Example:
    - IPv4
    - IPv6
    - ICMP
4. **Link Layer**: Manages data transfer over the physical network hardware
- Example:
    - Ethernet
    - Wi-Fi

