#pragma once
//static -> ���� (Ŭ���� ����/�ܺ� �� �ǹ̰� �޶�����.)
//���̳��� �Լ��� ����ƽ �Լ��� ���� ū �������� this �� �����̴�.
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>

#define MYVALUE 100
class MyClass {
public:
	int a;
	static int b;  //����ƽ ���� Ÿ���� �������� ó�� ����
	void exam1() {	//���̳���(����) �Լ� -> �ڱ��ڽ��� �ν��Ͻ��� �ִ�(��ü�� �ִ�.)
		a = 100;
		b = 200;
		this->a = 200;
		printf("exam1\n");
	}

	static void exam2() {	//����ƽ(����) �Լ� -> �ڱ��ڽ��� �ν��Ͻ��� ����(��ü�� �ʿ����)
		//a = 100;	//����ƽ �Լ��� Ŭ������ ������ ������ �� ����.
		b = 200;
		printf("exam2\n");
	}
};