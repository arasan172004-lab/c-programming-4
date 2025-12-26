#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char nam[50],pass[50];
int i;
clrscr();
printf("Enter the username:");
scanf("%s",nam);
strcpy(pass,nam);
printf("%s",nam);
getch();
}
