#include <iostream>
#include <string.h>

using namespace std;

class Hewan
{
    public:
    void memakan(int j) ;

};

class Herbivora : public Hewan
{
    void memakan(int a)
    {
        cout << " hewan memakan rumput == herbivora" <<endl;
    }

};

class Kambing : public Herbivora
{
    public:
    void memakan(int k)
    {
        cout << namahewan << " jenis : " << jenis << " makanan " << makanan << " hidupnya di " << hidup << " suaranya " << suara << endl; 
    }
    private:
    string namahewan = "kambing";
    string jenis = "kambing 1";
    string makanan = "rumput" ;
    string hidup = "padang rumput";
    string suara = "mbek";

};

class Sapi : public Herbivora
{
    private:
    string namahewan = "sappi";
    string jenis = "sapi 1";
    string makanan = "rumput" ;
    string hidup = "padang rumput";
    string suara = "moo";
};
class Kerbau : public Herbivora
{
    private:
    string namahewan = "kerbau";
    string jenis = "kerbau 1";
    string makanan = "rumput" ;
    string hidup = "padang rumput";
    string suara = "mo";
};
class Kuda : public Herbivora
{
    private:
    string namahewan = "kuda";
    string jenis = "kuda 1";
    string makanan = "rumput" ;
    string hidup = "padang rumput";
    string suara = "ngik";
};

class Karnivora : public Hewan
{
    void memakan(int a)
    {
        cout << " hewan memakan daging == karnivora" <<endl;
    }
};

class Kucing : public Karnivora
{
    private:
    string namahewan = "Kucing";
    string jenis = "Kucing 1";
    string makanan = "Daging" ;
    string hidup = "darat";
    string suara = "meow";
};
class Harimau: public Karnivora
{
    private:
    string namahewan = "Harimau";
    string jenis = "Harimau 1";
    string makanan = "Daging" ;
    string hidup = "darat";
    string suara = "um";
};
class Singa : public Karnivora
{
    private:
    string namahewan = "Singa";
    string jenis = "Singa 1";
    string makanan = "Daging" ;
    string hidup = "darat";
    string suara = "roar";
};

class Omnivora : public Hewan
{
    void memakan(int a)
    {
        cout << " hewan memakan segala == omnivora" <<endl;
    }
};

class Ayam : public Omnivora
{
    private:
    string namahewan = "Ayam";
    string jenis = "Ayam 1";
    string makanan = "segala" ;
    string hidup = "darat";
    string suara = "petok";

    
};
class Bebek : public Omnivora
{
    private:
    string namahewan = "Bebek";
    string jenis = "Bebek 1";
    string makanan = "segala" ;
    string hidup = "darat";
    string suara = "kwek";
};

int main()
{
    Hewan hewan1;
    Herbivora herbivora1;
    Karnivora karnivora1;
    Omnivora omnivora1;

    Kambing kambing1;
    Sapi sapi1;
    Kerbau kerbau1;
    Kuda kuda1;
    Kucing kucing1;
    Harimau harimau1;
    Singa singa1;
    Ayam ayam1;
    Bebek bebek1;

    cout << "herbivora" <<endl;
    kambing1.memakan(1);


}