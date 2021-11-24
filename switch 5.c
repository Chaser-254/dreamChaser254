#include <stdio.h>

int main()
{
int ID ;
int password;
printf("Please enter your ID:");
scanf("%d", &ID);

switch(ID)
case 200:
printf("Enter your password:");
scanf("%d", &password);
switch(password)
{
case 0000:
printf("Welcome Dr. Ochieng\n");
break;

default:
printf("invalid user password");
break;

Default:
printf("invalid user ID");
break;
}
}
