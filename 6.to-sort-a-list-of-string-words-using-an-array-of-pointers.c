#include<stdio.h>
int main()
{
   char array[5];
   int i,sum=0;
   char *ptr;

   printf("\nEnter array elements (5 strings):");
   for(i=0;i<5;i++)
      scanf("%s",&array[i]);

   /* array is equal to base address
    * array = &array[0] */
   ptr = array;

   for(i=0;i<5;i++){
        printf("%s",array[i]);
   }
   printf("\nThe sum is: %d",sum);
}
//Under constructio