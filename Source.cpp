
/*Garjan Raj Gosain
* 
      134210210*/
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


int main()
{
	char name_str[20];
	printf("What is your name: ");
	scanf(" %s", &name_str);

	printf("Hi %s :)", name_str);
	return 0;
}