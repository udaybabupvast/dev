#include<stdio.h>
#include<string.h>
void main()
{
char a[50],r,n;
int i,l;
printf("Enter the string:");
scanf("%s",a);
l=strlen(a);
printf("Enter the element to be replaced:");
scanf("%c",&r);
scanf("%c",&r);
printf("Enter the element to be added:");
scanf("%c",&n);
scanf("%c",&n);
for(i=0;i<l;i++)
{
if(a[i]==r)
{
a[i]=n;
}
}
printf("The new string is %s",a);
}

