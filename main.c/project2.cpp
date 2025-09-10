int main()
{
	int a, n;
	char c;
	printf("Enter num and pos of bit (a+n - set or a-n - unset): ");
	if (scanf("%d%c%d", &a, &c, &n) != 3 || n < 0 || n > 31)
	{
		printf("Invalid input data\n");
		return -1;
	}
	int mask = 1;
	switch (c)
	{
	case '+':
		printf("%d\n", (mask << n) | a);
		break;
	case '-':
		printf("%d\n", ~(mask << n) & a);
		break;
	default:
		printf("Unknown operator\n");
		break;
	}
	return 0;
}