#include<string.h>
#include<stdio.h>

int main(void)
{
	char str[50] = "Hello--all--welcome--to--the--team";
	char str1[50] = "Hello--all--welcome--to--the--team";
	char *delim = "--";
	char *ptr = str;

	char *svptr;
	char *res;
/*
	res = strtok(ptr, delim);
	while (res != NULL) {
		printf("%s\n", res);
		res = strtok(NULL, delim);
	}
*/
	res = strtok_r(ptr, delim, &svptr);
	while (res != NULL) {

		printf("%s\n", res);
		res = strtok_r(NULL, delim, &svptr);
	}

	return 0;
}
