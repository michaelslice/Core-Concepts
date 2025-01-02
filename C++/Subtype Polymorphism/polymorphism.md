# Polymorphism
Subtype Polymorphism refers to the ability of the objects belonging to different types to respond to a member function calls of the same name

In order for dynamic binding to take place in C++, several conditions must be met:

- The call must be to a member function, not a standalone function. Function calls in C++ always use static binding.
- The member function must have been declared using the keyword virtual. Calls to non-virtual member functions always use static binding.
- The member function must be called through a pointer or reference to an object, not an object name. All calls to member functions (including those to virtual member functions) through object names use static binding.

# Dynamic vs Static Types
- **Static Type**: Determined at compile time, specified in the pointer declaration(vehicle*)
- **Dynamic Type**: Determined at runtime based on the object the references (car*)

# Virtual Dispatch:

- Ensures the correct version of a virtual member function is called based on the dynamic type.
- Uses a v-table (virtual table), which is an array of function pointers, to resolve the correct function at runtime.
- Virtual dispatch involves a small runtime performance cost, but it is typically negligible.

# Declaring Virtual Member Functions:

- Use the virtual keyword in the function prototype (e.g., virtual void print() const;).
- A derived class automatically overrides a base class's virtual member functions.
- Virtual destructors are recommended if the class has virtual member functions.

# Pure Virtual Functions and Abstract Classes:

- A pure virtual function is declared with = 0 in its prototype (e.g., virtual void earnings() const = 0;).
- A class containing at least one pure virtual function is abstract.
- Abstract classes cannot be instantiated but can serve as base classes for inheritance.
- A derived class must provide definitions for all inherited pure virtual functions; otherwise, it also becomes abstract.