#include<stdio.h>
#include<conio.h>
void main()
{
char c;
int lowercasevowel,uppercasevowel;
printf("enter an alphabet");
scanf("%c",&c);
is lowercasevowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
is uppercasevowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(is lowercasevowel||is uppercasevowel)
printf("%c is a vowel",c);
else
printf("%c is a constant",c);
return 0;
}