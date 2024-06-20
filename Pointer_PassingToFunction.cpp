#include<iostream>
using namespace std;

void increment(int a){  // this "a" is different and int 'a' is different 
    a++;          // so this will not increment below a value 
}

int main(){

int a= 2;
increment(a);
cout<<a<<endl;  // a will print value 2

    return 0;
}