#include <iostream>
#include <string.h>

using namespace std;

class Kerjaan
{
    public :
    struct peserta
    {
        string nama[100], jabatan[100];
        int umur;
    }people[100];

    int i, j;

    void set(int i = 0, string nama = "NULL",string jabatan = "NULL", int umur = 0)
    {
        for (j=0; j< 100; j++)
        {
            *people[i].nama = nama;
            *people[i].jabatan = jabatan;
            people[i].umur = umur;
        }
    }

    int get_info(int i = 0, string nama = "NULL",string jabatan = "NULL", int umur = 0)
    {
        *people[i].nama = nama;
        *people[i].jabatan = jabatan;
        people[i].umur = umur;
        
        return *people[i].nama = nama, *people[i].jabatan = jabatan, people[i].umur = umur;
    }

    void log(int i = 0, int j = 0)
    {
        for(i = i; i<j;i++)
        {
            cout << "\n\n\t [ Pelamar " << i+1 << " ]"<< endl;
            cout << "\n\t Nama = " << *people[i].nama;
            cout << "\n\t Jabatan = " << *people[i].jabatan;
            cout << "\n\t Umur = " << people[i].umur <<endl;
        }
        cout << "\n\t Jumlah Pelamar : " << j <<endl<<endl;
    }
};