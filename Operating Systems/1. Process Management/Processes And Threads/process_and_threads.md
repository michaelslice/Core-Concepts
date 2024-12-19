## **Processes and Threads**

### **Process**
A **process** is an instance of a program in execution.  
- **Independent**: Each process has its own memory space (address space).  
- **Resources**: A process requires resources like CPU, memory, files, and I/O devices to execute.  
- **Isolation**: Processes are isolated from one another to prevent interference.  
- **Heavyweight**: Processes have a high overhead because each one carries its own memory and resources.  

### **Threads**
A **thread** is a smaller, lightweight unit of execution within a process. A single process can have multiple threads sharing the same memory space.  
- **Shared Memory**: Threads share the process's resources like memory and files.  
- **Independent Execution**: Threads execute independently, but their execution is part of the parent process.  
- **Lightweight**: Creating and managing threads is faster and requires fewer resources compared to processes.  

---

## **Process States**
A process goes through several states during its lifecycle:  
- **New**: The process is being created but is not yet ready to execute.  
- **Ready**: The process is ready to execute but is waiting for CPU time.  
- **Running**: The process is being executed by the CPU.  
- **Waiting (Blocked)**: The process is waiting for some event to occur (e.g., I/O completion).  
- **Terminated (Exit)**: The process has finished execution or has been terminated.  

---

## **Process Control Block (PCB)**
A **Process Control Block** is a data structure used by the operating system to store information about a process.  
1. **Process ID (PID)**: Unique identifier for the process.  
2. **Process State**: Current state of the process (New, Ready, Running, Waiting, Terminated).  
3. **CPU Registers**: Values of CPU registers when the process was last executed.  
4. **Memory Management Information**: Details about the process's address space, page tables, or segment tables.  
5. **Scheduling Information**: Priority of the process and scheduling-related information.  
6. **Accounting Information**: CPU usage, execution time, and resource utilization.  
7. **I/O Status Information**: Information about I/O devices allocated to the process.  

---

## **Summary**
- **Processes** are heavyweight, independent units of execution with their own resources and memory space. They are isolated but slower to create and communicate with each other.  
- **Threads** are lightweight, sharing the process's resources and allowing faster communication. They are ideal for tasks requiring parallelism within the same application.  

---

## **Example**

**Scenario**: A video streaming application **YouTube App**  
- The application is a single process but it uses multiple threads for different tasks:  
    - **Main thread**: Handles the user interface (UI), such as responding to button clicks.  
    - **Network thread**: Handles downloading the video stream from the server.  
    - **Decoding thread**: Decodes the video to display on the screen.  
    - **Audio thread**: Plays audio in sync with the video.  
