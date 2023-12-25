#include <iostream>
using namespace std;

void printPermu(char str[], int i){
    if(str[i]=='\0'){
        cout<<str<<endl; ///if the string is null return the original string
        return;
    }
    for(int j=i; str[j]!='\0';j++){
        swap(str[i], str[j]); ///swaping to  fix the position of 1st element then perform permutation to rest of the elments
        printPermu(str, i+1); ///performing permutation to rest of the element except the fixed one
        swap(str[i], str[j]); ///swaping again to get back to the original string
    }
}

int main(){

char str[]="abcd";
printPermu(str, 0);

return 0;
}
