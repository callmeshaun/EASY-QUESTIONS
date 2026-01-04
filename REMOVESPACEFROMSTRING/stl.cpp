#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    string s ;
    getline(cin , s);

    s.erase(remove(s.begin() , s.end() , ' '),s.end());

    cout<<" the new string is "<<s<<endl;
    return 0;
}