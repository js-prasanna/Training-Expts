#include<stdio.h>
#include<string.h>

int main(void)
{
	char *str = "Hellow World!";

	char *dup = NULL; 

	/*Str dup*/
	printf("Before strdup '%s'\n", dup);
	dup = strdup(str);
	printf("After strdup '%s'\n", dup);


	/*Strndup*/
	printf("Before strdup '%s'\n", dup);
	dup = strndup(str, 3);
	printf("After strdup '%s'\n", dup);


	return 0;
}
