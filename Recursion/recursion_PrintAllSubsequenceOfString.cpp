///formula: 2^n here, n is the number of elements

#include <iostream>
using namespace std;

void print_subs(string input, string output){
    if(input.length()==0){
        cout<<output<<endl;
        return;
    }
    print_subs(input.substr(1), output);///exclude a particular element
    print_subs(input.substr(1), output + input[0]); ///include a particular element

}

///using array method

void print_subs2(char input[], char output[], int i){
    if(input[0]=='\0'){
            output[i]='\0';
            cout<<output<<endl;
            return;
    }
    output[i]=input[0];
    print_subs2(input +1, output, i);
    print_subs2(input +1, output, i+1);

}

int main(){

   char input[100];
   cin>>input;
   char output[10];
   print_subs2(input, output, 0);
return 0;
}
