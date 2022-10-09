/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[20][20],b[20][20],mult[10][10],m,n,i,j,k;
    printf("enter the number of rows :\n ");
    scanf("%d",&m);
    printf("enter the number of column :\n ");
    scanf("%d",&n);
    printf("enter the first matrix elements =\n ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the second matrix elements =\n ");
    for(int i=0;i<m;i++)
    {
         for(int j=0;j<n;j++)
         {
             scanf("%d",&b[i][j]);
         }
    }
    printf("multiplication of matrix =\n");
    for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
       {
           mult[i][j]=0;
           for(int k=0;k<n;k++)
           {
           mult[i][j]+=a[i][k]*b[k][j];
           }
       }
    }
    
    //for printing result
    for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
       {
           printf("%d\t",mult[i][j]);
       }
    }
    return 0;
}
