#include<iostream>
using namespace std;
int main()
{ 
    int num;
    cout<<"Enter a no.: ";
    cin>>num;

    if(num>0){
        cout<<"Positive number";
    }
    else if(num < 0){
        cout<<"Negative number";
    }
    else{
        cout<<"Neither Positive Nor Negative ";
    }
    return 0 ;
}