#include "���.h"

int main() {

	MyClass* c = new MyClass();
	c->exam1();

	//c->exam2();		//�̷��� ���ٴ�
	MyClass::exam2();	//�ش� ���� �� �´� ���

	return 0;
}