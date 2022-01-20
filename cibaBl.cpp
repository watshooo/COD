#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct Mahasiswa
{
int nim;
Mahasiswa *next;
}Mahasiswa;
void init (Mahasiswa **p)
{
*p = NULL;
}
Mahasiswa *alokasi (int nim)
{
Mahasiswa *p;
p = (Mahasiswa*) malloc (sizeof(Mahasiswa));
if (p != NULL)
{
p -> next = NULL;
p -> nim = nim;
}

}
void add (Mahasiswa **p, int nim)
{
*p = alokasi(nim);
printf ("%d", (*p) -> nim);
}
int main()
{
Mahasiswa *head;
init (&head);
add (&head,15100176);
getch();
return 0;
}
