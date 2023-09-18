#include<stdio.h>
#include<conio.h>
int main(void) {
	// Advertisement

	int ch, str[79 + 1];
	int x, y, z;
	float a, b, c;
	double A, B, C;

	// First part

	printf("\n \t Enter a symbol:");
	ch = getchar();
	printf("\t The symbol is %c \n", ch);
	_flushall();
	printf("\n \t Enter any string:");
	scanf_s("%s", &str, 79);
	printf("\t The string is:%s \n", str);
	a = 2.42F;
	b = 3.58F;
	c = a + b;

	printf("\n \t The sum %1.2f and 1.2f (as float) is equal: %1.4f \n", a, b, c);
	A = 12.1234567796602;
	B = 2.7182818284509;
	C = A + B;

	printf("\n \t The sum %1.13f and 1.13f (as double) is equal: %1.13f \n", A, B, C);
	x = 2;
	y = 7;
	z = x * y;

	printf("\n \t The multiplication %d on %i(as integer) is equal:%d \n", x, y, z);

	// Second part

	printf("\n \t Enter a symbol:");
	scanf_s("%c", &ch, 1);
	printf("\t The symbol is:%c \n", ch);
	printf("\n \t Enter any string:");
	scanf_s("%s", &str, 79);
	printf("\t The string is:%s \n", str);

	_flushall(); // для усунення порожнього рядка

	printf("\t Enter a real number a:");
	scanf_s("%f", &a);
	printf("\t Enter a real number b:");
	scanf_s("%f", &b);

	c = a + b;

	printf("\t The sum %1.2f and %1.2f (as float) is equal:%1.4f \n", a, b, c);
	printf("\t Enter a real number A:");
	scanf_s("%lf", &A);
	printf("\t Enter a real number B:");
	scanf_s("%lf", &B);

	C = A + B;

	printf("\t The sum %1.2f and %1.2f (as double) is equal:%1.4f \n", A, B, C);

}