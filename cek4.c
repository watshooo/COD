#include <stdio.h>
#include <stdlib.h>

#define maxstak 15

struct stak{
    int top, data[15], urut[15];
}stack;



void push(int input){
    stack.top++;
    stack.data[stack.top]=input;

    printf("Barang berhasil dimasukkan \n");
    getchar();
}

void pop(){
    int i;
    i = stack.data[stack.top];
    printf("Barang kota %d terambil \n", i);
    stack.top--;
    getchar();
}

int isFull(){
    if(stack.top==maxstak-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(){
    if(stack.top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

void tukar(int a,int b)
{
    int t;
    t=stack.urut[b];
    stack.urut[b]=stack.urut[a];
    stack.urut[a]=t;
}

int print(){
char penerima[200];
	int k=1;
    for(int i=0;i<=stack.top;i++){
        stack.urut[i]=stack.data[i];
    }

    for(int i=0;i<=stack.top;i++){
        for(int j=i+1;j<=stack.top;j++){//data terkecil
            if(stack.urut[i]<stack.urut[j]){
                tukar(i,j);
            }
        }
    }
puts("urutan kota : ");
        for (int i=stack.top;i>=0;i--)
         printf("%d\n", stack.urut[i]);
printf("Kota yang dilewati : \n");
 for (int i = stack.top; i>=0; i--) {
    switch(stack.urut[i]) {
        case 1:
		 printf("Jakarta\n"); 
		 printf("Masukkan penerima : ");
        fgets(penerima, sizeof(penerima), stdin);
        fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh %s ", &penerima);
        printf("\n");
		break;
        case 2: printf("Bekasi\n");
		printf("Masukkan penerima : ");
       fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh %s ", &penerima); 
        printf("\n");
        break;
        case 3: printf("Cirebon\n");
		printf("Masukkan penerima : ");
      fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh %s ", &penerima); 
        printf("\n");
        break;
        case 4: printf("Brebes\n");
		printf("Masukkan penerima : ");
       fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh %s ", &penerima);break;
        printf("\n");
        case 5: printf("Tegal\n");
		printf("Masukkan penerima : ");
        fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh %s ", &penerima); break;
        printf("\n");
        case 6: printf("Semarang\n");
		printf("Masukkan penerima : ");
       fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh %s ", &penerima);break;
        printf("\n");
        case 7: printf("Solo\n"); 
		printf("Masukkan penerima : ");
        fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh %s ", &penerima);break;
        printf("\n");
        case 8: printf("Sragen\n"); 
		printf("Masukkan penerima : ");
      fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh %s ", &penerima);break;
        printf("\n");
        case 9: printf("Ngawi\n");
		printf("Masukkan penerima : ");
        fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh %s ", &penerima);break;
        printf("\n");
        case 10: printf("Mojokerto\n"); 
		printf("Masukkan penerima : ");
      fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh %s ", &penerima); break;
                printf("\n");
        case 11: printf("Surabaya\n");
		printf("Masukkan penerima : ");
    fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh %s ", &penerima);break;
        default: printf("SALAH INPUT\n");
	 break;
    }
}
		getchar();
} 

int main()
{
    int pilih,i=1;
    int input;
    stack.top=-1;
    do{
        printf("      \n PT CEPAT KIRIM \n-.-.-.-.-..-.-.-.-.-.-.-.-.-.-. \n1. Masukkan Barang \n2. Mengeluarkan Barang\n3. Tampil sesuai rute \n4.(Keluar) \nPilihan anda  : ");
        scanf("%d", &pilih);

        printf("----------------------------------\n");
        switch(pilih)
        {
        case 1:
            if(isFull()==1){
                printf("Barang di Truck penuh ! \n");
                getchar();
            }
            else{
            	printf(" 1.Jakarta\n 2.Bekasi\n 3.Cirebon\n 4.Brebes\n 5.Tegal\n 6.Semarang\n 7.Solo\n 8.Sragen\n 9.Ngawi\n 10.Mojokerto\n 11.Surabaya\n");
                pilihan:
                printf("Masukkan Data Kota ke-%d :", i);
                i++;
                scanf("%d", &input);
                if(input > 12)
                {
                    printf("Input Salah !! Silahkan input lagi\n");
                    i--;
                    goto pilihan;
                }
                
                else if(input <= 12 || input > 0)
                {
                push(input);
                }

                
            }
            break;
        case 2:
            if(isEmpty()==1){
                printf("Barang di Truck kosong !");
                getchar();
            }
            else{
                pop();
                i--;
            }
            break;
        case 3:
            if(isEmpty()==1){
                printf("Barang di truck kosong !");
                getchar();
            }
            else{
                print();
            }
            break;
        }
    }while(pilih!=4);
}
