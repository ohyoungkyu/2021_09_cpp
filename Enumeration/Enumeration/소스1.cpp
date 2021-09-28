﻿#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

enum Gender {
	MALE, FEMALE
};

class Student {
public:
	char name[10];
	int student_no;
	Gender gender;

	Student(const char* name, int student_no, Gender gender) {
		strcpy(this->name, name);
		this->student_no = student_no;
		this->gender = gender;
	}

	void printInfo() {
		printf("%s의 학생번호는 %d입니다. 성별은 %s 입니다.", name, student_no,
			gender == Gender::MALE ? "남성" : "여성");
	}
};

int main() {

	Student* student = new Student("홍길동", 2, Gender::MALE);

	student->printInfo();

	return 0;

}