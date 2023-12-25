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

strcpy(str1,str2);

cout << "1st string is: " << str1 << endl;
cout << "2nd string is: " << str2 << endl;


return 0;
}
