#include<stdio.h>
#include<conio.h>
struct Employee
    {
        char Name[25];
        int RollN;
        char phoneN[100];
        char address[100];
    };
struct Company
{
    char Shift[25];
    struct Employee E;
};
int main()
{  
    char s[25];
    struct Company C;
    printf("Enter shift of employee\n");
    scanf("%s",C.Shift);
    printf("Enter Name, RollN, phoneN, Address\n");
    scanf("%s %d %s %s",C.E.Name,&C.E.RollN,C.E.phoneN,C.E.address);
    printf("%s\n",C.Shift);
    printf("%s\n %d\n %s\n %s\n",C.E.Name,C.E.RollN,C.E.phoneN,C.E.address);
    getch();
    return 0;
}