# CPP

## RAII
**Resource Acquisition is Initialization**: 

## Rule of Three
If the class requires any of the following, they need all three
- Destructor: To clean up dynamically allocated resources
- Copy Constructor: To create a new object as a copy of an existing one. 
- Copy Assignment operator: To assign the state of one object to another existing object.
---

## Rule of Five
- **Destructor**: Cleans up resources when an object is destroyed.

- **Copy Constructor**: Creates a new object as a copy of an existing object.

- **Copy Assignment Operator**: Assigns the state of one object to another object.

- **Move Constructor**: Transfers ownership of resources from a temporary object to a new object.

- **Move Assignment Operator**: Transfers ownership of resources from one object to another, typically used for temporary objects.

---

## Shallow vs Deep Copy
**Shallow Copy**: The default copy constructor and default assignment operator provides the shallow copy. 
It copies the memory addresses of the orignal object's resources. This is fine for classes that don't have dynamic memory
**Deep Copy**: A deep copy duplicates the object and creates a new copy of any dynamically allocated resources.
The copied object gets its own copy of the data, entirely seperate from the orignal object.

---

## Move Semantics
The class will transfer ownership of the object rather than making a copy
Benefits:
- Avoids deep copies, improving performance.
- Essential for working with modern C++ containers and temporary objects.
**L-Value**: Refers to an object with a persistent memory address, and appears on the left side of an assignment
**R-Value**: Refers to a temporary object that does not have persistant memory address, appears on the right side of assignment

---

## Smart Pointers
- **std::unique_ptr**: A smart pointer that owns and manages a resource. Ensures sole ownership of the resource and destroys it when the unique_ptr goes out of scope.
Use for exclusive ownership.
- **std::shared_ptr**: A smart pointer that allows shared ownership of a resource. The resource is destroyed only when the last shared_ptr managing it is destroyed.
Use for shared ownership.
- **std::weak_ptr**: A non-owning smart pointer that works with std::shared_ptr to prevent cyclic references. 

**Circular Reference**: Occurs when two or more objects or components reference each other in a way that forms a loop

## Order of Construction for Derived Objects
- Base Class constructor is executed first.
- Derived Class constructor is executed next.
- If there are multiple layers of inheritance, the process continues from the most base class upwards.

## Order of Destruction
- Derived Class destructor is executed first.
- Base Class destructor is executed next.

## Benefits of Using Derived Classes
- Code Reusability: Share common logic between related classes.
- Extensibility: Add new functionality in derived classes without modifying the base class.
- Polymorphism: Enable runtime decision-making.

## Virtual Function
Is a special type of function that, when called resolves to the most derived version of the function for the actual
type of the object being referenced or pointed to
**Compile-time polymorphism** refers to forms of polymorphism that are resolved by the compiler. These include function overload resolution, as well as template resolution.
**Runtime polymorphism** refers to forms of polymorphism that are resolved at runtime. This includes virtual function resolution.
**Best Practice**: 
- The base class function should be virtual 
- Use the override specifier (but not the virtual keyword) on override functions in derived classes. This includes virtual destructors.

**Covarient Return Type**: Allows overridden methods in derived classes to return a more specific type (e.g., derived class pointers).

**Virtual Table**: 
- Is a static array, that contains one entry for each virtual function that can be called by objects of that class
- Each entry is a function pointer that points to the most derived function accessible by that class
- The compiler also adds a hidden pointer that is a member of the base class 

**Pure Virtual Function**: Is a function that has no implementation in the base class and is meant to be overriden in the derived class
**Dynamic Cast**: Converts a base class pointer to a derived class pointer 