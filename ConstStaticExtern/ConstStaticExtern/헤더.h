#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <string>

#define MYVALUE 100
#define GRID_HEIGHT 2
#define GRID_WIDTH 2
class MyClass {
public:
	int a;
	static int static_member_int;   //�ҽ����Ͽ� ���� ��ü�� �������� �Ѵ�.
	void exam1();
	static void exam2();
};

extern int displayData[GRID_HEIGHT][GRID_WIDTH];  //extern : �ܺο� �����Ѵ�
// ���α׷� ��ü���� ���� ��������
//�ҽ������̴� ��������̴� �� �� �� �ִ�.
//extern ���� ���� �� ������ ��ŷ�� �Ѵ�. 