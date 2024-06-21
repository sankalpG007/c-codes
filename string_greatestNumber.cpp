#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s = "5486546546";

    sort(s.begin(), s.end(), greater<int>()); // lower to upper
    cout<<s<<endl;

    return 0;
}