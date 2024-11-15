# include <iostream>
# include <cctype>  
using namespace std;

int main()
{
char ch ;
    cout<<"Enter the char you want: ";
    cin>>ch;

    ch = tolower(ch);

    if(isalpha(ch)){

        if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        cout<<"It is a vowel \n";}
        else{
        cout<<"It is a consonent \n";
        }


    }
    else{
        cout<<"Invalid input";
    }

}