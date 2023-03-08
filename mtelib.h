#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
void title(const char* ttl);
void nextline(int a);
void cutline();
int* plzscan(int);
//글자를 입력하면 박스에 담아서 출력합니다.
//폰트가 기본과 다르면 제대로 작동하지 않습니다.
void title(const char* ttl) {
	int i;
	//┌─┐│└─┘
	printf("┌");
	for (i = 0; i < strlen(ttl) + 1; i++) {
		printf("─");
	}
	printf("┐\n│ %s│\n└", ttl);
	for (i = 0; i < strlen(ttl) + 1; i++) {
		printf("─");
	}
	printf("┘\n");
}
//입력받은 수 만큼 줄바꿈 합니다.
void nextline(int a) {
	int i;
	for (i = a; i > 0; i--) {
		puts("");
	}
}
//선이 생깁니다. 앞뒤에 줄바꿈이 있습니다.
void cutline() {
	printf("\n────────────────────\n");
}
//'%d개의 수를 입력해주세요 >'를 출력하고 입력받습니다.
//배열 형식으로 내보내줍니다. 알아서 잘 받으십시오. 
//힌트) 포인터 변수로 받아봐요.
int* plzscan(int a) {
	int* b = (int*)malloc(sizeof(int) * a);
	int i;
	printf("%d개의 수를 입력해 주세요 >", a);
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