# C MALLOC() AND FREE()C
C provides dynamic memory allocation functions that can be employed to allocate 
or reallocate certain memory spaces while the program is running. Allocated
memory storage can be released as soon as it is not needed. 

malloc() is used to allocate a specified size of memory space.
syntax:
	```
	#include <stdlib.h>
	void *malloc(size_t size);
	```
Because memory is a limited resource, it is released when not used.
free() function is used to release it.

## Resources
+ [pointers and dynamic memory](https://www.youtube.com/watch?v=_8-ht2AKyH4&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&index=12)
+ [Dynamic memory allocation](https://www.youtube.com/watch?v=xDVC3wKjS64&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&index=13)

## Tasks
- 0-create-array.c :  a function that creates an array of chars, and initializes it with a specific char.
- 1-strdup.c : a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
- 2-str-concat.c : a function that concatenates two strings.
- 3-alloc-grid.c : a function that returns a pointer to a 2 dimensional array of integers.
- 4-free-grid.c : a function that frees a 2 dimensional grid previously created by your alloc-grid function.
- 100-argstostr.c :  a function that concatenates all the arguments of your program.
- 101-strtow.c : a function that splits a string into words.


