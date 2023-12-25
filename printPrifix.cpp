#include<iostream>
using namespace std;

void printPrefix(char word[]){
       for(int e = 0; word[e] !=0; e++){
       for(int s = 0; s <= e; s++){
        cout << word[s];
       }
       cout << endl;
       }
}

int main(){

char word[100];
cout << "Enter any word: " << endl;
cin >> word;
printPrefix(word);


return 0;
}
