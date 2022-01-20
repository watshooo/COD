/*#include<stdio.h> //nomor 1//
#include<stdlib.h>

int main()
{
    float bil1, bil2; char operasi;

    awal:
    puts("\n\tKalkulator sederhana\n\n");
    printf("Masukkan bilangan 1: "); scanf("%f", &bil1); 
    fflush (stdin);
    printf("Masukkan operator: "); scanf("%c",&operasi);
    printf("Masukkan bilangan 2: "); scanf("%f", &bil2);
    
    switch (operasi)
    {
     case '+':
        printf("Hasilnya dari  %.3f + %.3f adalah %.3f", bil1, bil2, (bil1+bil2));
        break;
    
     case '-':
        printf("Hasilnya dari %.3f - %.3f adalah %.3f", bil1, bil2, (bil1-bil2));
        break;

     case 'x':
        printf("Hasilnya dari %.3f x %.3f adalah %.3f", bil1, bil2, (bil1*bil2));
        break;
    
     case '/':
        if (bil2==0)
        {
            printf("Hasilnya dari %.3f / %.0f adalah tak hingga", bil1,bil2);
            return 0;
        }
        
        printf("Hasilnya dari %.3f / %.3f adalah %.3f", bil1, bil2, (bil1/bil2));
        break;

     default:
    	system("cls");
        printf("\nSalah inputan oprasi\n");
        system("pause");
        system("cls");
        goto awal;
    }    
}*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h> //untuk pause dan cls
#include<string.h> //strcmp (bandingin string klo sama nilai 0)
#define MAX 280

typedef struct 
{
    int head;
    int tail;
    int jmlAntrian [MAX];

}antrian;

antrian nasabah;

void create()
{
    //awalan (saya set klo kosong itu -1//
    nasabah.head = nasabah.tail = -1; 
}
int isFull()
{
    //cek isi queue//
    if (nasabah.tail == MAX-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int isEmpty()
{
    //cek isi queue//
    if (nasabah.tail == -1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
void enque(int x)
{   
    //masukin antrian//
    nasabah.head=0;
    if (isFull () != 1)
    {
		++nasabah.tail;
        nasabah.jmlAntrian[nasabah.tail]= x;
    }
    
}
void dequeue(int f)
{   
	int z;
    int j; // tampung nilai counter
	
	if (isEmpty() != 1)
	{
		//keluarin antrian//
    	int y; //nilai indeks yang nantinya diatur ulang
    	//tampung nilai first nomor antrian// 
    	z = nasabah.jmlAntrian[nasabah.head];//tampung dulu
    	//atur ulang nilai dalam antrian //
    	for ( y = nasabah.head; y <= nasabah.tail-1; y++)
        {
            nasabah.jmlAntrian[y]=nasabah.jmlAntrian[y+1];//atur ulang	    
        }
        j = f;
        printf("Nasabah dengan nomor antrian ke-%d harap ke teller -%d\n",z,j);
        j++;
        nasabah.tail--;
    }
    else
    {	
    	printf("belum ada antrian nasabah di teller -%d\n",f);
	}
   
}
void clear()
{
    nasabah.head=nasabah.tail=-1;
    printf("Antrian sudah direset\n"); 
}
void tampil()
{   int i;
    int counterAntrian=1;
    if (isEmpty() == 0)
    {
        for ( i = nasabah.head; i <= nasabah.tail; i++)
        {
            
            printf("Antrian ke -%d dengan nomor antrian- %d\n", counterAntrian, nasabah.jmlAntrian[i]);
            counterAntrian++;
        } 
    }
    else
    {
        printf("Belum ada antrian nasabah\n");
    }
}

int main()
{   create();
    int pilih;
    char pw; //yg diinputin
    char pass[32]; //simpennya disini
    int a = 0;
    int cek;
    int b; // parameter antrian
    char cnfrm;
    int c; //nomor antrian
	c = 1;
    int tlCh;
    int d; // buat 7 teller
    
    menu:
    printf("\n==Selamat datang==\n");
    printf("\nPilih menu dibawah\n\n");
    printf("|1| Login\n");
    printf("|2| Ambil nomor antrian\n");
    printf("|3| Exit\n\n");
    printf("pilihan anda: ");
    scanf("%d",&pilih);
    switch (pilih)
    {
     case 1:
        
        system("cls");
         printf("==Menu Login Pegawai==");
         fflush (stdin);
         printf("\n\nMasukkan password: ");
        while ((pw = (char) _getch()) != '\r')// (\r) untuk "enter"
        {
            pass[a]=pw;
            printf("*");
            a++;
        }
     		a=0;
        if(strcmp(pass,"cikditiro") == 0) 
        {   
			menuTeller:
            system("cls");
             printf("==Menu teller==\n");
             printf("[1] Tampilkan antrian\n");
             printf("[2] Memanggil nasabah\n");
             printf("[3] Clear antrian\n");
             printf("[4] Log out\n");
             printf("Pilihan: "); scanf("%d",&tlCh);
            switch (tlCh)
            {
            case 1:
                tampil();
                system("pause");
                goto menuTeller;
            case 2:
                for ( d = 1; d <= 7; d++)
                {	
                    dequeue(d);
                }
                system("pause");
                goto menuTeller;
            case 3:
            	
                clear();
                system("pause");
                goto menuTeller;
            case 4:
            	system("cls");
            	goto menu;
            default:
                goto menuTeller;
            }
        }
        else
        {	
             printf("\nwrong password\n");
            system("pause");
            system("cls");
            goto menu;
        }

        break;
        
     case 2:
        system("cls");
        printf("Konfirmasi pengambilan antrian (y/n): ");
        scanf("%s",&cnfrm);
        if(cnfrm=='y' || cnfrm =='Y')
        {   
            enque(c);
            printf("Nomor antrian anda : %d",c);
            ++c;
        }
        else
        {
            goto menu;
        }
        goto menu;

     case 3:
        return 0;

     default:
        printf("\nFalse Input\n");
        system("pause");
        system("cls");
        goto menu;
    }

    return 0;
}
/*
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 420

typedef struct
{
	int jmlAntrian[MAX];
	int head;
	int tail;
}antrian;
antrian pasien;

void create()
{
	pasien.head = pasien.tail = -1;
}

int isEmpty()
{
	if(pasien.tail==-1)
    {
		return 1;
	}
    else
    {
		return 0;
	}
}

int isFull()
{
	if(pasien.tail==MAX-1)
    {
		return 1;
	}
    else
    {
		return 0;
	}
}

void enqueue(int data)
{
	if(isEmpty()==1)
    {
		pasien.head = pasien.tail = 0;
		pasien.jmlAntrian[pasien.tail]= data;
		printf("data %d masuk!\n", pasien.jmlAntrian[pasien.tail]);
	}
    else
    {
		if(isFull()==0)
        {
			pasien.tail++;
			pasien.jmlAntrian[pasien.tail] = data;
			printf("data %d masuk!\n", pasien.jmlAntrian[pasien.tail]);
		}
	}
}

void tampil(int awal)
{
	if(isEmpty()==0)
    {
		for(int i = pasien.head;i <= pasien.tail; i++)
        {
			printf("%d ",pasien.jmlAntrian[i]);
		}
	}
    else
    {
		printf("data kosong!\n");
	}
}

int cek()
{
    int c;
    c = pasien.jmlAntrian[pasien.head];
    return c;
}

void main()
{
	int terakhir;
	int awal, temp;
	int noUser;
	int prediksi, hitungWaktu;
	int i,j;
	char pilih;
	create();
    awal:
	do
    {
		printf("\n\t==Program menghitung lama antrian==");
		printf("\n\nMasukkan no Antrian paling awal (misal 1): ");
		scanf("%d", &awal);
	}while(awal <= 0);
	
	do
    {
		printf("\n\nMasukkan no Antrian paling akhir (misal 10): ");
		scanf("%d", &terakhir);
        printf("\n====================================\n\n");
	}while(terakhir <= awal || terakhir > MAX);
	
	
	temp = awal; //tampung 
	for(awal;awal <= terakhir; awal++)
    {
		enqueue(awal);
	}
	puts("\n====================================");
	puts("      Nomor Antrian saat ini      ");
	puts("====================================");
	tampil(awal);
	puts("\n====================================");
	do
    {
		printf("\nMasukkan no antrian anda (%d-%d) :  ", temp,terakhir);
		
		scanf("%d", &noUser);
        
        
	}while((noUser <= temp || noUser > terakhir)&&(cek()!=noUser));
	
	do
    {	
        

		printf("\nPerkiraan waktu periksa per pasien (Menit) : ");
		
		scanf("%d", &prediksi);
	}while( prediksi <= 0 || prediksi >= 60);

	
	for( i = temp; i <= noUser-1 ; i++)
    {
		j++;
		hitungWaktu = j * prediksi;
	}
    if (cek()==noUser)
    {
        printf("\n\t***Sekarang giliran anda***\n\n");
    }
    
	printf("Anda Harus Menunggu %d Menit sampai giliran Anda", hitungWaktu);

    printf("\n\nMemulai kembali program ? (y/n)");
    pilih=getch();
    system("cls");
    if(pilih=='y'||pilih=='Y')
    {
        goto awal;
    }
    else
    {
        return 0;
    }

    
}
*/
//*/BY Syamsul Arifin
/*
#include <stdio.h>
#define MAXENTRY 9999

typedef struct{
	int totalEntries[MAXENTRY];
	int head;
	int tail;
}entry;
entry patientEntry;

void create(){
	patientEntry.head = patientEntry.tail = -1;
}

int isEmpty(){
	if(patientEntry.tail==-1){
		return 1;
	}else{
		return 0;
	}
}

int isFull(){
	if(patientEntry.tail==MAXENTRY-1){
		return 1;
	}else{
		return 0;
	}
}

void enqueue(int data){
	if(isEmpty()==1){
		patientEntry.head = patientEntry.tail = 0;
		patientEntry.totalEntries[patientEntry.tail]= data;
		printf("data %d masuk!\n", patientEntry.totalEntries[patientEntry.tail]);
	}else{
		if(isFull()==0){
			patientEntry.tail++;
			patientEntry.totalEntries[patientEntry.tail] = data;
			printf("data %d masuk!\n", patientEntry.totalEntries[patientEntry.tail]);
		}
	}
}

void tampil(int entry){
	if(isEmpty()==0){
		for(int i = patientEntry.head;i <= patientEntry.tail; i++){
			printf("%d ",patientEntry.totalEntries[i]);
		}
	}else{
		printf("data kosong!\n");
	}
}

void main(){
	int firstEntry;
	int entry, entryTemp;
	int entryUser;
	int timePrediction, timeCalculation;
	int i,j;
	
	create();
	do{
		printf("+---------------------------------------------+\n");
		printf("|  Masukkan no Antrian paling awal (misal 1): |\n");
		printf("+---------------------------------------------+\n");
		scanf("%d", &entry);
	}while(entry <= 0);
	
	do{
		printf("+-----------------------------------------------+\n");
		printf("|  Masukkan no Antrian paling akhir (misal 10): |\n");
		printf("+-----------------------------------------------+\n");
		scanf("%d", &firstEntry);
	}while(firstEntry <= entry || firstEntry > MAXENTRY);
	
	
	entryTemp = entry;
	for(entry;entry <= firstEntry; entry++){
		enqueue(entry);
	}
	puts("\n----------------------------------");
	puts("      Nomor Antrian saat ini      ");
	puts("----------------------------------");
	tampil(entry);
	puts("\n----------------------------------");
	do{
		printf("\n+------------------------------------+");
		printf("\n| Masukkan no antrian anda (%d-%d) :  |", entryTemp,firstEntry);
		printf("\n+------------------------------------+\n");
		scanf("%d", &entryUser);
	}while(entryUser <= entryTemp || entryUser > firstEntry);
	
	do{
		printf("\n+----------------------------------------------+");
		printf("\n| Perkiraan waktu periksa per pasien (Menit) : |");
		printf("\n+----------------------------------------------+\n");
		scanf("%d", &timePrediction);
	}while( timePrediction <= 0 || timePrediction >= 60);
	
	
	for( i = entryTemp; i <= entryUser-1 ; i++){
		j++;
		timeCalculation = j * timePrediction;
	}
	printf("\n------------------------------------------------\n");
	printf("Anda Harus Menunggu %d Menit sampai giliran Anda", timeCalculation);
	printf("\n------------------------------------------------");
}/*
#include<stdio.h>
#include<stdlib.h>
#define MAX 120

struct stack{
	int plat[MAX];
	int count;
}s;

struct queue{
	int plat[MAX];
	int front;
	int rear;
	int count;
}q;
int pop();
void display();
void Q_Start();
void S_Start();
void queue_normal();
void push();
int chekMb();
void enqueue();
void dequeue();

int main()
{
	struct queue  q;
	struct stack  s;
	int choice;
	int noPlat;
	
	Q_Start(&q);
	S_Start(&s);

		menuAwal:

		printf("==============================================\n");
		printf("\tProgram Antrian Parkir Mobil\n");
		puts("=============================================");
		printf("Menu : \n1. Mobil Masuk\n2. Mobil Keluar\n3. Display antrian mobil\n");
		printf("4. Exit Program\n");
		puts("=============================================");
		printf("Silahkan input pilihan anda : ");
		scanf("%d",&choice);
		puts("=============================================");
		switch(choice)
		{
			case 1:
			printf("Masukkan nomor plat mobil enqueue (tanpa huruf) : ");
			scanf("%d",&noPlat);
			printf("\n\n\n");
			enqueue(noPlat,&q);
			display(&q);
			system("pause");
            system("cls");
			goto menuAwal;
			break;

			case 2:
			printf("Masukkan plat nomor mobil keluar (tanpa huruf):");
			scanf("%d",&noPlat);
			printf("\n\n\n");
			dequeue(noPlat,&q,&s);
			display(&q);
			
            system("cls");
			goto menuAwal;
			break;

			case 3:
			system("clear");
			display(&q);
			system("pause");
            system("cls");
			goto menuAwal;
			break;

			case 4:
            printf("Terima kash sudah menggunakan layanan kami");
            printf("\nPress enter to exit program...");
            system("pause");
            system("cls");
			return 0;

			default:
			printf("\nInput yang anda masukkan salah, anda akan kembali ke menu utama->->->");
			system("pause");
            system("cls");
			goto menuAwal;
			break;
		}
}
int pop(struct stack *s)
{
	int noPlat;
	
	noPlat=s->plat[s->count];
	s->count--;
	return(noPlat);
}
void display(struct queue *q)
{
	int i,x;
	x=q->front;
	puts("=============================================");
	printf("\tData antrian mobil yang parkir : \n");
	puts("=============================================");
	if(q->count==0)
		printf("\nAntrian dalam parkiran kosong\n");
	else {	
		for(i=1;i<=q->count;i++){
			printf("%d. Mobil plat nomor %d\n",i,q->plat[x]);
			x++;
		}
		printf("\nJumlah mobil yang parkir : %d\n\n\n\n",q->count);
	}
	return;
}
void Q_Start(struct queue *q)
{
	q->front = q->rear = 0;
	q->count = 0;	
}
void S_Start(struct stack *s)
{
	s->count=0;
}
void queue_normal(int x,struct queue *q, struct stack *s)
{	
	while(x<q->rear){
		q->plat[x]=q->plat[x+1];
		x++;
	} 
	
	q->rear--;
	q->count--;
	
	while(s->count!=0){
		q->front--;
		q->plat[q->front]=pop(s);
		q->count++;	
	} 
}
void push(int noPlat,struct stack *s)
{
	s->count++;
	s->plat[s->count]=noPlat;
}
int chekMb(int noPlat,struct queue *q)
{
	int i,hasil;
	
	for(i=q->front;i<=q->rear;i++){
		if(q->plat[i]==noPlat){
			hasil=i;
			break;
		}
		else if((q->plat[i]!=noPlat)&&(i==q->rear)){
			hasil=0;
		}
	}
	return(hasil);
}
void enqueue(int noPlat, struct queue *q)
{
	if(q->rear==MAX){
		printf("\nAntrian Penuh !\n");
		return;
	}
	else if(q->count==0){
		q->rear++;
		q->plat[q->rear]=noPlat;
		q->count++;
		q->front++;
	}
	else{
		q->rear++;
		q->plat[q->rear]=noPlat;
		q->count++;
	}
}
void dequeue(int noPlat, struct queue *q,struct stack *s)
{
	int i,x;
	
	i=q->front;

	if(q->count==0){
		printf("\nAntrian kosong !\n");
		system("pause");
		return;
	}
	else if(chekMb(noPlat,q)==0){
		printf("\nPlat mobil yang anda masukkan tidak ada dalam antrian !\n");
		system("pause");
		return;
	}	
	else if((chekMb(noPlat,q)==q->front)&&(q->count>1)){
		q->front++;
		q->count--;
		return;
	}
	else if((chekMb(noPlat,q)==q->front)&&(q->count==1))
		Q_Start(q);		
	else
    {				
		x=chekMb(noPlat,q);
		printf("\nMobil yang keluar sementara : \n");
		for(i=q->front;i<x;i++){
			printf("- Mobil plat nomor %d\n",q->plat[i]);
			push(q->plat[i],s);
			q->front++;
			q->count--;
	}
	queue_normal(x,q,s);
	system("pause");
	return;
	}
}	*/
