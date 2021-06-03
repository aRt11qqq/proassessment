#include <stdio.h> // 라이브러리 - 기능 모음 , printf 함수 포함 
int main() //프로그램은 항상 메인 함수로부터 시작 , 항상 0을 반환 ( return 0)  
{
	int answer;  //변수 answer 
	while (1) //반복분 시작
	{
		scanf("%d", &answer); //입력 받기 
		if (answer == 0) //만약 변수(answer) 0이면
		{
			break; //코드 끝
		}
		else { //아니면
			printf("%d 입력\n", answer); // 변수(answer) 화면에 인쇄합니다. 
		}
	}

	return 0; //명령을 원래 위치로 되돌립니다. 
}
