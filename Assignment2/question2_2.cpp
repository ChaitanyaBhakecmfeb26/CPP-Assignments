// Explain how reference variables act as aliases and how that affects swapByReference(). 

// A reference variable in C++ is simply another name (alias) for an existing variable. It does not create new memory. Instead, it refers directly to the same memory location as the original variable.

// If we change the value of reference varaiable the orignal value also get changed since both points to the same memory address

// Therefore in swap by reference , the alias of the variables  are passed so this makes changes in orignal value too and variables are swapped.