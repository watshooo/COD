#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

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
    int j,l,n;
    int k = 1;
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
    
    for ( l = k-1; l > 0 ; l--)
    {
        
        printf("%d",pop());
    }
    
}
