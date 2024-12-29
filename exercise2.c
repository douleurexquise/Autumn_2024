#include <stdio.h>

int main(){
	double a, b;
	scanf("%lf%lf\n", &a, &b);
	char znak = getchar();
	switch (znak){
		case '+':
		printf("%.2f", a + b);
		return 0;
		case '-':
		printf("%.2f", a - b);
		return 0;
		case '*':
		printf("%.2f", a * b);
		return 0;
		case '/':
		printf("%.2f", a / b);
		return 0;
		default:
		printf("Wrong char!");
		return 0;
	}
}
