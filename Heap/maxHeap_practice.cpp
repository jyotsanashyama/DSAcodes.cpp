#include<iostream>
using namespace std;

void heapify(int a[], int n, int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<n && a[left]>a[largest]){
        largest=left;
    }
    if(right<n && a[right]>a[largest]){
        largest=right;
    }

    if(largest!=i){
        swap(a[i],a[largest]);
        heapify(a,n,largest);
    }
}

void maxHeap(int a[], int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(a,n,i);
    }
}

void deleteNode(int a[], int n, int ele){
    if(n==0){
        cout<<"Heap is empty! Can't delete."<<endl;
        return;
    }
    ///finding index of the targeted element
    int index=-1;
    for(int i=0;i<n;i++){
        if(a[i]==ele){
            index=i;
            break;
        }
    }
    if(index==-1){
        cout<<"Element not present in heap!"<<endl;
        return;
    }

    ///replacing the element to be deleted with the last node===don't know why
    a[index]=a[n-1];
    n--;

    heapify(a,n,0);

}

int main(){

int n;
cout<<"Enter range: ";
cin>>n;
int a[n];
cout<<"Enter elements: "<<endl;
for(int i=0;i<n;i++){
    cin>>a[i];
}

maxHeap(a,n);

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;

int ele;
cout<<"Enter element to be deleted: ";
cin>>ele;
deleteNode(a,n,ele);

for(int i=0;i<n-1;i++){
    cout<<a[i]<<" ";
}

return 0;
}
