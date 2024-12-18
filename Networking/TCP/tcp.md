**TCP**: Transmission Control Protocol, provides reliable, ordered, and error-checked delivery of stream-packets between applications running on hosts communicating via an IP network.

## Key Featues of TCP

1. **Connection Oriented Protocol**
    - TCP establishes a connection between sender and reciever before data transfer begins via the **Three-Way-Handshake**
2. **Reliable Connection**
    - TCP ensures that data packets are delivered correctly accurately and in the correct order. Lost or corrupted packets are retransmitted
3. **Error Detection and Correction**
    - TCP includes error checking mechanisms, using checksums and agknowledgement (ACK) message to detect and recover from errors
4. **Flow Control**
    - TCP uses mechanisms like the sliding window protocol to ensure the sender doesn't overwhelm the receiver with too much data at once.
5. **Congestion Control**
    - TCP adjusts the rate of data transmission based network congestion, using algorithms like Additive Increase/Multiplicative Decrease(AIMD)
6. **Stream-Oriented Communication**
    - TCP treats data as a continous stream of bytes, rather than discrete packets, making it easier to handle large amounts of data

## How TCP Works
1. **Three-Way-Handshake** 
TCP establishes a connection with the following steps
    - **SYN**: The client sends a SYN(synchronize) messagee to the server to initiate a connection
    - **SYN-ACK**: The server responds with a SYN-ACK (synchronize-acknowledge) message
    - **ACK**: The client acknowledges the server's response with an ACK message
2. **Data Transmission**
    - Data is divided into segments, which are transmitted and acknowledged by the reciever
    - Each segment includes a sequence number to ensure that all data arrives in order
3. **Four-Way Termination**
    TCP closes the connection using a four-step process
    - One sides sends a FIN message to indicate it wants to terminate
    - The other side acknowledges with an ACK
    - The other side also sends a FIN when it's ready to close
    - The initiator sends a final ACK to confirm         

## TCP Header Structure
TCP packets include a header that contains important information:
- Source Port & Destination Port: Identify the sending and receiving applications.
- Sequence Number: Keeps track of the data position in the byte stream.
- Acknowledgment Number: Indicates the next byte expected from the sender.
- Window Size: Specifies the size of the receive window (flow control).
- Flags: Control bits like SYN, ACK, FIN, etc.
- Checksum: Ensures data integrity.