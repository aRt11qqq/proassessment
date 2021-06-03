int main()    // 변수를 생성 (main)
{
	int salary = 0;   // 값이 0 인 변수 salary 
	int money[10] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10, 5, 1 }; //정수형 배열 10까지
	int count[10]; // 정수형 배열 
	scanf_s("%d", &salary); // 입력 받기
	for (int i = 0; i < 10; i++) //함수를 만들기위한 열기 명령 (또한 변수의 값은 0이고 10 이하이며 명령을 반복 할 때마다 +1을 추가합니다)
	{
		count[i] = salary / money[i]; // i = 0   // 변수의 값(count)=변수는(salary) 변수로(money) 나뉩니다. 
		salary = salary - (money[i] * count[i]); //  변수의 값(salary)=변수는(salary) - (변수(money) x 변수(count))
	}
	for (int i = 0; i < 10; i++) //함수를 만들기위한 열기 명령 
	{
		printf("%d\n", count[i]); //값을 화면에 인쇄합니다. 
	}
	return 0; //코드가 원래 위치로 돌아가도록  
}
