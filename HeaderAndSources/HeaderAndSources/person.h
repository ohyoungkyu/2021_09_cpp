#include "Animal.h"
#ifndef __PERSON_H__	//중복정의 막는함수
#define __PERSON_H__

//클래스의 선언과 파일은 이름이 같지 않아도 된다.
//여러개의 헤더파일에 중복적용이 되어있어도 상관없다.

class Person : Animal {
public:
	char regist_no[50];

	Person(const char* regist_no, const char* person_name);

	void printInfo();
};

#endif