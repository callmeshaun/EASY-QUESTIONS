#include<iostream>

using namespace std;

int power(int base , int exp){

    int result =1;

    while(exp --){

        result*=base;
    }

    return result;
}

int main(){

    int num , original , sum=0;

    cin>>num;
    original=num;

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
        sum += power(digit , digits);
        temp/=10;  

}

cout<<(original == sum ? "THIS IS AN ARMSTRONG NUMBER" : "NOT AN ARMSTRONG NUMBER");

}