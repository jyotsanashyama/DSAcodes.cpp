#include<iostream>
using namespace std;

///time complexity = O(n)

int linearSearch(int a[], int n,int key){

    for(int i=0;i<n;i++){ /// doing a linear search
        if (a[i]==key){  /// comparing the present element with key
            return i;  /// if value is same, return the index
        }
    }
    return -1; /// if key is not present in array, return -1 or any invalid index
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

    int pos = linearSearch(a,n,key);
    if(pos == -1){
        cout<<"key not found"<<endl;
    }
    else{
        cout<<"key found at index"<<pos<<endl;
    }


return 0;
 }
        }

}
