#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    /*
    Description: Take an input character from user and check whether it is an alphabet or not.
        Input : A
        Output:  Alphabet

        Input: 7
        Output: Not an alphabet
    */
    char ch;
    printf("Enter Alphabet: ");
    cin>>ch;
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
        cout<<"Alphabet"<<endl;
    }
    if(ch>='0' && ch<='9'){
        cout<<"Not an alphabet"<<endl;
    }
    return 0;
}