#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s = "smackdown";

    transform(s.begin(), s.end(), s.begin() , ::toupper); // lower to upper
    cout<<s<<endl;

    return 0;
}