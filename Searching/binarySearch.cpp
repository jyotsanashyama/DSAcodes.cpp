#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int n, int key){

    int s = 0, e = n-1;
    while(s<=e){
        int mid = s + (e-s)/2; ///to avoid overflow and underflow errors

        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

    return -1;
}

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"enter key: "<<endl;
    int key;
    cin>>key;

    int pos=binarySearch(a,n,key);
    if (pos==-1){
        cout<<"key not found"<<endl;
    }
    else{
        cout<<"key found at index "<<pos<<endl;
    }

return 0;
}
