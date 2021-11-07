#include<string.h>
#include<stdio.h>

int main(void)
{
	char str1[10] = "Hello ";
	char str2[10] = "World";

//	printf("The resulting string is : %s\n",
//		       	strcat(str1, str2));

	printf("The strncat of N=3 is : %s\n",
	`	       	strncat(str1, str2, 3));

	return 0;
}
