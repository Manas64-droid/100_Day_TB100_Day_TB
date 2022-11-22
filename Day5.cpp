#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    /*
    Get a number as input from the user and check whether the given number is odd or even
    Input
    10
    Output
    Even

    Input
    5
    Output
    Odd
    */
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    if(num%2!=0){
        cout<<"Odd"<<endl;
    }
    else{
        cout<<"Even"<<endl;
    }
    return 0;
}