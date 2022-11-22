#include<stdio.h>
#include<iostream>
using namespace std;
/*
    Write a program to find Number of days in a given month of a given year
    Description Get the number of month and year as input from the user and check the number of days present in that month.

    Input
    Enter month : 2
    Enter year : 2000
    Output
    29
*/
void yearCheak(int month,int flag){
    switch (month)
    {
        case 1:
            cout<<"31"<<endl;
            break;
        case 2:
            if(flag==0)
                cout<<"28"<<endl;
            else
                cout<<"29"<<endl;
            break;
        case 3:
            cout<<"31"<<endl;
            break;
        case 4:
            cout<<"30"<<endl;
            break;
        case 5:
            cout<<"31"<<endl;
            break;
        case 6:
            cout<<"30"<<endl;
            break;
        case 7:
            cout<<"31"<<endl;
            break;
        case 8:
            cout<<"31"<<endl;
            break;
        case 9:
            cout<<"30"<<endl;
            break;
        case 10:
            cout<<"31"<<endl;
            break;
        case 11:
            cout<<"30"<<endl;
            break;
        case 12:
            cout<<"31"<<endl;
            break;
        default:
            cout<<"Wrong Input"<<endl;
            break;
        }
}
int main(){
    int month,year,flag=0;
    cout<<"Enter Month: ";
    cin>>month;
    cout<<"Enter Year: ";
    cin>>year;
    if(year%4==0){
        if(year%400==0 || year%100!=0){
            flag=1;
            yearCheak(month,flag);
        }
    }
    else
        yearCheak(month,flag);
    return 0;
}