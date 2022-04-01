/*

Name            String Reversal
Description     Reverse a given string but with controlled amount of characters
Author			MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page		https://github.com/MCUxDaredevil/cpp-codes-sem2
Support URL		https://github.com/MCUxDaredevil/cpp-codes-sem2/issues
Discussions		https://github.com/MCUxDaredevil/cpp-codes-sem2/discussions
License			MIT

*/

#include<iostream>
using namespace std;

string reverse(string str, int count=0){
    string s1,s2;
    int i, len;

    if(count==0) count = str.length();

    s1 = str.substr(0, count);
    s2 = str.substr(count, str.length());
    len = s1.length();

    // Reverse s1
    for(i=0; i<len/2; i++){
        char tmp;
        tmp = s1[i];
        s1[i] = s1[len-i-1];
        s1[len-i-1] = tmp;
    }

    return s1+s2;
}


int main(){

    cout<<reverse("Hello World", 4);

    return 0;
}