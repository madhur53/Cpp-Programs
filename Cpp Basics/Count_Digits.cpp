#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number n: ";
    cin>>n;

    int count=0;
    int num=n;
    
    while(n!=0){
        count++;
        n/=10;
    }

    cout<<"The count of digits in "<<num<<" are: "<<count<<endl;
}