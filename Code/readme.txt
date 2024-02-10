Use this command to see all the temp files generated while running a c program:
gcc -Wall -save-temps {Filenamewhichincludescode} -o {OutputFileName}

GO TO Statements - These are used to break multiple loops with a single statement

Pointers are used to store the address of variables. Declared using *

Arrays are passed in a method as an address. So any change inside the method reflects outside

Strings - In C we do not have a string datatype. Strings are char arrays.

typedef - It is used to give new names to inbuilt keywords and types. typedef <previous_name> <alias_name>;

Important lecture on memory allocation:
https://www.youtube.com/watch?v=kmV55hPsSQE&list=PLu0W_9lII9aiXlHcLx-mDH1Qul38wD3aR&index=45&ab_channel=CodeWithHarry

Storage classes - Automatic, External, Static and Register
Automatic - Local Variables. Default Value is Garbage Value
External -  Global Variables. Default value is 0 for int
Static - Local to the body or block where they are defined. Default value=0. They remain in memory for the complete program execution
Register - Scope is local to the method or block. Default value is garbage value. Used to store those variables which are commonly used.

getchar() - Use this method when method skips char or string input

srand() - This function is used to generate a random number

Null Pointer = int *ptr = NULL;
NULL = (void *)0;

Dangling Pointer - which refers to a free memory location

Wild pointers - The pointers which are defined but not initialized. So they can store any garbage values which can create bugs. Use ptr=NULL

File - File is a type in C. Fopen("fileName", "mode") is used to open a file

