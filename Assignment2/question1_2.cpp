// Why must initialization happen before assignment?

/* Initialization happens when an object  is created , while assignment happens after the object already exists. When a varaible is created , memory is allocated and the variable should get its initial value immediately.  If we only assign later , the varaible first gets a default or garbage value , and then it is changed.

 Initialization is more efficient (no extra step)
 Initialization avoids temperory garbage value;
 Sets the value at the time of object creation */

// When is initialization preferred over assignment?

/*
When we are creating const variables
Using constructor to give objects their starting values
Referencing varaibles
For better performance since no garbage value is created and then replaced.

*/