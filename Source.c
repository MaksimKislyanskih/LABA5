#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
void task1();
int dz();
void task2();


void main() {
	setlocale(LC_CTYPE, "RUS");
	//dz();
	//task1();
	task2();
}

int dz() {
	double x = 3.251, y = 0.325, z = 0.466*pow(10, -4);
	double c;

	c = pow(2, pow(y, x)) + pow(pow(3, x), y) - (y * (atan(z) - M_PI / 6)) / (fabs(x) + 1 / (pow(y, 2) + 1));

	printf("c = %.6lf\n", c);

	return 0;
}
void task1() {
	float res1, sin1;
	int gr1;
	puts("Введите значение для градусов :");
	scanf("%d", &gr1);
	res1 = (M_PI * gr1) / 180;
	sin1 = sin(res1);
	printf("%d градусов = %f радиан", gr1, sin1);
}
void task2() {
	setlocale(LC_CTYPE, "RUS");
	float x, t = 0.43;
	double y, a, b;

	puts("Введите значение x:");
	scanf("%f", &x);

	b = x * ((t * t * t) + x);
	a = exp(2 * x) + sqrt(t);
	y = pow(log10(fabs(x)), 3) + b;
	printf("При значении x = %f\n значение функции b = %f\n значение функции a = %f\n Финальное значение y = %.4lf", x, b, a, y);
}