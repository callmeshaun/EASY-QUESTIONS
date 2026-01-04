#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int num;
    cout<<"Enter the number" ;
    cin>>num;


    int original = num;
    int sum=0;


    //count digits

    int temp = num;
    int digits=0;

    while(temp>0){

        temp/=10;
        digits++;
    }


    // calculate digits and power
    temp = num;
    while(temp>0){
        int digit = temp %10;
        sum += pow(digit , digits);
        temp/=10;
    }

    if(original == sum)
        printf("THIS IS AN AMRSTRONG NUMBER ",sum);

    else
        printf("NOT AN ARMSTRONG NUMBER");

}