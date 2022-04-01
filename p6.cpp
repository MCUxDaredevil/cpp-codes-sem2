/*

Name            Power Function
Description     Find the find value of m raised to n incorporating function overloading
Author			MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page		https://github.com/MCUxDaredevil/cpp-codes-sem2
Support URL		https://github.com/MCUxDaredevil/cpp-codes-sem2/issues
Discussions		https://github.com/MCUxDaredevil/cpp-codes-sem2/discussions
License			MIT

*/

#include<iostream>
using namespace std;

float power(float m, int n){
    float result = 1;
    for(; n > 0; n--){
        result *= m;
    }
    return result;
}

int power(int m, int n){
    int result = 1;
    for(; n > 0; n--){
        result *= m;
    }
    return result;
}

int main(){
    int a,b;
    float x;

    cout<<"\nEnter the integer base: ";
    cin>>a;
    cout<<"Enter the float base: ";
    cin>>x;
    cout<<"Enter the power: ";
    cin>>b;

    cout<<"a raised to b = "<<power(a,b)<<endl;
    cout<<"x raised to b = "<<power(x,b)<<endl;

    return 0;
}