//�����Լ� ���ʿ� temp ������ ������ �ʰ� value swap�� ���ּ���.
#include <cstdio>

#define SWAP(X, Y, TYPE) {TYPE temp = v1; v1 = v2; v2 = temp;}

int main() {

	int v1 = 100;
	int v2 = 200;

	printf("SWAP ��\n");

	printf("v1 : %d\n", v1);
	printf("v2 : %d\n", v2);

	SWAP(v1, v2, int);
	SWAP(v1, v2, int);

	printf("SWAP ��\n");

	printf("v1 : %d\n", v1);
	printf("v2 : %d\n", v2);

	return 0;
}