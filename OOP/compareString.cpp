#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char str1[100];
    char str2[100];

    cout << "Enter 1st string: " << endl;
    cin >> str1;
    cout << "Enter 2nd string: " << endl;
    cin >> str2;
    strcmp(str1,str2);

    if( strcmp(str1,str2) == 0){
        cout << "Both strings are equal." << endl;
    }

    else{
        cout << "Both strings are unequal." << endl;
    }





return 0;
}
