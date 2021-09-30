#ifndef __ANIMAL_H__	//중복정의 막는함수
#define __ANIMAL_H__

class Animal {
public:
	int legs;
	char name[50];

	Animal(int legs, const char* name);

	void printInfo();
};
#endif