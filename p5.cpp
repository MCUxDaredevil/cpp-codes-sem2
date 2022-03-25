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
#include<string>
using namespace std;

class String {
    public:
        void length(){
            int l=0;
            char x[20];
            String y;

            cout<<"Enter a string: ";
            cin.getline(y,20);

            for(int i=0; i<20; i++){
                if(x[i] == '\0'){
                    l = i;
                    break;
                }
            }
            cout<<"Length of String = "<<l<<endl;
        }
        void copy(){
            char s1[20];
            char s2[20];

            cout<<"Enter the source string: "<<endl;
            cin.getline(s1, 20);
            cout<<"\nEnter the destination string: "<<endl;
            cin.getline(s2, 20);

            for(int i=0; i<20; i++){
                s2[i] = s1[i];
            }
        }

        void compare(){}

        void concat(){}

        void search(){}
};

int main(){

    String str;
    int choice=0;

    cout<<"\n\n1. Get Length of string\n2. Copy strings\n3. Compare two strings\n4. Concatenate two strings\n5. Search inside a string\n\nChoose any of the given options: ";
    cin>>choice;
    cout<<"\n"<<endl;

    if(choice == 1){
        str.length();
    }
    else if(choice == 2){
        str.copy();
    }
    else if(choice == 3){
        str.compare();
    }
    else if(choice == 4){
        str.concat();
    }
    else if(choice == 5){
        str.search();
    }
    else{
        cout<<"Invalid choice!"<<endl;
    }

    return 0;
}