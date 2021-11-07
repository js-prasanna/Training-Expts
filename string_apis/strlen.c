#include<string.h>
#include<stdio.h>

int main(void)
{
	char *str = "Hello World!";

	printf("The length of string \"%s\" is : %ld\n",
		       	str, strlen(str));

	return 0;
}
