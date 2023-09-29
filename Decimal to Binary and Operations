#include <iostream>
#include <bitset>
#include <string>
using namespace std;
int main()
{
    int myvar0,myvar1,myvar2,left,right;
    cout<<"Enter decimal value to convert to binary:- ";
    cin>>myvar0;
    cout<<"\nHow much do you want to shift to right:-";
    cin>>right;
    cout<<"\nHow much do you want to shift to left:-";
    cin>>left;
    string binary=bitset<8>(myvar0).to_string();
    myvar1=(myvar0<<left);
    cout<<"\nShifting the bit to the left give us:- "<<myvar1;
    myvar2=(myvar0>>right);
    cout<<"\nShifting the bit to the right give us:- "<<myvar2;
}

//OUTPUT
//Enter decimal value to convert to binary:- 34

How much do you want to shift to right:-2

How much do you want to shift to left:-2

Shifting the bit to the left give us:- 136
Shifting the bit to the right give us:- 8
