#include <stdio.h>
#include <conio.h>
#include <string.h>
#define true 1
#define false 0
#define max 10

void init(void);
int full(void);
int empty(void);	

int main()
{   
	int pilih;
	pilih=0;
	
	char dataPengirim[max+1][max-8];
	char dataPenerima[max+1][max-8];
	int top;
	
	
    while(pilih !=3)
    {
    	puts("====================");
		printf(" >Menu Pengiriman<\n");
		puts("====================");
		puts("  1. Isi Data");
		puts("  2. Lihat List");
		puts("  3. Keluar");
		puts("====================");
		printf("Pilihan Anda: ");scanf("%d",pilih);
		switch(pilih)
		{
			case 1:
				if(full() != true )
				{
					
				}
		}
	}
		
}

void init(void)
{
	int top = 0;
}

int full(void)
{   int top;
	if (top == max) return(true);
	else return(false);
}

int empty(void)
{	int top;
	if (top == 0) return(true);
	else return(false);
}
