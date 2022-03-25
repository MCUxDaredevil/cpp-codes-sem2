/*

Name            String Functions
Description     Implementing a class with string methods without using libraries
Author			MCUxDaredevil (https://github.com/mcuxdaredevil)
Github Page		https://github.com/MCUxDaredevil/cpp-codes-sem2
Support URL		https://github.com/MCUxDaredevil/cpp-codes-sem2/issues
Discussions		https://github.com/MCUxDaredevil/cpp-codes-sem2/discussions
License			MIT

*/

#include<iostream>
using namespace std;

class String {
    public:
        char s1[20];
        char s2[20];

        void showData(){
            cout<<"The first string is: "<<s1;
            cout<<"\nThe second string is: "<<s2;
        }

        void length(int x){
            int l1=0,l2=0;
            for(int i=0; i<20; i++){
                if(s1[i] == '\0'){
                    l1 = i;
                    break;
                }
            }
            for(int i=0; i<20; i++){
                if(s2[i] == '\0'){
                    l2 = i;
                    break;
                }
            }
            if(x==1){
                cout<<"\nLength of String1 = "<<l1<<endl;
            }
            else if(x==2){
                cout<<"Length of String2 = "<<l2<<endl;
            }
            else{
                cout<<"Invalid input!\n\nUse 'length(1)' to get the length of String1\nUse 'length(2)' to get the length of String2"<<endl;
            }
        }

        void copy(int a){
            if(a==12){
                for(int i=0; i<20; i++)
                    s2[i] = s1[i];
            }
            else if(a==21){
                for(int i=0; i<20; i++)
                    s1[i] = s2[i];
            }
            else {
                cout<<"Invalid input!\n\nUse 'copy(12)' to copy String1 into String2\nUse 'copy(21)' to copy String2 into String1"<<endl;
            }
        }

        static int compare(){
            return 1;
        }
};

int main(){

    String object;

    cout<<"\nEnter the first string: ";
    cin.getline(object.s1,20);
    cout<<"\nEnter the second string: ";
    cin.getline(object.s2, 20);
    cout<<"\nvalues recorded!\n"<<endl;

    object.showData();

    return 0;
}