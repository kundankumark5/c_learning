#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    printf("Enter month number to find days in that month\n");
    scanf("%d",&i);
    if(i==1) 
    {
        printf("This is January, There are 31 days in this month\n");
    }
    else if(i==2)
    {
        printf("February has 28 days in normal & 29 days in leap year\n");
    }
    else if(i==3)
    {
        printf("This is March,There are 31 days in this month");
    }
    else if(i==4)
    {
        printf("This is April,There are 30 days in this month");
    }
    else if(i==5)
    {
        printf("This is May,There are 31 days in this month");
    }
    else if(i==6)
    {
        printf("This is June,There are 30 days in this month");
    }
    else if(i==7)
    {
        printf("This is July,There are 31 days in this month");
    }
    else if(i==8)
    {
        printf("This is August,There are 31 days in this month");
    }
    else if(i==9)
    {
        printf("This is September,There are 30 days in this month");
    }
    else if(i==10)
    {
        printf("This is October,There are 31 days in this month");
    }
    else if(i==11)
    {
        printf("This is November,There are 30 days in this month");
    }
    else if(i==12)
    {
        printf("This is December,There are 31 days in this month");
    }
    else
    {
        printf("Wrong input");
    }
    return(0);
}