int main()
{
	int salary = 0;
	int money[10] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10, 5, 1 };
	int count[10];
	scanf_s("%d", &salary);
	for (int i = 0; i < 10; i++)
	{
		count[i] = salary / money[i]; // i = 0 
		salary = salary - (money[i] * count[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", count[i]);
	}
	return 0;
}
