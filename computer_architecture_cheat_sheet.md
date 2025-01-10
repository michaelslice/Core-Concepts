https://en.wikipedia.org/wiki/CPU_cache#:~:text=Many%20modern%20desktop%2C%20server%2C%20and,both%20executable%20instructions%20and%20data.

Each process uses a portion of its memory in RAM for the stack, heap, and the text code

## Topics We Will Cover
- CPU
- RAM
- Disk
- Motherboard
- Power Supply Unit
- Graphics Processing Unit
- Cooling System
- Operating System

***

## Memory Data Units

- Bit: Uses 0 or 1
- Byte: 8 bits
- Kilobyte: 1024 bytes
- Megabyte: 1024 kilobytes
- Gigabyte: 1024 megabytes
- Terabyte: 1024 gigabytes
- Petabyte: 1024 petabytes
- Exabyte: 1024 petabytes
- Zettabyte: 1024 exabytes

***

## CPU
- **Control Unit**: Directs the flow of data and instructions within the CPU, ensuring the corret execution of tasks
- **Arithmetic Logic Unit**: Performs arithmetic operations (addition, and subtraction) and logical operations(AND, OR, NOT)
- **Registers**: Small, fast storage locations for temporary data and instructions currently being used by the CPU
- **Cache**: High-speed memory inside the CPU for storing frequently accessed data to reduce latency
- **Buses**: Are communication pathways that transfer data, instructions, and control signals between components of the CPU, memory, and peripherals
- **Clock(Clock Generator)**:  Generates a clock signal to synchronize the operations of the CPU and other components.
- **Bus Interface Unit**: Facilitates communication between the CPU and other system components, like memory and I/O devices.

**CPU Hierarchy**

- **L1 Cache**: Stores critical and frequently accessed data and instructions 
- Size: Small (usually 16 KB to 128 KB per core)
for each CPU core 
    - Split into two parts...
    - L1 Instruction Cache (L1I): Stores instructions that the CPU executes.
    - L1 Data Cache (L1D): Stores data the CPU needs to process.  
- **L2 Cache**: Stores more data and instructions which reduces the number of requests to the slower L3 
- Size: Larger than L1 (usually 128 KB to 2 MB per core).
- **L3 Cache**: Stores data and instructions used by multiple cores helping to reduce contention between cores
Size: Larger than L2 (typically 2 MB to 64 MB or more).

**Cache Hierarchy Characteristics**
Trades Offs
- Higher levels (L1) are faster but smaller.
- Lower levels (L3, L4) are slower but larger.

## **Cache Locality**

**Cache Locality**: Refers to the tendency of a program to access relatively small portion of memory repeatedly over a short period.  It's important because modern processors use cache memory to store frequently accessed data, which is much faster than main memory (RAM). There are two types of cache locality:
- **Spatial Locality**: This refers to accessing memory locations that are near each other. For example, accessing elements in an array or consecutive memory addresses.
- **Temporal Locality**: This refers to accessing the same memory location multiple times over a short period. For example, repeatedly using a variable or frequently called functions.
Cache Associativity
Cache Miss

## Cache Associativty 

**Cache Associativty**: Defines how data is stored in the cache and determines the number of possible places where a particular block of data can be stored
- **Direct-mapped cache**: Each block of memory is mapped to exactly one cache line.
- **N-way associative cache**: A block of memory can be placed in any of the N cache lines, providing more flexibility and reducing the chance of collisions.
- **Fully associative cache**: A memory block can be placed anywhere in the cache.

Higher associativity helps reduce the cache miss rate by providing more options for placing data in the cache.

## Cache Miss
A cache miss occurs when the data requested by the CPU is not in cache, it must be fetched from RAM or disk. There are three types of misses
- **Compulsory Miss (Cold Miss)**: This miss occurs when the data is being accessed for the first time, and it has never been loaded into the cache. It's inevitable and happens when a program starts executing.
- **Capacity Miss**: This miss occurs when the cache is too small to hold all the data needed by the program. As a result, some data must be evicted to make room for new data.
- **Conflict Miss**: This happens when multiple memory locations map to the same cache line due to limited associativity, even though there might be available space in other parts of the cache. Increasing the cache's associativity helps reduce conflict misses.

