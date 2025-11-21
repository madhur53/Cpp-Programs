#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number n: ";
    cin>>n;

    int fact=1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }

    cout<<"The factorial of number "<<n<<" is: "<<fact;
    
}