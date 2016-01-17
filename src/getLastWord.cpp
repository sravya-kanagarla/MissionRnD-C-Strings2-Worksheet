/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

int strLength(char *str) {
	int i;
	for (i = 0; str[i] != '\0'; i++);
	return i;
}

char * get_last_word(char * str) {
	if (str == NULL)
		return NULL;
	int i;
	int len = strLength(str);
	int index = 0;
	for (i = len; str[i] != ' ' && i >= 0; i--);
	char *lastWord = (char *)malloc(sizeof(char) * len - i);
	i++;
	while (i <= len) {
		lastWord[index] = str[i];
		i++;
		index++;
	}
	return lastWord;
}
