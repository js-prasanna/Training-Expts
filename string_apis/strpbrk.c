#include <stdio.h>
#include <string.h>


int main(void)
{
	char * str = "Hello World!";
	char * bstr = "good";

	
	printf("The first byte of '%s' that matches in '%s' is at '%ld'\n",
		             	bstr, str, strpbrk(str, bstr)-str);




	return 0;
}
