#include <stdio.h>

int main() {
	int a =5 ;
	int b= 3;
	
	int tam;
	tam = a;
	a =b ;
	b= tam;

	printf("%d",a);
	printf("%d",b);
}
