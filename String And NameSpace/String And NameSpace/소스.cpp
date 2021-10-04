//문자열
#define _CRT_SECURE_NO_WARNINGS
//strcpy strcat

#include <cstdio>
//#include <cstring>
#include <string>

int main() {

	char myString[100];

	strcpy(myString, "Hello World!\n");

	strcat(myString, "Hello C++!");

	printf("%s", myString);

	return 0;

}