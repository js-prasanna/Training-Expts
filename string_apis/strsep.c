#include<string.h>
#include<stdio.h>

int main(void)
{
	char str[50] = "Hello--all--welcome--to--the--team";
	char *delim = "--";
	char *ptr = str;

	char *res = strsep(&ptr, delim);
	while (res != NULL) {
		printf("%s\n", res);
		res = strsep(&ptr, delim);
	}

	return 0;
}
