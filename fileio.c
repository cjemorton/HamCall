#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Create a structure to hold file information.
typedef struct{
  char* url;
} file_t;

file_t* new_file(void);

char fileio()
{
	// Declare a pointer to a file stucture. `ptr` will hold the memory address of a structure.
	file_t *ptr;
	ptr = new_file();
	
	// Now that `ptr` has the memory address of the file structure. We can perform operations on
	// *ptr just like we would on any other structure. In this case the assignment to another structure variable.
	
	file_t file = *ptr;
	
	strcpy(file.url, "The URL!");
	//file.url = 10;
	return 0;
}
file_t* new_file(void)
{
	// Allocate the exact right ammount of memory for the file structure.
	// Due to how the sizeof operator works, we can get a "shortcut" and get 
	// the number of bytes needed without aving to specify the file_t type to sizeof.
	file_t *p = malloc(sizeof *p);
	return p;
}