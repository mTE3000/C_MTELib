#include <stdio.h>
#include "mtelib.h"

int main() {
	//title����
	title("�ȳ��ϼ��� ���� Ʈ��ġ����");

	//nextline����
	printf("�����̿��尡 �鸮�°Ͱ���..");
	nextline(3);
	printf("�� �鸮�°ž� ��¥��");

	//cutline ����
	printf("�׳� �����̷� �ִٰ�");
	cutline();
	printf("�����Խ� ���̱׳�");

	//plzscan ���� (�Լ� �̸��� �����Խ� �ϰ� ��� ����������)
	int* a = plzscan(5);
	
	
	for (int i = 0; i < 5; i++) {
		printf("%d", a[i]);
	}
	
}