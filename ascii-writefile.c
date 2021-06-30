/*
	Description:
	Coding example - Writing an ASCII file

	Author:
	Jorge Barrientos Poisson

	ChangeLog:
	2020.03.17 | 1st version (non-interactive)
*/

#include <stdio.h>

FILE *textfile;

int main( int argc, char **argv ) {

	textfile = fopen("ascii.txt","w");
	for ( int f = 1; f < 10 ; f++ ) {
		fprintf(textfile,"%d",f);
	}
	fprintf(textfile,"\n");
	fclose(textfile);
	return 0;
}
