# **File Concepts**  

1. **File Types**  
   - **Text Files**: Contain human-readable characters.  
   - **Binary Files**: Contain data in a binary format.  
   - **Special Files**: Represent hardware devices or system data.  

2. **File Attributes**  
   - **Name**: Human-readable identifier.  
   - **Type**: Helps identify file format or usage.  
   - **Location**: Pointer to the file on storage.  
   - **Size**: Current size of the file.  
   - **Protection**: Access permissions.  
   - **Timestamps**: Creation, modification, and access times.  

3. **File Operations**  
   - **Create**: Allocate space and metadata for a file.  
   - **Open**: Prepare a file for access.  
   - **Read**: Retrieve data from a file.  
   - **Write**: Store data into a file.  
   - **Delete**: Remove a file and free space.  

---

# **Directory Structures**  
Directories organize files for easy navigation and management.  

1. **Single-Level Directory**  
   - All files in a single directory.  
   - Simple but leads to naming conflicts and limited scalability.  

2. **Two-Level Directory**  
   - Separate directories for each user.  
   - Avoids naming conflicts between users but still lacks flexibility.  

3. **Tree-Structured Directory**  
   - Hierarchical organization with nested subdirectories.  
   - Supports easy categorization and scalability.  

4. **Acyclic Graph Directory**  
   - Allows shared files using links.  
   - Prevents cycles and duplicate copies but requires extra management for link consistency.  

---

# **File System Implementation**  

1. **File Control Block (FCB)**  
   - Contains metadata (name, size, permissions) for each file.  
   - OS uses FCB to manage file extensions.  

2. **Directory Implementation**  
   - Directories store mappings of file name to FCBs.  
   - Can be linear lists or hash tables for faster lookups.  

---

# **File Allocation Methods**  

1. **Contiguous Allocation**  
   - Files occupy continuous blocks on disk.  
   - **Pros**: Simple and fast sequential access.  
   - **Cons**: Prone to external fragmentation and requires knowing file size in advance.  

2. **Linked Allocation**  
   - Files are linked through pointers; each block points to the next.  
   - **Pros**: No fragmentation.  
   - **Cons**: Slow random access and overhead of pointers.  

3. **Indexed Allocation**  
   - An index block contains pointers to all file blocks.  
   - **Pros**: Efficient random access.  
   - **Cons**: Extra space for index blocks and potential overhead.  

---

# **Free Space Management**  
To reuse deleted file blocks, free space management techniques include:  

1. **Bit Vector**: A bit array where each bit represents a block's status (free or occupied).  
2. **Linked List**: Links free blocks in a chain.  
3. **Grouping**: Stores addresses of free blocks in groups for faster access.  
4. **Counting**: Tracks consecutive free blocks with starting address and count.  
