#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int sum=0;
    int orignal=n;
    while(n>0){
        int lastdigit= n%10;
        sum+= round(pow (lastdigit,3));
        n=n/10;
    }
        if(sum==orignal){  
             cout<<"Armstrong"<<endl;
    }
    else{
        cout<<"not armstrong"<<endl;
    }


    return 0;
}