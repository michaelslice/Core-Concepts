## **Paging and Segmentation**

1. **Paging**  
   - Divides memory into fixed-size blocks called **pages**.  
   - Corresponding physical memory is divided into **frames**.  
   - Eliminates external fragmentation but introduces internal fragmentation.  

2. **Segmentation**  
   - Divides memory into variable-sized segments based on logical divisions like code, data, and stack.  
   - Addresses consist of a segment number and an offset.  

---

# **Demand Paging**  
   - Only loads pages into memory when they are accessed.  
   - Reduces memory usage and speeds up program loading.  
   - **Page Fault**: Occurs when a requested page is not in memory.  
     - The OS loads the page from disk and updates the page table.  

---

# **Page Replacement Algorithms**  
When memory is full and a page fault occurs, the OS uses a **page replacement** algorithm to decide which page to evict.  

1. **FIFO (First-In, First-Out)**  
   - Evicts the oldest loaded page.  
   - Simple but can lead to Belady's Anomaly (increased faults with more frames).  

2. **LRU (Least Recently Used)**  
   - Evicts the page least recently accessed.  
   - Approximates optimal replacement with manageable overhead.  

3. **Optimal**  
   - Evicts the page that will not be used for the longest time in the future.  

4. **Clock**  
   - A practical implementation of LRU.  
   - Uses a circular list and a reference bit to approximate recent usage.  

---

# **Contiguous vs. Non-Contiguous Allocation**  

1. **Contiguous Allocation**  
   - Memory blocks are allocated in a single continuous section.  
   - **Pro**: Simple addressing.  
   - **Cons**: Prone to external fragmentation.  

2. **Non-Contiguous Allocation**  
   - Memory blocks can be scattered throughout physical memory.  
   - Uses paging or segmentation to manage allocation.  
   - **Pros**: Eliminates external fragmentation.  
   - **Cons**: Complex address translation.  
