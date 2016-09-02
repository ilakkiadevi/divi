#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i=0,j,k;
int a[10];
printf("%d",enter the no);
scanf("%d",&reg);
while(reg!=0)
{
a[i]=reg%=10;
reg=reg/10;
i++;
}
for(j=0;j<i;j++)
{
for(k=j+1;k<i;k++)
{
if(a[j]=a[k]&&a[k]!='\0)
a[k]='\0';
}}

getch();
}
}
}






