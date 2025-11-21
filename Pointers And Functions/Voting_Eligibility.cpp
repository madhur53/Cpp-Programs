#include <iostream>
using namespace std;

void inputDOB(int &date,int &month,int &year){
    cout<<"Enter the DOB as DD MM YYYY ";
    cin>>date>>month>>year;
}

int calculateAge(int present_year,int year){
    return present_year-year;
}

bool checkEligibility(int present_year,int year){
    if(calculateAge(present_year,year)>18){
        return true;
    }
    else{
        return false;
    }
}

void printResult(int present_year,int year){
    if(checkEligibility(present_year,year)){
        cout<<"Eligible to vote.";
    }
    else{
        cout<<"Not Eligible to vote";
    }
}

int main(){
    int date=21;
    int month=6;
    int year=2002;
    int present_year=2021;

    printResult(present_year,year);
}