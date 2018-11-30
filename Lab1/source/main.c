#include<stdio.h>
#include<stdlib.h>
#include "information.h"
main() {
	person p;
	printf("Please input your name:");
	scanf_s("%s", &p.name,8);
	printf("Please input your gender(0 for woman 1 for man):");
	scanf_s("%d", &p.gender);
	printf("Please input your age:");
	scanf_s("%d", &p.age);
	printf("\nHi! %s. ", p.name);
	if (p.gender == 0) {
		printf("You are a %d-year-old woman.\n", p.age);
	}
	else
		printf("You are a %d-year-old man.\n", p.age);
	system("pause");
}