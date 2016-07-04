#include<stdio.h>
#include<conio.h>
void longest(char s1[],char s2[])
{
char s3[254];
int i,a=0,b=0,c=0;
a=strlen(a);
b=strlen(b);
if(a<b)
c=a;
else
c=b;
for(i=0;i<c;i++)
{
if(s1[i]==s2[i])
s3[i]=s1[i];
else
break;
}
printf("%s\n",s3);
}
void main()
{
char s1[254];
char s2[254];
int i;
for(i=0;i<1;i++)
{
printf("Enter the string");
scanf("%s %s",s1,s2);
s1[strlen(s1)-1]='\0';
s2[strlen(s2)-1]='\0';
printf("longest commen prefix %s and %s",s1,s2);
longest(s1,s2);
}
getch();
}
