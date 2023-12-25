#include <iostream>
using namespace std;

bool isPresent(int a[], int n, int x){

    ///base case
    if(n==0){
        return false;
    }
    if (a[0]==x){
        return true;
    }
    ///now call recursion on small array
    return isPresent(a+1, n-1, x);
}
///another approach
bool isPresent2(int a[], int n, int x){

    ///base case
    if(n==0){
        return false;
    }

    bool remArray = isPresent2(a+1, n-1, x);
    if(remArray){
        return true;
    }
    if(a[0]==x){
        return true;
    }
    else{
        return false;
    }
}

int main(){

int a[]= {1,2,3,4,5};
if(isPresent(a,5,6)){
    cout<<"found"<<endl;
}
else{
    cout<<"not found"<<endl;
}

if(isPresent2(a,5,6)){
    cout<<"found"<<endl;
}
else{
    cout<<"not found"<<endl;
}

return 0;
}
