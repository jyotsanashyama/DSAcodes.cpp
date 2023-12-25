#include <bits/stdc++.h> ///master header file
///#include <iostream>
///#include  <algorithm> ///the functionality of sort is defined in algorithm file
using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);  ///a=name of array....n=size of array
    ///it is an inbulit function

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

return 0;
}
