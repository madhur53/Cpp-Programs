#include <iostream>
using namespace std;

int largest_Digit(int num){
    int largest=-1;

    while(num!=0){
        int digit=num%10;
        if(digit>largest){
            largest=digit;
        }
        num/=10;
    }

    return largest;
}

int main(){
    cout<<largest_Digit(148966548);
}