#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* get_url_from_config();

int fileio_run()
{
	get_url_from_config();
	//printf("URL: %d", get_url_from_config());
	return 0;
}

const char* get_url_from_config()
{
	char ch;
	char *file_name = "config.conf";

	FILE *fp;

	fp = fopen(file_name,"r"); // read mode

	// Catch and see if the file is null and display an error.
	if( fp == NULL )
	{
	   perror("Error while opening the file.\n");
	   exit(EXIT_FAILURE);
	}

	/* printf("The contents of %s file are :\n", file_name); */

	while( ( ch = fgetc(fp) ) != EOF )
	   //printf("%c",ch);

	fclose(fp);
	return 0;
}