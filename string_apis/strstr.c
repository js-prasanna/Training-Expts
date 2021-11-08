#define _GNU_SOURCE
#include<stdio.h>
#include<string.h>

int main(void)
{
	char *src = "Hello world";
	char *sub = "WoRld";

	char *pos = NULL;

	/*strstr*/
	if (pos = strstr(src, sub)) {

		printf("'%s' is found in '%s' at the pos '%ld'\n",
			       	sub, src, pos-src);
	} else {
		printf("'%s' not found in '%s'\n", sub, src);
	}


	/*strcasestr*/
	if (pos = strcasestr(src, sub)) {

		printf("'%s' is found in '%s' at the pos '%ld'\n",
			       	sub, src, pos-src);
	} else {
		printf("'%s' not found in '%s'\n", sub, src);
	}





	return 0;
}
