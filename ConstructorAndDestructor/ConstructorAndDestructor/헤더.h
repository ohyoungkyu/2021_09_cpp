#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cmath>

int number_counter = 1;

class Employee {
public:
	int no;
	char* name;
	int gender;
	char* rank;

	Employee(char* name, int gender, char* rank) {
		this->name, new char[strlen(name) + 1]; //널문자 까지
		this->rank, new char[strlen(rank) + 1];
		this->gender = gender;
		strcpy(this->name, name);
		strcpy(this->rank, rank);
		this->no = number_counter;
		number_counter++;
	}

	~Employee() {
		delete[] name;
		delete[] rank;
		printf("%d번 사원이 삭제되었습니다.\n", no);
	}

	void printInfo() {
		printf("사원번호 : %d", no);
		printf("사원이름 : %s", name);
		printf("성별 : %s", gender == 0? "남자" : "여자");
		printf("직급 : %s", rank);
	}
};

int getInt(const char* prompt);

//메모리 끝나면 해제 필수
char* getString(const char* prompt);