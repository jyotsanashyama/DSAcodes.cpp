#include<iostream>
using namespace std;

int main(){
cout << "Enter the number of elements and the elements: "<<endl;
int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++){
    cin>>a[i];

}
//before swapping
cout <<" Normal order: "<< endl;
for(int i=0; i<n; i++){
    cout << a[i]<<" ";

}
cout << endl;

//after swapping

cout << "Reverse order: "<< endl;
for(int i=n-1; i>=0; i--){
    cout << a[i]<<" "<< endl;
}






return 0;
}
