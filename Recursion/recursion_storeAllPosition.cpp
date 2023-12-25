#include <iostream>
#include <vector>
using namespace std;
///using vector to store the data ...vector by reference
void storeAllPos(int a[], int n,int x, int i, vector<int> &ans){
    if (i==n){
        return ;
    }
    if (a[i]==x){
        ans.push_back(i);
    }
    storeAllPos(a,n,x,i+1,ans);

}

///using array to store the data

void storeAllPosArray(int a[], int n,int x, int i, int out[], int j){
    if (i==n){
        return ;
    }
    if (a[i]==x){
        out[j]=i;
        storeAllPosArray(a,n,x,i+1,j+1);
    }
    storeAllPosArray(a,n,x,i+1,out,j);

}

int main(){
int a[]= {5,5,6,5,6,7};
vector<int> v;
storeAllPos(a,6,5,0,v);

for(int i=0; i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;

int output[10];
storeAllPosArray(a,6,5,0,output,0);

return 0;
}
