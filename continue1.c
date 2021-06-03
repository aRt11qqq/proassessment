#include <stdio.h>  //라이브러리 - 기능 모음 , printf 함수 포함 
int main() // 프로그램은 항상 메인 함수로부터 시작 , 항상 0을 반환 ( return 0) 
{
	int i, count = 0, answer; // 변수 i,answer하고 값이 0 인 변수 count
	scanf("%d", &answer); //입력 받기	
	for (i = 1; i < 101; i++) // //함수를 만들기위한 열기 명령 (또한 변수의 값은 1이고 101 이하이며 명령을 반복 할 때마다 +1을 추가합니다)
	{
		if (i % answer != 0)// 만약 answer 0 아니면
		{
			continue; // 계속하기
		}
		count++; //count 값이 변수에 추가됩니다. 
	}
	printf("1부터 100까지의 수 중에서 %d의 배수는 %d개입니다. ", answer, count); // 텍스트 표시 (1.%d= 변수answer. 2.%d= 변수count)
	return 0;  //코드가 원래 위치로 돌아가도록  
}
