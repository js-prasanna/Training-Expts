#include<stdio.h>
#include<string.h>

int main(void)
{
	char *str = "Hello World!";
	char *sub = "ltlo";

	printf("length of initial segment of '%s' in '%s' is %ld\n",
		       	sub, str, strspn(str, sub));

	printf("length of initial segment of '%s' not in '%s' is %ld\n",
		       	sub, str, strcspn(str, sub));


	return 0;
}
