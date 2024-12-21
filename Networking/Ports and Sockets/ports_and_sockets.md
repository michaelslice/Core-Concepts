# Ports and Sockets

**Port**: A port is a logical address point for communication. It is used by applications and services to send and recieve data over a network. Ports help specify specefic services or applications running on a 

## Key Concepts of Ports
**Port Number**: A port number is a 16-bit number that identifies a specific process or service on a device. It ranges from 0-65535

**Socket**: Is a combination of an IP address and a port number. It is used as an endpoint for sending and recieve data across a network. Sockets allow applications to communicate with each other over a network using the IP address of the host and a specific port number
**Socket Address**: A socket is a uniquely identified by a tuple
- IP address(192.168.1.1)
- Port Number(80)
So a socket address could be written as 192.168.1.1:80

## Client and Server Sockets
**Server Socket**: A server socket listens for incoming connections on a specific port. It waits for clients to connect and communicate with them once a connection is established
**Client Socket**: A client socket is used by the client to connect to a server, usually using a dynamic port number and the servers IP address and port number

## Types of Sockets:

**Stream Sockets (TCP)**: These provide a reliable, connection-oriented communication channel. They use TCP, which ensures data delivery and correct ordering.
**Datagram Sockets (UDP)**: These provide a connectionless communication channel. They use UDP, which doesn't guarantee reliability or ordering of data packets.
