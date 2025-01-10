# Smart Pointer
Is a composition class that is designed to manage dynamically allocated memory and ensure that memory gets deleted when the smart pointer goes out of scope

# Unique Ptr
Manages exclusive ownership, such as single-owner resources or implementing RAII(Resource Acquisition is Initialization)

# Shared Ptr
Managing shared ownership, such as when multiple parts of a program need access to the same resource

# Weak Ptr
Breaking circular references in std::shared_ptr-based structures like graphs or trees.