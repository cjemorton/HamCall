#include <stdio.h>
#include <stdlib.h>
#include "fileio.h"
#include <curl/curl.h>
int main(int argc, char **argv)
{
	/* printf("5 * 2: %d\n", timesTwo(10)); */
	
	//printf("%d", fileio());
	
	printf("HamCall - Canadian Amateur Radio Callsign Lookup, Version: %s\n", "1.00-devel");
	//fileio();
	file_get( "https://apc-cap.ic.gc.ca/datafiles/amateur.zip", "amateur.zip" );

}