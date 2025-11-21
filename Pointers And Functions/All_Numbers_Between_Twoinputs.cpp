#include <iostream>
using namespace std;

void all_numbers(int a, int b){
    if(a>b){
        for(int i=b; i<a; i++){
            if(i==b){
                continue;
            }
            cout<<i<<" ";
        }
    }

    else{
        for(int i=a; i<b; i++){
            if(i==a){
                continue;
            }
            cout<<i<<" ";
        }
    }
}

int main(){
    all_numbers(2,50);
}