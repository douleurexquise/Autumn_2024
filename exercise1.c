#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Ru");
	int x,y;
	printf("Введите координату x: ");
	scanf("%d", &x);
	printf("\nВведите координату y: ");
	scanf("%d", &y);
	if (x > 0 && y > 0){
	printf("\nТочка находится в первой четверти\n");
	}
	else if (x < 0 && y > 0){
	printf("\nТочка находится во второй четверти\n");
	}
	else if (x < 0 && y < 0){
	printf("\nТочка находится в третьей четверти\n");
	}
	else if (x > 0 && y < 0 ){
	printf("\nТочка находится в четвертой четверти\n");
	}
	else if (x == 0 && y == 0){
	printf("\nТочка находится в середине координат\n");
	}
	else if (x == 0){
	printf("\nТочка лежит на оси y\n");
	}
	else if (y == 0){
	printf("\nТочка лежит на оси x\n");
	}
	return 0;
}
