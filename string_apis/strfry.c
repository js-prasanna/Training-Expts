#define _GNU_SOURCE 
#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[20] = "Hello world!";

	printf("Before randomize %s\n", str);
	printf("After randomize %s\n", strfry(str));


	return 0;
}
