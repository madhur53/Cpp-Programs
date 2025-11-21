#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int count_even=0;
    int count_odd=0;
    while(n!=0){
        if((n%10)%2 == 0){
            count_even++;
        }

        else{
            count_odd++;
        }

        n/=10;
    }

    cout<<"Even digits: "<<count_even<<"\n";
    cout<<"Odd digits: "<<count_odd;
}