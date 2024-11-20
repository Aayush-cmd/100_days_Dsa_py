#include<iostream>
using namespace std;
int main()
{
    int X_coord ,Y_coord ;
    cout<<"Enter 1st Coordinate:\n";
    cin>>X_coord;
    cout<<"Enter 2nd Coordinate:\n";
    cin>>Y_coord;

    if(X_coord > 0 && Y_coord > 0){
        cout<<"Its is in 1st Quadrant.";
    }

    else if(X_coord < 0 && Y_coord > 0){
        cout<<"Its is in 2nd Quadrant.";
    }
    else if(X_coord < 0 && Y_coord < 0){
        cout<<"Its is in 3rd Quadrant.";
    }
    else if(X_coord > 0 && Y_coord < 0){
        cout<<"Its is in 4th Quadrant.";
    }
    
}