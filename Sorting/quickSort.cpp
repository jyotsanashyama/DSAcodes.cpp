#include <iostream>
using namespace std;

int partition(int a[], int s, int e){
    int i=s-1;
    int pivot=a[e]; ///the last index
    for(int j=s;j<=e-1;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[e]);
    return i+1;
}

void quickSort(int a[], int s, int e){
    ///base case
    if(s>=e){
        return;
    }
    int p=partition(a,s,e);
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);

}

int main(){
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)  {
        cin >> a[i];
    }
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
return 0;
}
