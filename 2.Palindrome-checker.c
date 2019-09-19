#include <stdio.h>

int main() 
{
    int i,j,len,n;
    char a[20];
    gets(a);
    while(a[len] != '\0')
    {len++;}
     j=len-1;
     n=len/2;
    if(a[i] == a[j])
        {printf("It is a palindrome\n"); }    
        else
        { printf("Its not a palindrome\n");}
}   
