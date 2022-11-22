#include<iostream>
using namespace std;
int main(){
    /*
    Get the value of x and y coordinates as input from the user 
    and check in which quadrant the point lies and print it.
    Input
    10 20
    Output
    This point lies in first quadrant.

    Input
    -10 20
    Output
    This point lies in second quadrant.
    */
    int x,y;
    cout<<"Enter X Co-ordinate: ";
    cin>>x;
    cout<<"Enter Y Co-ordinate: ";
    cin>>y;
    if(0<x && 0<y)
        cout<<"This point lies in first quadrant"<<endl;
    else if(0>x && 0<y)
        cout<<"This point lies in second quadrant"<<endl;
    else if(0>x && y<0)
        cout<<"This point lies in third quadrant"<<endl;
    else
        cout<<"This point lies in fourth quadrant"<<endl;
    return 0;
}