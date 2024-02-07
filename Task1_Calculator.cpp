// Program to perform the simple calculator that performs the addition,multiplication,division,sbstraction etc

#include<stdio.h>
#include<iostream>
using namespace std;

template <class T>
T Addition(T iSize)
{
    T Sum = 0;
    T Arr[iSize];

    printf("Enter the Numbers Here for Addition : \n");
    for(int i = 0;i < iSize;i++)
    {
        cin>>Arr[i];
        Sum = Sum + Arr[i];
    }
    cout<<"Addition of All Numbers is : "<<Sum<<"\n";

}

template <class T>
T Substraction(T iSize)
{
    T Sub = 0;
    T Arr[iSize];
  

    printf("Enter the Numbers Here for Substration : \n");
    for(int i = 0;i < iSize;i++)
    {
        cin>>Arr[i];
    }
    Sub = Arr[0];

    for(int i = 1;i < iSize;i++)
    {
        Sub = Sub - Arr[i];
    }
    cout<<"Substration of All Numbers is : "<<Sub<<"\n";

}

template <class T>
T Division(T iSize)
{
    T div;
    T Arr[iSize];
    
     

    printf("Enter the Numbers Here for Division : \n");
    for(int i = 0;i < iSize;i++)
    {
        cin>>Arr[i];
       
    }
    div = Arr[0];
    for(int i = 1;i < iSize;i++)
    {
        div = div / Arr[i];
       
    }
    cout<<"Division of All Numbers is : "<<div<<"\n";

}
template <class T>
T Multiplication(T iSize)
{
    T Mul = 1;
    T Arr[iSize];

    printf("Enter the Numbers Here for Multiplication : \n");
    for(int i = 0;i < iSize;i++)
    {
        cin>>Arr[i];
        Mul = Mul * Arr[i];
    }
    cout<<"Multiplication of All Numbers is : "<<Mul<<"\n";

}


int main()
{
  
    int iAns;
    float fAns;
    double dAns;
    char cAns;
    int No = 0;
    int iArr[No];
    float fArr[No];
    double dArr[No];
    char cArr[No];
    int Operation = 0;
    int Choice = 0;

    while(Choice != 1)
    {
    cout<<"How many Numbers you want to enter : \n";
    cin>>No;

    printf("Enter the operation you want to perform : \n");
    printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
    cin>>Operation;

    if(Operation == 1)
    {   
        Addition(No);
    }
    else if(Operation == 2)
    {   
        Substraction(No);
    }
    else if(Operation == 3)
    {
        Multiplication(No);
    }
    else if(Operation == 4)
    {   
        Division(No);
    }
    else
    {
        printf("Please Enter the Valid Operation\n");
        printf("Enter 1 for Addition, 2 for Substration In such way !!! \n");
        return -1;
    }
    printf("To EXIT Enter 1 or 0 To CONTINUE : \n");
    scanf("%d",&Choice);
    }

    if((Choice > 1) || (Choice < 0))
    {
        printf("Enter Valid Choice 1 For Exit and 0 for Continue\n");
        return -1;

    }
    return 0;
} 