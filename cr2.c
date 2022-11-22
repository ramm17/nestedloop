#include<stdio.h>
#include<conio.h>
int main()
{
    int r,i,j,k;
    printf("Enter the no. of rows to print pattern:");
    scanf("%d",&r);
    for(i=r;i>=1;i--)//row
    {
        for(j=r;j>=i;j--)//column
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)//hash
        {
            printf("#");
        }
        printf("\n");
    }
    getch();
    return 0;
}


