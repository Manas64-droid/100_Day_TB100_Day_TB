#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    /*
    Take an input character from the user and check whether the given input is a vowel or consonant.
    Input
    A
    Output
    Vowel

    Input
    m
    Output
    Consonant

    Input
    3
    Output
    Invalid Input
    */
    char ch;
    cout<<"Enter Charchter: ";
    cin>>ch;
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            cout<<"Vowel";
        }
        else{
            cout<<"Consonant";
        }
    }
    if(ch>='0' && ch<='9'){
        cout<<"Invalid Input";
    }
    return 0;
}