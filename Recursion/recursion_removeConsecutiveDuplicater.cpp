#include <iostream>
using namespace std;

int length(char input[10]){
    if(input[0]=='\0'){
        return 0;
    }
    return 1 + length(input+1);
}

void removeConsDup(char input[]){
    if(input[0]=='\0'){
        return;
    }
    if (input[0] != input[1]){
        removeConsDup(input + 1);
    }
    else{
        for(int i=0; input[i] != '0'; i++){
            input[i]=input[i+1];  ///shift the character by 1 towards left
        }
        removeConsDup(input);
    }
}

int main(){
        char input[100];
        cin>>input;
        int l = length(input);
        cout<<l<<endl;
        cout<<input<<endl;

        removeConsDup(input);

        cout<<length(input)<<endl;
        cout<<input<<endl;
return 0;
}
