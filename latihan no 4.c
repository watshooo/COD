#include <stdio.h>

int a,b,c,temp;

int rotasi(a,b,c){
	temp = a;
    a = b;
    b = c;
    c = temp;
    
    printf("\nSetelah dirotasi nilai: a= %d, b= %d, c= %d\n",a,b,c);
}

int main(){
	
	printf("Masukkan Nilai a: ");
	scanf("%d",&a);
	printf("Masukkan Nilai b: ");
	scanf("%d",&b);
	printf("Masukkan Nilai c: ");
	scanf("%d",&c);
    
	rotasi(a,b,c);
	
	return 0;
}
