#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    /*
    Description: Get an input character from the user and give the ASCII value 
    of the given input as the output.
    Input: b
    Output: 98

    Input: B
    Output: 66
*/
    char ch;
    cout<<"Enter Character: ";
    cin>>ch;
    cout<<int(ch)<<endl;
    return 0;
}