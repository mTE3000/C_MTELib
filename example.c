#include <stdio.h>
#include "mtelib.h"

int main() {
	//title예제
	title("안녕하세요 저는 트위치에서");

	//nextline예제
	printf("뭉탱이월드가 들리는것같은..");
	nextline(3);
	printf("막 들리는거야 진짜로");

	//cutline 예제
	printf("그냥 뭉탱이로 있다가");
	cutline();
	printf("유링게슝 아이그냥");

	//plzscan 예제 (함수 이름을 유링게슝 하게 지어서 ㅈㅅㅎㄴㄷ)
	int* a = plzscan(5);
	
	
	for (int i = 0; i < 5; i++) {
		printf("%d", a[i]);
	}
	
}