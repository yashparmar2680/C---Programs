#include<iostream>
using namespace std;
int main() {
    string name;
    cout<<"Enter your first name :";
    cin>>name;
    cout<<"Hey "<<name;

    cin.ignore();
    cout<<"\nEnter your full name :";
    getline(cin,name);
    cout<<"Hey "<<name;
    return 0;
}