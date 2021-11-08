#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[20] = "Hello World!";
	char src[20] = "abcd";

	int size = 3;

	int res = strxfrm(dest, src, size);

	printf("Dest became : \"%s\" and the length is : '%d'\n",
		              	dest, res);


	return 0;
}
