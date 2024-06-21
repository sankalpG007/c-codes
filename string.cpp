#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    string str1(5, 'n');
    string str2(4,'k');
    string str3 = "Sankalp Singh";
    string str4;
    getline(cin, str4);
    cout<<str1<<endl<<str2<<endl<<str3<<endl<<str4;

    return 0;
}