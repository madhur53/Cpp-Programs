#include <iostream>
using namespace std;

char grade(int obtained_marks,int total_marks){
    float percentage = (obtained_marks*100.0f)/total_marks;

    if(percentage>=90){
        return 'A';
    }

    else if(percentage>=80){
        return 'B';
    }

    else if(percentage>=70){
        return 'C';
    }

    else if(percentage>=60){
        return 'D';
    }

    else if(percentage>=50){
        return 'E';
    }

    else{
        return 'F';
    }

}

int main(){
    cout<<grade(400,500);
}