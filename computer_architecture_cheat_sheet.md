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

***

## RAM
RAM is located on motherboard

The OS keeps a seperate memory table for each process
**Stack**: Stores local variables, function call information, and control data such as return addresses
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