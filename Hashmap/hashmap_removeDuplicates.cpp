#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> removeDuplicate(int *a, int n){
    vector<int> output;
    unordered_map<int, bool> mymap;

    for(int i=0;i<n;i++){
        if(mymap.count(a[i]) == 0){
            output.push_back(a[i]);
            mymap[a[i]] = true;   ///a[i] = key, true = value
        }
    }
    return output;
}

int main(){

int a[]={1,2,5,1,7,2,4,1,6,7,4,2,6,7,5};
vector<int> output = removeDuplicate(a, 15);

for(int i=0;i<output.size(3);i++){
    cout<<output[i]<<" ";
}

return 0;
}
