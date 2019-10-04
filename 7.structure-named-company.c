/*C program to read and print company's record using structure*/
 
#include <stdio.h>
 
/*structure declaration*/
struct company{
    char    name[30];
    char address[30];
    int     phone;
    int   noofemployee;
};
 
int main()
{
    /*declare structure variable*/
    struct company emp;
     
    /*read company details*/
    printf("\nEnter details :\n");
    printf("Name:");          gets(emp.name);
    printf("adress:");        gets(emp.address);
    printf("Phone :");            scanf("%d",&emp.phone);
    printf("No. of Employee :"); scanf("%d",&emp.noofemployee);
     
    /*print company details*/
    printf("\nEntered detail is:");
    printf("Name: %s\t"   ,emp.name);
    printf("Id: %s\t"     ,emp.address);
    printf("Phone: %d\n",emp.phone);
     printf("No. of Employee: %d\n",emp.noofemployee);

    return 0;
}
