#include <stdio.h>
#include <stdlib.h>
int main()
{
	const char* format = "\t%s - \t%d\n";
	printf("%s\n", "Integer types capacities");
	printf(format, "char", sizeof(char));
	printf(format, "unsigned char", sizeof(unsigned char));
	printf(format, "short", sizeof(short));
	printf(format, "unsigned short", sizeof(unsigned short));
	printf(format, "int", sizeof(int));
	printf(format, "unsigned int", sizeof(unsigned int));
	printf(format, "long", sizeof(long));
	printf(format, "unsigned long", sizeof(unsigned long));
	printf(format, "long long", sizeof(long long));
	printf(format, "unsigned long long", sizeof(unsigned long long));
	printf("%s\n", "Real types capacities");
	printf(format, "float", sizeof(float));
	printf(format, "double", sizeof(double));
	printf(format, "long double", sizeof(long double));
	getchar();
	return 0;
}