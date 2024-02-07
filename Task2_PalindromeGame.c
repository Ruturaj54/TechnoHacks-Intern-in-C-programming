//Write a program to check weather the given string is palindrome or not..

#include<stdio.h>
#include<stdbool.h>

int main()
{
    int No = 0;
    printf("-------------------------------------------------------------\n");
    printf("Enter the length of the String that you want to enter : \n");
    scanf("%d",&No);
    printf("-------------------------------------------------------------\n");

    char Str[No];
    char Strx[No];

    printf("-------------------------------------------------------------\n");
    printf("Enter the string here : \n");
    scanf("%s",&Str);

    printf("-------------------------------------------------------------\n");

    for(int i = 0,j = No - 1; i < No;i++,j--)
    {
        Strx[i] = Str[j];
    }
    
    printf("-------------------------------------------------------------\n");
    if(*Strx == *Str)
    {
        printf("The Entered String is PALINDROME\n");
    }
    else
    {
        
        printf("The Entered String is NOT PALINDROME\n");
    }
    printf("-------------------------------------------------------------\n");
}