//Develop a program that converts the temparature from Farenheit to celcius or vise versa
//(°F) = (Temperature in degrees Celsius (°C) * 9/5) + 32

#include<stdio.h>

float CelToFaren(float Celcius)
{
    float Faren = 0.0f;

    Faren = (Celcius*((float)9/(float)5)) + 32; 
    return Faren;
}
float FarenToCel(float Faren)
{
    float Cel = 0.0f;

    Cel = (float)(((float)5/(float)9) * (float)((float)Faren - (float)32));
    return Cel;
}
int main()
{
    float temp = 0.0f;
    int No = 0;
    float Cel = 0.0f;
    float fRet = 0.0f;
    float Faren = 0.0f;

    printf("----------------------------------------------------------------------------------------\n");
    printf("********************* WELCOME TO TEMPRATURE CONVERTOR ********************* \n");
    printf("----------------------------------------------------------------------------------------\n");


    printf("Enter your choice to convert Temprature : \n");
    printf("----------------------------------------------------------------------------------------\n");
    printf("1.Celcius To Farenheit\n");
    printf("----------------------------------------------------------------------------------------\n");

    printf("2.Farenheit To Celcius\n");
    printf("----------------------------------------------------------------------------------------\n");
    scanf("%d",&No);
    printf("----------------------------------------------------------------------------------------\n");

    switch(No)
    {
        case 1:
            printf("----------------------------------------------------------------------------------------\n");
            printf("Enter the Temprature in CELCIUS (Degree C) : \n");
            scanf("%f",&Cel);
            fRet = CelToFaren(Cel);
            printf("----------------------------------------------------------------------------------------\n");
            printf("The Temprature : %.3f Celcius is Equivatent to %.3f in Farenhit\n",Cel,fRet);
            printf("----------------------------------------------------------------------------------------\n");
            break;
        case 2:
            printf("----------------------------------------------------------------------------------------\n");
            printf("Enter the Temprature in FARENHEIT (Degree F) : \n");
            scanf("%f",&Faren);
            fRet = FarenToCel(Faren);
            printf("The Temprature : %.3f Farenheit is Equivatent to %.3f in Celcius\n",Faren,fRet);
            printf("----------------------------------------------------------------------------------------\n");
            break;
        default:
            printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
            printf("Enter Valid Choice !!!\n");
            printf("1 for Celcius to Faren and 2 for Faren to Celcius\n");
            printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");

    }
    printf("----------------------------------------------------------------------------------------\n");
    printf("********************* THANKYOU FOR USING TEMPRATURE CONVERTOR ********************* \n");
    printf("----------------------------------------------------------------------------------------\n");


    return 0;
}