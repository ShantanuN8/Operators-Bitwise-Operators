#include <iostream>
#include <bitset>
#include <string>
using namespace std;
 
int main() 
{
    int n,j,k,set,reset,num;
    cout<<"Enter decimal value to convert to binary:- ";
    cin>>num;
    string binary=bitset<8>(num).to_string();
     cout<<"\nEntered number was "<<num<<" the convereted binary number is: "<<binary;
    j |= (1 << num);
    k &= ~(1 << num);
    set = num|j;
    reset = num&k;

    cout<<"\nSetting the bit: "<<set;
    cout<<"\nResetting the bit: "<<reset;

}

//OUTPUT
//Enter decimal value to convert to binary:- 34
//Entered number was 34 the convereted binary number is: 00100010
//Setting the bit: 38
//Resetting the bit: 0
