#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
void title(const char* ttl);
void nextline(int a);
void cutline();
int* plzscan(int);
//���ڸ� �Է��ϸ� �ڽ��� ��Ƽ� ����մϴ�.
//��Ʈ�� �⺻�� �ٸ��� ����� �۵����� �ʽ��ϴ�.
void title(const char* ttl) {
	int i;
	//��������������
	printf("��");
	for (i = 0; i < strlen(ttl) + 1; i++) {
		printf("��");
	}
	printf("��\n�� %s��\n��", ttl);
	for (i = 0; i < strlen(ttl) + 1; i++) {
		printf("��");
	}
	printf("��\n");
}
//�Է¹��� �� ��ŭ �ٹٲ� �մϴ�.
void nextline(int a) {
	int i;
	for (i = a; i > 0; i--) {
		puts("");
	}
}
//���� ����ϴ�. �յڿ� �ٹٲ��� �ֽ��ϴ�.
void cutline() {
	printf("\n����������������������������������������\n");
}
//'%d���� ���� �Է����ּ��� >'�� ����ϰ� �Է¹޽��ϴ�.
//�迭 �������� �������ݴϴ�. �˾Ƽ� �� �����ʽÿ�. 
//��Ʈ) ������ ������ �޾ƺ���.
int* plzscan(int a) {
	int* b = (int*)malloc(sizeof(int) * a);
	int i;
	printf("%d���� ���� �Է��� �ּ��� >", a);
	for (i = 0; i < a; i++) {
		scanf_s("%d", &b[i]);

	}

	return b;

}


/*
p = plzscan(5);
	cutline();
	for (int i = 0;i < 5;i++) {
		printf("%d ", p[i]);
	}
*/