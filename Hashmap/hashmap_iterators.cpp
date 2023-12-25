#include<bits/stdc++.h>   ///this will include every header file used here
using namespace std;

int main(){

unordered_map<string, int> mymap;   ///there is no ordering of elements
mymap["abc1"] = 1;
mymap["abc2"] = 2;
mymap["abc3"] = 3;
mymap["abc4"] = 4;
mymap["abc5"] = 5;
mymap["abc6"] = 6;
cout<<"Unordered manner: "<<endl;
for(unordered_map<string, int>::iterator it=mymap.begin();it!=mymap.end();it++){  ///here 'it' is a variable used for iterating...it is pointing to the pair for iteration
    ///it->first=key
    ///it->second=value
    cout<<"Key: "<<it->first<<" Value: "<<it->second<<endl;
}


map<string, int> mymap2;   ///there is ordering of elements ONLY ACCORDING TO KEY AND NOT ON THE BASIS OF VALUES
mymap2["abc1"] = 1;
mymap2["abc2"] = 2;
mymap2["abc3"] = 3;
mymap2["abc4"] = 4;
mymap2["abc5"] = 5;
mymap2["abc6"] = 6;
cout<<"Ordered manner: "<<endl;
for(map<string, int>::iterator it=mymap2.begin();it!=mymap2.end();it++){  ///here 'it' is a variable used for iterating...it is pointing to the pair for iteration
    ///it->first=key
    ///it->second=value
    cout<<"Key: "<<it->first<<" Value: "<<it->second<<endl;
}

vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);

for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){   ///in vectors, it is pointing towards the elements
    ///to access, write *it
    cout<<*it<<endl;
}
for(auto it = v.begin(); it!=v.end(); it++){
    cout<<*it<<endl;
}
auto a=5;
cout<<a<<endl;

///finding elements using iterator
if(mymap.find("abc")==mymap.end()){
    cout<<"Not present"<<endl;
}else{
    cout<<"Present"<<endl;
 }

return 0;
}
