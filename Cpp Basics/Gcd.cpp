#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    if(a>b){
        for(int i=b; i>=1; i--){
        if(a%i==0 && b%i==0){
            cout<<i;
            break;
        }
        }
    }

    else{
        for(int i=a; i>=1; i--){
        if(a%i==0 && b%i==0){
            cout<<i;
            break;
        }
        }
    }
    
}