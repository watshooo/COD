#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Parkiran {
    int number;
    struct Parkiran *next;
};
 
void pushData(struct Parkiran *daftarData, int num);
int  searchData(struct Parkiran *daftarData, int num);
void popData(struct Parkiran *daftarData);


void pushData(struct Parkiran *daftarData, int num) {
    while(daftarData->next != NULL)
    daftarData = daftarData->next;

    daftarData->next = (struct Parkiran *)malloc(sizeof(struct Parkiran));
    daftarData->next->number = num;
    daftarData->next->next = NULL;
}


int searchData(struct Parkiran *daftarData, int num) {
    int lokasi_mobil = -1;
    int i = 1;
    while(daftarData->next != NULL) {
        
    if(daftarData->next->number == num){
    return i;
    }
    
    else{
    i++;
    }

    daftarData = daftarData->next;
    
    }
    return lokasi_mobil;
}


void popData(struct Parkiran *daftarData) {
    while(daftarData->next != NULL) {
    printf("%d ", daftarData->number);
    daftarData = daftarData->next;
    }
    printf("%d", daftarData->number);
}


int main(void) {
    int num = 0, lokasi_mobil=0;
    int hours, minutes, seconds, day, month, year, biaya, total=0;
    char no[100], menu, input;
    float lama;

    struct Parkiran *daftarData;

    daftarData = (struct Parkiran *)malloc(sizeof(struct Parkiran));
    daftarData->number = 0;
    daftarData->next = NULL;

    while(1) {
    
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hours = local->tm_hour;
    minutes = local->tm_min;
    day = local->tm_mday;
    month = local->tm_mon + 1;
    year = local->tm_year + 1900;
    
    puts ("\n=================================================");
    puts ("               Selamat Datang di");
    puts ("           Tempat Parkir Gedung FTMM");
    puts ("             Universitas Airlangga");
    puts ("=================================================\n\n");
    puts ("Menu:       1. Masuk ke dalam parkiran          ->  pilih  'i' ");
    puts ("            2. Keluar dari parkiran             ->  pilih  'o' ");
    puts ("            3. Melihat record data parkiran     ->  pilih  'p' ");
    
    printf ("\nPosisi kendaraan saat ini  (i/o/p)       : "); scanf("%s", &input);
    
    if(input=='i'){
    
    printf("\nMasukkan nomor kendaraan: ");
    scanf("%d", &num);
    pushData(daftarData, num);
    
    printf ("\nTanggal masuk         : %02d-%02d-%d\n", day, month, year);
    printf ("Jam masuk             : %d:%d\n", hours, minutes);
    printf ("\nPerkiraan lama di parkiran (dalam jam)     : "); scanf ("%f", &lama);
    
    biaya=lama*2000;
    total=total+biaya;
    }
    
    else if(input=='o'){
    
    printf("\nMasukkan nomor kendaraan: ");
    scanf("%d", &num);
    
    if((lokasi_mobil = searchData(daftarData, num)) == -1){
        printf("Kendaraan dengan nomor `%d' tidak ditemukan\n", num);
    }
    else{
        printf("Kendaraan dengan nomor `%d' terdeteksi di parkiran nomor `%d'\n", num, lokasi_mobil);
        printf ("\nTanggal keluar         : %02d-%02d-%d\n", day, month, year);
        printf ("Jam keluar             : %d:%d\n", hours, minutes);
        printf ("\nBiaya parkir Anda sebesar %d Rupiah\n\n", biaya);
		}
    }
    
    else if(input=='p'){
    puts ("Nomor kendaraan:");
    popData(daftarData);
    
    printf ("\nJumlah uang sementara adalah sebesar %d Rupiah\n", total);
    }
    
    else{
    puts ("\nTerjadi kesalahan saat memasukkan menu");
    
    }
    puts ("\n=================================================");
    puts ("         Terima Kasih Atas Kunjungannya");
    puts ("=================================================");
    puts ("                        .                        ");
    puts ("                        .                        ");
    puts ("                        .                        ");
    puts ("                        .                        ");
    puts ("                        .                        ");
    
    }
    
 free(daftarData);
 return(0);
}
