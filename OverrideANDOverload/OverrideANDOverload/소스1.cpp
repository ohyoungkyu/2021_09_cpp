#define _CRT_SECURE_NO_WARNINGS
//생성자 오버로드
#include <cstdio>
#include <cstring>

class Student {
public:
	int student_no;
	char student_name[100];

	Student() {
		student_no = 0;
		strcpy(student_name, "홍길동");
	}

	Student(int studentNo, const char* studentName) {
		this->student_no = studentNo;
		strcpy(this->student_name, studentName);
	}

	void printInfo() {
		printf("%s 학생의 번호 : %d\n", student_name, student_no);
	}
};

int main() {

	Student* s1 = new Student();

	Student* s2 = new Student(10,"홍길순");

	s1->printInfo();

	s2->printInfo();

	return 0;

}