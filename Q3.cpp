//  day3 coding Statement: Write a program to find ASCII values of a character
#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter a character whose ascii value you seek: ";
    cin>>ch;

    cout<<"The Ascii value of "<< ch << " is: " << int(ch)<<"\n";
    return 0;

}