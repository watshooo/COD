/*// nomor 2 //
#include <stdio.h>
#include <conio.h> // buat fgets//                 
#include <string.h> // buat strlen //

void push(char);
char pop();

char stack[200];
int top = -1; // keadaan kosong sy -1 //

void main()
{
    char str[200];
    int i, count = 0, len;

    printf("Masukan kalimat : ");
    gets(str);//biar bisa spasi

    len = strlen(str); //itung jml string

    for (i = 0; i < len; i++)
    {
        push(str[i]);
    }

    for (i = 0; i < len; i++)
    {
        if (str[i] == pop()) count++;
    }

    if (count == len)
        printf("string ' %s ' ini kalimat palindrom", str);
    else
        printf("string ' %s ' ini bukan kalimat palindrom", str);
}

void push(char c)
{
    stack[++top] = c;
}

char pop() //return char//
{
    return(stack[top--]);
}*/
/*
 // nomor 3 //
#include <stdio.h>

int stack[200];
int top = 0;

void push(int i)
{
    stack[++top]=i;
}
int pop()
{
    return stack[top--];
}

int main()
{
    int bilDesimal;
    int j,l;
    int k = 0;
    puts("========================================");
    printf("Bilangan desimal yang ingin di konversi: ");
    scanf("%d",&bilDesimal);
    printf("Bilangan binernya: ");
    while (bilDesimal > 0)
    {
        j = bilDesimal%2;
        push(j);
        bilDesimal=bilDesimal/2;
        k++;
    }
    
    for ( l = k; l > 0 ; l--)
    {
        
        printf("%d",pop());
    }   
}*/
/*
//nomor 1//
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Data_Parkir{
        int nomor;
        int tanggal_masuk, tanggal_keluar, waktu_masuk, waktu_keluar;
};
struct parkir{
    struct Data_Parkir data;
    struct parkir* next;
};

struct parkir* head;
struct parkir* tail;
struct parkir* baru;
struct parkir* del;
struct parkir* bantu;

void inisialisasi(){
    head=NULL;
    tail=NULL;
}
void input(struct Data_Parkir br)
{
      baru=(struct parkir* )malloc(sizeof(struct parkir));
      baru->data = br; 
      baru->next = NULL;
      if(head==NULL)
      {
            head = baru;
            tail = head;
      }
      else
      {
            tail->next = baru;
            tail=baru;
      }
}
void keluar(){
	int lama;
      struct parkir simpan;
      if(head==NULL)
      {
           printf("\nTidak ada parkiran!");
      }
      else
      {
        simpan.data  = head->data;
        printf("\nTanggal keluar (1-31) : ");
        scanf("%d",&simpan.data.tanggal_keluar);
	    printf("Pukul keluar (format 24 JAM) : ");
	    scanf("%d", &simpan.data.waktu_keluar);
        printf("\nKendaraan yang keluar adalah nomor ");
        printf("%d yang masuk pada tanggal %d pada pukul %d ", simpan.data.nomor, simpan.data.tanggal_masuk, simpan.data.waktu_masuk);
        lama = ((simpan.data.tanggal_keluar-simpan.data.tanggal_masuk)*24)+(simpan.data.waktu_keluar-simpan.data.waktu_masuk);
        printf("\nkendaraan %d keluar tanggal %d dan di parkiran selama %d jam\n", simpan.data.nomor,simpan.data.tanggal_keluar,lama);


            //hapus depan
            del = head;
            head = head->next;
            del--;
      }
}
void tampil(){
	if(head==NULL){
		printf("\nSilahkan Parkir");
	}else
	{
		bantu=head;
		while(bantu!=NULL){
			printf("\nNomor kendaraan\t\t: %d\n", bantu->data.nomor);
			printf("tanggal masuk\t\t: %d\n", bantu->data.tanggal_masuk);
			printf("waktu masuk\t\t: %d\n\n", bantu->data.waktu_masuk);
			bantu=bantu->next;
		}
	}
}
int menu()
{
    char ulang,pilih;
    int a=1;
	int b,c,d;
    struct parkir tmp; 
    printf("\nMasukkan Max tempat parkir :  ");
    scanf("%d", &b);
    c=b;
    start:
    printf("\nParkir (i)");
    printf("\nKeluar (o)");
    printf("\nTampilkan (p)");
    printf("\nExit (e)");
    printf("\n\ntekan i/o/p/e ");
    pilih=getch();
    switch (pilih)
    {
    	case 'i':
            	if(a>b)
				{
		    		printf("\n\n Maaf parkiran penuh\n");
				}
            	for(d=1;d<=c;d++)
				{
					if(a<=b)
					{
    					printf("\nAnda Parkir di Tempat Nomor %i", a);
    					printf("\nMasukkan nomor kendaraan : ");
    					scanf("%d", &tmp.data.nomor);
            			printf("\nMasukkan tanggal masuk (1-31) : ");
            			scanf("%d",&tmp.data.tanggal_masuk);
            			printf("\nMasukkan pukul masuk (format 24 JAM) : ");
            			scanf("%d",&tmp.data.waktu_masuk);
            			input(tmp.data);
            			a++;
		    		}
				}
            goto start;
	        break;
        case 'o':
    	    keluar();
    	    a=a-1;
    	    printf("\nMasukkan y untuk ke menu : ");
   	 	    scanf("%s", &ulang);
		    if(ulang=='y'|ulang=='Y'){
            goto start;
            break;
            }   
        case 'p':
            tampil();
            goto start;
            break;
        case 'e':
        return 0;

        default:
        printf("\nInput salah ! Silahkan input ulang.\n\n");
        goto start;
        break;
    }
    return 0;
}   
int main()
{

    char ulang;
    inisialisasi();
    menu();
	
    return 0;
}*/

