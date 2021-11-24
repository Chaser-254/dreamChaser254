#include <stdio.h>
#include <windows.h>

int main()
{
system("color 0a");
int ID = 600;
int password = 0000;
printf("Please enter your ID:\n");
scanf("%d", &ID);

switch(ID)
{
case 600:
printf("Enter your password:\n");
scanf("%d", &password);

switch(password)
{
case 0000:
printf("Welcome Dr. Ochieng\n");
break;

default:
printf("incorrect password");
break;
}
break;
default:
printf("incorrect ID");
break;
}
}
