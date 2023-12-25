#include <iostream>
using namespace std;

int length(char input[10]){
    if(input[0]=='\0'){
        return 0;
    }
    return 1 + length(input+1);
}

void removeElement(char input[]){
    if(input[0]=='\0'){
        return ;
    }
    if(input[0] != 'a'){
        removeElement(input+1);
    }
    else{
        for(int i=0; input[i] != '\0'; i++){
            input[i] = input[i+1]; ///shift all character towards left
        }
        removeElement(input);
    }
}

int main(){
        char input[100];
        cin>>input;
        int l = length(input);
        cout<<l<<endl; ///original length
        cout<<input<<endl;

        removeElement(input);

        cout<<length(input)<<endl; ///new length after removing the charactera
        cout<<input<<endl;
return 0;
}
