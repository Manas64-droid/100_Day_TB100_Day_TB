#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    /*
    Get an input number from the user and check whether it is a positive or negative number.
    Input : -10
    Output : Negative number

    Input :0
    Output : Neither positive nor negative

    Input :15
    Output : Positive number
    */
    int num;
    printf("Enter Number: ");
    cin>>num;
    if(num==0){
        cout<<"Neither positive nor negative"<<endl;
    }
    if(0>num){
        cout<<"Negative number"<<endl;
    }
    if(0<num){
        cout<<"Postive number"<<endl;
    }
    return 0;
}