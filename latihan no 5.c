#include <stdio.h>

struct date{
	int day;
	int month;
	int year;
};
	
int main(){
	
	struct date amirin, adam, yudha, rizal, kurniawan;
	
	amirin.day 		= 04;
	amirin.month 	= 11;
	amirin.year 	= 2001;
	
	adam.day 		= 15;
	adam.month		= 02;
	adam.year		= 2002;
	
	yudha.day		= 22;
	yudha.month		= 07;
	yudha.year		= 2002;
	
	rizal.day		= 07;
	rizal.month		= 12;
	rizal.year		= 2001;
	
	kurniawan.day	= 16;
	kurniawan.month	= 05;
	kurniawan.year	= 2002;
	
	printf("Daftar Tanggal Lahir :\n ");
	printf("1. Amirin 	= %d/%d/%d\n ",amirin.day, amirin.month, amirin.year);
	printf("2. Adam 	= %d/%d/%d\n ",adam.day, adam.month, adam.year);
	printf("3. Yudha 	= %d/%d/%d\n ",yudha.day, yudha.month, yudha.year);
	printf("4. Rizal 	= %d/%d/%d\n ",rizal.day, rizal.month, rizal.year);
	printf("5. Kurniawan 	= %d/%d/%d\n ",kurniawan.day, kurniawan.month, kurniawan.year);
	
	return 0;

}





