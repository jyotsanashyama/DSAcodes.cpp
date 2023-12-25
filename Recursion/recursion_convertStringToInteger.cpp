#include <iostream>
using namespace std;

int length(char input[]){
    if(input[0]=='\0'){
        return 0;
    }
    return 1+length(input+1);

}

int convertStrToInt(char str[], int n){
    if(n==0){
        return 0;
    }
    int smallAns = convertStrToInt(str, n-1);
    ///to find the last digit: subtract it from '0'...because str-str=int
    ///this step will convert the last str in int
    int lastDigit = str[n-1] - '0';
    int ans = smallAns*10 + lastDigit;
}

int main(){

char str[]="12345";
int n=length(str);

int a = convertStrToInt(str, n);
cout<<a<<endl;
return 0;
}
