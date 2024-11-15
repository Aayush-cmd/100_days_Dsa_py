//Day 2 coding Statement : Write a program to identify if the character is an alphabet or not.
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a Character: ";
    cin>>ch;

    if((ch >='A' && ch <= 'Z') || (ch >='a' && ch <= 'z'))
    {
    cout<<"Alphabet";
    }

    else{
        cout<<"Not an alphabet";
    }
    return 0;
}
