#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*#pragma warning(disable:4996)*/


void main(void){

	char s1[8] = "Welcome";
	char s2[8];

	int len;

	strcpy(s2, s1);
	len = strlen(s2);

	printf("s2 = %s\n", s2);
	printf("字串的長度為%d\n", len);

	system("pause");
	return 0;

}