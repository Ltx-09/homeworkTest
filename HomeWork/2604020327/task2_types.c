#include <stdio.h>

int main(void)
{
	int age = 18;
	float height = 1.56f;
	double pi = 3.1415926;
	char bloodType = 'O';

	printf("int    age     = %d\n", age);
	printf("float  height  = %f\n", height);
	printf("double pi      = %.7f\n", pi);
	printf("char   blood   = %c\n", bloodType);

	return 0;
}