//메인함수 안쪽에 temp 변수를 만들지 않고 value swap을 해주세요.

#include <iostream>
#include <cstdlib>

struct Person {
	int age;
	int hp;
};

int main() {

	//Person* p1 = (Person*)malloc(sizeof(Person));

	//int* arr = (int*)malloc(sizeof(int)*100);

	//free(p1);

	//free(arr);

	Person* p1 = new Person();

	int* arr = new int[100];

	delete p1;

	delete arr;

	return 0;
}