#include "main_header.h"
#include "Animal.h"
#include "person.h"

Person::Person(const char* regist_no, const char* person_name) : Animal(2,person_name) {
	strcpy(this->regist_no, regist_no);
}

void Person::printInfo() {
	printf("사람의 이름 : %s, 사람의 주민번호 : %s\n", name, regist_no);
}