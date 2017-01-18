#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_url_from_config(char*);
char url;

void fileio_run()
{
	
	//printf("Address of url: %p\n", &url);
	//printf("Content of address: %c\n", url);
	get_url_from_config(&url); // Pass in the memory address of url
	//printf("URL: %c\n", *url);
	
	printf("Memory address of url outside functions: %p\n", &url);
	printf("%c", url);
	printf("%s\n", "---------------------------");
	
	//return 0;
}

void get_url_from_config(char *url)
{
	char ch;
	char *file_name = "config.conf"; // Which filename to read.

	FILE *fp;

	fp = fopen(file_name,"r"); // read mode

	// Catch and see if the file is null and display an error.
	if( fp == NULL )
	{
	   perror("Error while opening the file.\n");
	   exit(EXIT_FAILURE);
	}

	while( ( ch = fgetc(fp) ) != EOF )
		*url = printf("%c", ch); // Prints out the content of the file.
		printf("Memory address of ch inside function: %p\n", &ch);
		//*url = ch; // Dereference url and assign it the value of ch from function.
		//printf("%s", *url);	
		printf("Memory address of url inside functions: %p\n", &url);
		printf("%s\n", "---------------------------");
		
	fclose(fp);
	//return 0;
}