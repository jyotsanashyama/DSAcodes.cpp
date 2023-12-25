#include<iostream>
using namespace std;

int main(){

 cout <<"Enter the number of elements of array:"<<endl;
 int n;
 cin >> n;

 int a[n];
 //input of n values
 for (int i=0; i<n; i++ ){
    cin >> a[i];
 }
  for(int i=0; i<n; i++){
    cout << a[i] <<" ";
 }
  cout << endl;


 int sum = 0;
 for(int i = 0; i<n; i++){
 sum += a[i];
  }

cout << "The required sum of the array is:"<< sum <<endl;


return 0;
}
