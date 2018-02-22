#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,n,temp;
clrscr();
printf("Enter the range:");
scanf("%d",&n);
printf("Enter the Elements:");

for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}

for(i=0;i<n-1;i++)
  {
for(j=0;j<n;j++)
  {
  if(a[i]>a[j])
    {
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
    }
}
}
print("The stroed: \n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("The maximum is\n:");
printf("%d",a[n-1]);
}
getch();
}
