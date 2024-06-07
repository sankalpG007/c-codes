/*write a program to output wheater a number is divided by both 2 and 3 or divisible by one of them*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n%2==0&&n%3==0){
        cout<<"number is divided by both 2 or 3"<<endl;
    }
    else if(n%2==0){
        cout<<"divisible by 2"<<endl;
    }
    else if(n%3==0){
        cout<<"divisible by 3"<<endl;
    }
    else{
        cout<<"divisble by none"<<endl;
    }
    return 0;
}