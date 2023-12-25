#include <iostream>
using namespace std;

void countOccurence(int a[], int n,int x, int i, int &ans){
    if (i==n){
        return ;
    }
    if (a[i]==x){
        ans++;
    }
    countOccurence(a,n,x,i+1,ans);

}

int main(){
int a[] = {5,5,6,5,6,7};

int ans = 0;
countOccurence(a,6,5,0,ans);
cout<<ans<<endl;
return 0;
}
