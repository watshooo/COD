
#include <iostream> 
#include <stdio.h>
#include <stdlib.h>

using namespace std;


#define maxstak 15

struct stak{
    int top, data[15], urut[15];
}stack;



void push(int input){
    stack.top++;
    stack.data[stack.top]=input;

    cout<<"Barang berhasil dimasukkan \n";
    getchar();
}

void pop(){
    cout<<"Barang kota "<<stack.data[stack.top]<<" terambil \n";
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
printf("Urutan kota : \n");
        for (int i=stack.top;i>=0;i--)
        {
        printf("%d\n", stack.urut[i]);
printf("Kota yang dilewati : \n");
 for (int i = stack.top; i>=0; i--) {
    switch(stack.urut[i]) {
        case 1:
		 cout << "Jakarta\n"; 
		 cout<<"Masukkan penerima : ";
        fgets(penerima, sizeof(penerima), stdin);
        fgets(penerima, sizeof(penerima), stdin);
		cout<<"barang diterima oleh "<< penerima;
        cout<<"\n";
		break;
        case 2: cout << "Bekasi\n";
		cout<<"Masukkan penerima : ";
       fgets(penerima, sizeof(penerima), stdin);
       fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh : %s", penerima); break;
        cout<<"\n";
        case 3: cout << "Cirebon\n";
		cout<<"Masukkan penerima : ";
      fgets(penerima, sizeof(penerima), stdin);
      fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh : %s", penerima); break;
        cout<<"\n";
        case 4: cout << "Brebes\n";
		cout<<"Masukkan penerima : ";
       fgets(penerima, sizeof(penerima), stdin);
       fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh : %s", penerima);break;
        cout<<"\n";
        case 5: cout << "Tegal\n";
		cout<<"Masukkan penerima : ";
        fgets(penerima, sizeof(penerima), stdin);
        fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh : %s", penerima); break;
        cout<<"\n";
        case 6: cout << "Semarang\n";
		cout<<"Masukkan penerima : ";
       fgets(penerima, sizeof(penerima), stdin);
       fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh : %s", penerima);break;
        cout<<"\n";
        case 7: cout << "Solo\n"; 
		cout<<"Masukkan penerima : ";
        fgets(penerima, sizeof(penerima), stdin);
        fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh : %s", penerima);break;
        cout<<"\n";
        case 8: cout << "Sragen\n"; 
		cout<<"Masukkan penerima : ";
      fgets(penerima, sizeof(penerima), stdin);
      fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh : %s", penerima);break;
        cout<<"\n";
        case 9: cout << "Ngawi\n";
		cout<<"Masukkan penerima : ";
        fgets(penerima, sizeof(penerima), stdin);
        fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh : %s", penerima);break;
        cout<<"\n";
        case 10:cout << "Mojokerto\n"; 
		cout<<"Masukkan penerima : ";
      fgets(penerima, sizeof(penerima), stdin);
      fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh : %s", penerima); break;
                cout<<"\n";
        case 11: cout << "Surabaya\n";
		cout<<"Masukkan penerima : ";
    fgets(penerima, sizeof(penerima), stdin);
    fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh : %s", penerima);break;
        default: cout << "SALAH INPUT\n";
	 break;
    }
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
        cout<<"      \n PT CEPAT KIRIM \n-.-.-.-.-..-.-.-.-.-.-.-.-.-.-. \n1. Masukkan Barang \n2. Mengeluarkan Barang\n3. Tampil sesuai rute \n4.(Keluar) \nPilihan anda  : ";
        cin>>pilih;

        cout<<"----------------------------------\n";
        switch(pilih)
        {
        case 1:
            if(isFull()==1){
                cout<<"Barang di Truck penuh ! \n";
                getchar();
            }
            else{
            	printf(" 1.Jakarta\n 2.Bekasi\n 3.Cirebon\n 4.Brebes\n 5.Tegal\n 6.Semarang\n 7.Solo\n 8.Sragen\n 9.Ngawi\n 10.Mojokerto\n 11.Surabaya\n");
                pilihan:
                printf("Masukkan Data Kota ke ke-");
                scanf("%d", &i);
                i++;
                if(input > 12)
                {
                    cout<<"Input Salah !! Silahkan input lagi\n";
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
                cout<<"Barang di Truck kosong !";
                getchar();
            }
            else{
                pop();
                i--;
            }
            break;
        case 3:
            if(isEmpty()==1){
                cout<<"Barang di truck kosong !";
                getchar();
            }
            else{
                print();
            }
        }
    }while(pilih!=4);
}