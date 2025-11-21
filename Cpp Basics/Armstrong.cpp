#include <iostream>
# include <cmath>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int count=0;
    int num2=num;
    
    while(num2!=0){
        count++;
        num2/=10;
    }


    int sum=0;
    int num1=num;
    while(num1!=0){
        sum+=(int)(pow(num1%10,count)+0.5);
        //sum = sum + pow(num%10,count);
        num1/=10;
    }

    if(num==sum){
        cout<<"Armstrong";
    }

    else{
        cout<<"Not Armstrong";
    }

}