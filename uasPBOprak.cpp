#include <string.h>
#include <iostream>
#include <cstdio>
#include "kerjaan.cpp"

using namespace std;

int main()
{
    Kerjaan orang;
    int pilih,counter,umur_nya;
    string nama_nya, jabatan_nya;
    orang.set(0,"NULL", "NULL", 0);

    while (true)
    {
        system ("CLS");
        cout << "\n\t1. Isi form" << endl;
        cout << "\t2. Log" << endl;
        cout << "\t3. Exit" << endl;
        cout << "Pilihan anda: ";
        cin >> pilih;
        cin.ignore(1000, '\n');
        try
        {
            if (pilih == 1 || pilih == 2 || pilih == 3)
            {
                if(pilih == 1)
                {
                    cout << "\n\t === ISI FORM === ";
                    cout << "\n\t Nama : ";
                    getline(cin,nama_nya);
                    cout << "\n\t Jabatan yang akan dilamar : ";
                    getline(cin,jabatan_nya);
                    cin.ignore(1000, '\n');
                    cout << "\n\t Umur : ";
                    cin>>umur_nya;
                    orang.get_info(counter,nama_nya,jabatan_nya,umur_nya);
                    counter++;
                }
                if (pilih == 2)
                {
                    cout << "\n\t [ nama dan jabatan karyawan yang melamar kerja ]" <<endl;
                    orang.log(0,counter);

                    system("pause");
                }
                 if(pilih == 3)
                {
                    cout << "\n\n\tclosed\n\n";
                    break;
                }
            }
            else
            {
                throw " INPUT HANYA (1/2/3)";
            }
        }
        catch(const char* x)
        {
	    	cout<<x;
	    }
    }

}