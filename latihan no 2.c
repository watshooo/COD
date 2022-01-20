#include <stdio.h>

int main(){
	
	long long int data[10];
	
	printf("Masukkan NIM anda ke data array ke-5: ");
	scanf("%lld", &data[5]);
	
	printf("Data array ke-5 adalah %lld",data[5]);
	
	return 0;
}
