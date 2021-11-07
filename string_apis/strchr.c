/* 
 * We need to define _GNU_SOURCE or else strchrnull will not 
 * be available since it is not standard c instead it is  just 
 * GNU extension
 */

#define _GNU_SOURCE

#include<stdio.h>
#include<string.h>

int main(void)
{
	char *str = "Hello world!";

	char ch = 'l';

	char *pos;

	/*strchr*/
	if (pos = strchr(str, ch)) {
		printf("'%c' is found at pos '%ld' in string \"%s\"\n",
			       	ch, pos-str, str);
	} else {
		printf("The char %c Not found in \"%s\"\n", ch, str);
	}


	/*strrchr*/
	if (pos = strrchr(str, ch)) {
		printf("'%c' is found at pos '%ld' in string \"%s\"\n",
			       	ch, pos-str, str);
	} else {
		printf("The char %c Not found in \"%s\"\n", ch, str);
	}

	ch = 'z';

	/*strchrnul*/
	if ((pos = strchrnul(str, ch)) != (str+strlen(str))) {
		printf("'%c' is found at pos '%ld' in string \"%s\"\n",
			       	ch, pos-str, str);
	} else {
		printf("The char '%c' Not found in \"%s\"\n", ch, str);
	}
	return 0;
}
