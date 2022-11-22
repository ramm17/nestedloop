#include<stdio.h>
#include<conio.h>
int main()
{
    int r,i,j,k;
    printf("Enter the no. of rows to print pattern:");
    scanf("%d",&r);
    for(i=1;i<=r;i++)//row
    {
        for(j=r;j>=i;j--)//space
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)//star
        {
            printf("#");
        }
        printf("\n");
    }
    getch();
    return 0;
}


