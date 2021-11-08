#include<stdio.h>
#include<string.h>

int main(void)
{
	char *str1 = "Hello world";
	char *str2 = "Hello WoRLd";
	int res;
	int n = 3;


	/*strcmp*/
	res = strcmp(str1, str2);

	if (res > 0)
		printf("\"%s\" is Greater than \"%s\"\n", str1, str2);
	else if (res < 0)
		printf("\"%s\" is Lesser than \"%s\"\n", str1, str2);
	else
		printf("\"%s\" is Equal to \"%s\"\n", str1, str2);	


	/*strncmp*/
	res = strncmp(str1, str2, n);

	if (res > 0)
		printf("\"%s\" is Greater than \"%s\"\n", str1, str2);
	else if (res < 0)
		printf("\"%s\" is Lesser than \"%s\"\n", str1, str2);
	else
		printf("\"%s\" is Equal to \"%s\"\n", str1, str2);	


	/*strcasecmp*/
	res = strcasecmp(str1, str2);

	if (res > 0)
		printf("\"%s\" is Greater than \"%s\"\n", str1, str2);
	else if (res < 0)
		printf("\"%s\" is Lesser than \"%s\"\n", str1, str2);
	else
		printf("\"%s\" is Equal to \"%s\"\n", str1, str2);	


	/*strcasecmp*/
	res = strncasecmp(str1, str2, n);

	if (res > 0)
		printf("\"%s\" is Greater than \"%s\"\n", str1, str2);
	else if (res < 0)
		printf("\"%s\" is Lesser than \"%s\"\n", str1, str2);
	else
		printf("\"%s\" is Equal to \"%s\"\n", str1, str2);	

	return 0;
}
