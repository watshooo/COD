#include <stdio.h>

int rotasi( int *a, int *b, int *c){
	int d = *c;
	*c = *b;
	*b = *a;
	*a = d;
	
	printf("Nilai Setelah di Rotasi ");
	printf("A = %d	", *a);
	printf("B = %d	", *b);
	printf("C = %d	", *c);
	
	return *a, *b ,*c;
}
int main (){
	int A = 10;
	int B = 20;
	int C = 30;
	printf("Nilai Sebelum di Rotasi A = %d, B = %d, C = %d\n", A,B,C);
	rotasi(&A,&B,&C);
	
	return 0;
}
