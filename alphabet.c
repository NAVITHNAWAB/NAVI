#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("enter a character");
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&& c<='Z'))
printf("%c is an alphabet");
else
printf("%c is not an alphabet");

return 0;
}