// 1. Why must const members be initialized in initializer list? 
// 2. What happens if you try to assign the value of a const member inside constructor body?
// 3. Why is initializer list faster than assignment?


// 1.
// const variables must be initialized at the time of object creation and cannot be changed later.
// The initializer list initializes members before the constructor body runs, so it is the only place where const members can be given a value.

// 2.
// It will produce a compile-time error.

// 3.
// Initializer lists are faster because data members are initialized directly, while assignment first creates the object and then assigns a value to it.
