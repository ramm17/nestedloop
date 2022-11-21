#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='A';
    int i,j,r;
    printf("Enter the no of rows:");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    getch();
    return 0;
}
