// Q4.3 — Explain:
//  Why constructors are not called when using malloc
//  Why new is preferred in C++
//  Difference in return types and initialization
//  Why malloc cannot initialize complex types


// 1.
// malloc is a C function used only to allocate raw memory.
// It simply reserves a block of memory but does not know anything about C++ classes.

// Since it only allocates memory, constructors are not executed, so object initialization does not happen.

// 2.
// new is a C++ operator designed for object creation.
// When new is used:
// Memory is allocated.
// The constructor is automatically called.
// The object is properly initialized.

// 3.
// Return Type: Defines the data type (e.g., string, int, void, boolean) a method or function gives back after completing a task. It enforces that the output matches the expected structure.
// Initialization: The process of assigning an initial value to a variable at the time of its declaration (e.g., int a = 5;). It sets up the starting state of a system or variable.

// 4.
// malloc only allocates raw memory. It does not call constructors.

// Complex types in C++ (such as classes or objects) usually require constructors to properly initialize their data members.

// Since malloc does not call the constructor, the object’s internal variables remain uninitialized, which can lead to incorrect or undefined behavior.