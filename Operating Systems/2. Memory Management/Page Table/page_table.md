## **Page Table**  
A data structure used by a virtual memory system to store mappings between virtual addresses and physical addresses.  

- **Virtual addresses**: Used by the program executed by the accessing process.  
- **Physical addresses**: Used by the hardware or by RAM.  
- The page table is set up by the OS and may be read or written to during the virtual address translation process by the memory management unit (MMU).  

---

## **The Translation Process**  
- The **memory management unit (MMU)** inside the CPU stores a cache of recently used mappings from the OS's page table, known as the **Translation Lookaside Buffer (TLB)**.  
- When a virtual address needs to be translated into a physical address, the TLB is searched first.  
- A **TLB Hit** returns the physical address, allowing memory access to proceed.  
- If there is a **TLB miss**, the system performs a page walk using the page table to find the address mapping.  
