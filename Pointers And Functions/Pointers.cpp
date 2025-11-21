#include <iostream>
using namespace std;

int main(){
    int i = 5;
    int *iptr;

    iptr = &i;

    cout<<"\ni = "<<i;
    cout<<"\niptr = "<<iptr;

    cout<<"\n&i = "<<&i;
    cout<<"\n&iptr = "<<&iptr;
    cout<<"\n*iptr = "<<*iptr;

    cout<<"\niptr+1 = "<<iptr+1;
    cout<<"\n*iptr+1 = "<<*iptr+1;
    cout<<"\n*(iptr+1) = "<<*(iptr+1);
    cout<<"\n*iptr++ = "<<*iptr++;
    cout<<"\n++(*iptr) = "<<++(*iptr);
}
