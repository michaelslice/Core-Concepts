# Cost of Virtual Methods
1. Virtual Table
- Each class with virtual methods has a vtable(Virtual Table), which is a array of pointers to the virtual functions. When an object of that class is created, a pointer to the appropriate vtable is stored in the object
2. Overhead Costs
- Each object with virtual methods contains an extra pointer(usually at the start of the object) to the vtable which increases the size of each object 
- The size of the vtable depends on the number of virtual functions and may vary by compiler implementation
3. Runtime Overhead
- When calling a virtual method, there is an additional indirection involved. The call is resolved through the vtable, meaning that the address of the function must be looked up in the vtable before it can be called

# What does adding a virtual method do to the size of an object?
- Increases the size of the object of that class because it introduces the need for a vtable pointer 

# Where is the vtable stored?
- Usually stored in the data segment of ram

# When to use virtual inheritence
- You use virtual inheritence when you want to ensure that single instance of a common base class is shared between multiple derived classes, preventing multiple instances of the same base class from being created

# The diamond problem
- Occures when a class is derived from two classes that share a common base class. Without virtual inheritence, the derived class will inherit two copies of the common base class.