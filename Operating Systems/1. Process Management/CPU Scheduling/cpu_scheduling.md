## **CPU Scheduling**  
Determines which process in the ready queue gets to use the CPU next. It ensures efficient CPU utilization and improves system performance.  

---

## **Goals of CPU Scheduling**  
- Maximize CPU utilization.  
- Minimize waiting time, turnaround time, and response time.  
- Provide fairness among processes.  

---

## **Scheduling Algorithms**  

1. **First Come First Served (FCFS)**  
    - Processes are executed in the order they arrive in the ready queue.  
    - **Characteristics**:  
        - Simple to implement.  
        - Non-preemptive.  
        - Can lead to the **convoy effect**, where long processes block shorter ones.  

2. **Shortest Job First (SJF)**  
    - Executes the process with the shortest burst time first.  
    - **Characteristics**:  
        - Can be preemptive or non-preemptive.  
        - Optimal for minimizing average waiting time.  
        - May cause **starvation**: Long processes may never execute.  

3. **Round Robin (RR)**  
    - Each process gets a fixed time slice in cyclic order.  
    - **Characteristics**:  
        - Preemptive by nature.  
        - Fair for all processes.  
        - Suitable for time-sharing systems.  

4. **Priority Scheduling**  
    - Each process is assigned a priority. Processes with higher priority execute first.  
    - **Characteristics**:  
        - Can be preemptive or non-preemptive.  
        - May cause **starvation**, mitigated by aging.  

5. **Multilevel Queue**  
    - Processes are divided into multiple queues based on their characteristics.  
    - **Characteristics**:  
        - Each queue has its own scheduling algorithm.  
        - Processes are not allowed to move between queues.  

---

## **Preemptive Vs. Non-Preemptive Scheduling**  

- **Preemptive**: The CPU can be taken away from a running process.  
    - **Examples**: Round Robin, Preemptive Priority, Preemptive SJF.  
    - **Context Switching**: Requires frequent context switches.  
    - **Suitability**: Real-time systems.  

- **Non-Preemptive Scheduling**: The CPU cannot be taken away once a process starts.  
    - **Examples**: FCFS, Non-Preemptive Priority, Non-Preemptive SJF.  
    - **Context Switching**: Fewer context switches.  
    - **Suitability**: Batch systems.  

---

## **Context Switching**  
The process of saving the state of a running process and loading the state of another process.  

### **Steps in Context Switching**  
1. Save the state of the current process in its **Process Control Block (PCB)**.  
2. Load the state of the next process from its **PCB**.  
3. Update the CPU with the new process’s information.  
