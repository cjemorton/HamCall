#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_url_from_config(char*);

int fileio_run()
{
	char url;
	get_url_from_config(&url); // Pass in the memory address of url
	//printf("URL: %d", get_url_from_config());
	return 0;
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
	   //printf("%c",ch); // Prints out the content of the file.
	*url = ch; // Dereference url and assign it the value of ch from function.
	fclose(fp);
	//return 0;
}