## Cache Affinity
Refers to the tendency of a program to access data that is stored in a specific cache level or a set of memory locations, resulting in better cache performance. If a program has good cache affinity it maximizes cache hits reducing the time spent on fetching data from slower memory.

***

## RAM
RAM is located on motherboard

The OS keeps a seperate memory table for each process
**Stack**: Stores local variables, function call information, and control data 
such as return addresses
**Size**: Usually 1MB - 8MB
**Heap**: Stores dynamically allocated memory(malloc, or new)
**Text/Code Segment**: Contains the executable instructions of the program

***

## Disk
The disk is used to store persistent storage, allowing data to be saved even when the computer is powered off. There are two main types
- **Hard Disk Drive**: A magnetic storage device that uses rotating disks and read/write heads to store data. It is slower compared to SSDs but offers higher storage capacity at a lower cost
- **Solid State Drive**: A faster storage device that uses flash memory to store data. It has no moving parts, making it more durable and providing faster read and write speeds compared to HDDs.
***

## Motherboard
The motherboard is the main circuit board that connects and allows communication between all of the computer's components. Key features include
- **Chipset**: Controls communication between the processor, memory, and other peripherals 
- **Sockets**: Physical connectors for placing components like the CPU and RAM
- **Expansion Slots**: PCI/PCIe slots for adding expansion cards, such as graphic cards, sound cards, or network cards
**Power Connectors**: Provide power to the motherboard and attached components
**Integrated Components**: Some motherboards have integrated graphics, sound, or networking, eliminiating the need for dedicated cards

***

## Power Supply Unit
The power supply unit converts electrical power from an outlet into a usable form for the computer. Key points
- **Voltage Conversion**: Converts AC (alternating current) from the power outlet into DC (direct current), which is used by the computer’s internal components.
- **Wattage Rating**: Determines the maximum power output of the PSU. A higher wattage PSU is required for systems with powerful components, like high-end graphics cards.
- **Efficiency**: The efficiency rating indicates how much of the input power is converted into usable power. Higher efficiency means less energy waste and heat generation.

***

## Graphics Processing Unit
The GPU is responsible for rendering images, videos, and animations, typically for graphical output to a display. Key points:

- **Parallel Processing**: GPUs excel at performing many calculations simultaneously, making them well-suited for tasks like rendering graphics and running deep learning models.
- **Video Memory (VRAM)**: Specialized memory used by the GPU to store textures, buffers, and other data for rendering graphics. VRAM is optimized for fast read and write speeds.

### Dedicated vs Integrated:
- Dedicated GPUs have their own memory and processing power, offering superior performance for gaming, video editing, and high-performance computing tasks.
- Integrated GPUs are built into the CPU and share memory with the system, providing lower performance but reducing cost and power consumption.

***

## Cooling System
Computers generate heat, and effective cooling is essential to prevent components from overheating. Cooling systems include:

- **Air Cooling**: Uses fans to dissipate heat. It is the most common and cost-effective cooling solution for everyday systems.
- **Liquid Cooling**: Uses a pump and liquid coolant to transfer heat away from components like the CPU and GPU. It provides better cooling performance and is used in high-performance systems.
***

## Operating System
The operating system (OS) is software that manages hardware resources and provides services for computer programs. Key functions include

- **Process Management**: Manages the execution of processes, including multitasking and process scheduling.
- **Memory Management**: Controls memory allocation for programs and data, managing both physical and virtual memory.
- **File System**: Organizes and manages data on storage devices, ensuring that files are stored, retrieved, and modified correctly.
- **Device Drivers**: Provide interfaces for hardware devices, allowing software to communicate with peripherals such as printers, cameras, and storage devices.
- **User Interface (UI)**: Provides the user with an interface to interact with the system, typically in the form of a graphical user interface (GUI) or command-line interface (CLI).