//nomor 4//

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define maxstak 11

struct stak{
    int top, data[11], urut[11]; //karena max barang yg diangkut 10//
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
 	fflush(stdin);
    switch(stack.urut[i]) {
        case 1:
		 printf("Jakarta\n");
		 fflush(stdin); 
		 printf("Masukkan penerima : ");
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
        case 3: printf("Bogor\n");
		printf("Masukkan penerima : ");
    fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh %s ", &penerima); 
        printf("\n");
        break;
        case 4: printf("Lembang\n");
		printf("Masukkan penerima : ");
    fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh %s ", &penerima);break;
        printf("\n");
        case 5: printf("Bandung\n");
		printf("Masukkan penerima : ");
    fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh %s ", &penerima); break;
        printf("\n");
        case 6: printf("Tasikmalaya\n");
		printf("Masukkan penerima : ");
    fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh %s ", &penerima);break;
        printf("\n");
        case 7: printf("Yogyakarta\n"); 
		printf("Masukkan penerima : ");
    fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh %s ", &penerima);break;
        printf("\n");
        case 8: printf("Wonosari\n"); 
		printf("Masukkan penerima : ");
    fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh %s ", &penerima);break;
        printf("\n");
        case 9: printf("Kediri\n");
		printf("Masukkan penerima : ");
    fgets(penerima, sizeof(penerima), stdin);
		printf("barang diterima oleh %s ", &penerima);break;
        printf("\n");
        case 10: printf("Sidoarjo\n"); 
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
        puts("\n================================="); 
		puts("Pengiriman Paket PT CEPAT KIRIM"); 
        puts("================================="); 
        puts("1. Masukkan Barang ");
        puts("2. Mengeluarkan Barang");
        puts("3. Tampil sesuai rute");
        puts("4. Exit");
        printf("\nMasukkan pilihan 1/2/3/4 :");
        scanf("%d", &pilih);

        printf("=================================\n");
        switch(pilih)
        {
        case 1:
            if(isFull()==1){
                printf("Barang di Truck penuh ! \n");
                getchar();
            }
            else{ 
                puts("1.Jakarta");
                puts("2.Bekasi");
                puts("3.Bogor");
                puts("4.Lembang");
                puts("5.Bandung");
                puts("6.Tasikmalaya");
                puts("7.Yogyakarta");
                puts("8.Wonosari");
                puts("9.Kediri");
                puts("10.Sidoarjo");
                puts("11.Surabaya\n");
                pilihan:
                printf("Masukkan Data Kota ke-%d :", i);
                i++;
                scanf("%d", &input);
                if(input > 11)
                {
                    printf("Input Salah !! Silahkan input lagi\n");
                    i--;
                    goto pilihan;
                }
                
                else if(input <= 11 || input > 0)
                {
                push(input);
                }

                
            }
            break;
        case 2:
            if(isEmpty()==1){
                printf("\nBarang di Truck kosong !\n");
                getchar();
            }
            else{
                pop();
                i--;
            }
            break;
        case 3:
            if(isEmpty()==1){
                printf("\nBarang di truck kosong !\n");
                getchar();
            }
            else{
                print();
            }
            break;
        }
    }while(pilih!=4);
}

