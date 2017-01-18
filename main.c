#include <stdio.h>
#include <stdlib.h>
#include "fileio.h"

int main(int argc, char **argv)
{
	/* printf("5 * 2: %d\n", timesTwo(10)); */
	
	//printf("%d", fileio_run());
	
	printf("HamCall - Canadian Amateur Radio Callsign Lookup, Version: %s\n", "1.00-devel");
	fileio_run();
}
