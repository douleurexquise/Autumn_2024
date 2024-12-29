#include <stdio.h>

int main(){
	double x;
	scanf("%lf", &x);
	double y;
	y = (x < 5) ? (x * x - 1) : (1 / x);
	printf("%.2f", y);
	return 0;
}
