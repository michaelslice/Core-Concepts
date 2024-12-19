## **Key Characteristics of NUMA**

1. **Memory Management**  
   - The OS implements NUMA-aware memory allocation policies to optimize performance by allocating memory closer to the CPU accessing it.  
   - The OS ensures threads or processes are scheduled on CPUs that are closer to the memory they frequently access.  

2. **Scheduling**  
   - NUMA affects the CPU scheduling policies in an OS.  
   - The schedule aims to minimize cross-node memory access by assigning processes to CPUs within the same NUMA node as their allocated memory.  
