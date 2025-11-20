#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter number a: ";
    cin>>a;
    cout<<"Enter number b: ";
    cin>>b;

    int pow=1;
    for(int i=0; i<b; i++){
        pow = pow*a;
    }
    cout<<pow;
}