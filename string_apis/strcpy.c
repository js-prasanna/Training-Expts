#include<string.h>
#include<stdio.h>

int main(void)
{

	char *src = "Hello World!";
	char *src1 = "Welcome to GES";
	char dest[20] = "\0";
	char *ret_addr;
	
	/* Strcpy */
	printf("Before cpy dest is \"%s\"\n", dest);
	ret_addr = strcpy(dest, src);
	printf("After cpy dest is \"%s\" and redaddr is '%p'\n",
		                                 	dest, ret_addr);


	/* Strncpy */
	printf("Before strncpy dest is \"%s\"\n", dest);
	strncpy(dest, src1, 5);
	printf("After strncpy dest is \"%s\"\n", dest);

/*
 * Require BST Libs
 *
 *	printf("Before strncpy dest is \"%s\"\n", dest);
 *	strlcpy(dest, src1, 9);
 *	printf("After strncpy dest is \"%s\"\n", dest);
 *
 */

	/* Strncpy */
	printf("Before stpcpy dest is \"%s\"\n", dest);
	ret_addr = stpcpy(dest, src);
	printf("After stpcyp dest is \"%s\" and redaddr is '%p'\n",
		                                 	dest, ret_addr);



	return 0;
}
