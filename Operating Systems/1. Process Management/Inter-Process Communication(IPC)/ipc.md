## **Inter-Process Communication (IPC)**  
IPC is a mechanism that allows processes to communicate and synchronize their actions. Processes can exchange data or signals to coordinate activities or share information.

---

## **Methods of IPC**

1. **Shared Memory**  
    - Processes share a portion of memory where data can be read and written.  
    - **Characteristics**:  
        - High-speed communication because data doesn't need to be copied between processes.  
        - Requires synchronization mechanisms (e.g., semaphore) to prevent race conditions.  
    - **Example**:  
        - Used in producer-consumer problems, where one process writes data (producer) and another reads it (consumer).  

2. **Message Passing**  
    - Processes communicate by sending and receiving messages.  
    - **Characteristics**:  
        - Easier to implement but slower than shared memory due to message copying.  
        - Can be **synchronous** (blocking) or **asynchronous** (non-blocking).  
    - **Example**:  
        - Client-server communication over a network.  

3. **Pipes**  
    - Provide a unidirectional or bidirectional communication channel between processes.  
    - **Types**:  
        - **Anonymous Pipes**: Used for communication between related processes.  
        - **Named Pipes (FIFO)**: Allow communication between unrelated processes.  
    - **Characteristics**:  
        - Data is passed as a byte stream.  
        - Typically unidirectional unless explicitly implemented as bidirectional.  

4. **Sockets**  
    - Enable communication between processes over a network or within the same machine.  
    - **Characteristics**:  
        - Supports **TCP** (reliable) or **UDP** (unreliable) protocols.  
        - Used for client-server communication.  

5. **Semaphore**  
    - Used to manage access to shared resources by multiple processes.  
    - **Types**:  
        - **Binary Semaphore (Mutex)**: Allows one process at a time.  
        - **Counting Semaphore**: Allows a fixed number of processes at a time.  
    - **Characteristics**:  
        - Prevents race conditions.  
        - Often used with shared memory.  

6. **Signals**  
    - Used to notify a process of an event (e.g., termination, interruption).  
    - **Characteristics**:  
        - Lightweight.  
        - Suitable for simple communication like stopping or pausing a process.  
