#include<iostream>
using namespace std;

int length(char input[]){
 int count = 0;
 for(int i = 0; input[i] != '\0'; i++){
    count++;
 }
 return count;
}
void reverse(char input[]){
  int start = 0;
  int end = length(input) - 1;

while (start < end){
    swap( input[start], input[end]);
    start++;
    end--;
  }
}

/*int length(char input[]){
 int count = 0;
 for(int i = 0; input[i] != '\0'; i++){
    count++;
 }
 return count;
}*/
int main(){

char str[100];
cout << "Enter your string here: " << endl;
cin >> str;
//cout << "length: "<< length(str) <<endl;

cout << "The input string is: " << str <<endl;
reverse (input);
cout << "The reverse string is: "<< str<<endl;










return 0;
}
