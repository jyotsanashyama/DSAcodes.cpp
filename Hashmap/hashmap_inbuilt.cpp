#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){

unordered_map<string, int> mymap;  ///<key, value>

///1st method: INSERT: create pair of it, and put in map
pair<string, int> p("abc", 1);
mymap.insert(p);

///2nd method: INSERT: like array
mymap["def"] = 2; /// mymap["key"] = value

///FIND or ACCESS elements using [] brackets
cout<<mymap["abc"]<<endl;  ///give the value corresponding to the key
cout<<mymap.at("abc")<<endl;  ///give the value present at the key

///SIZE
cout<<"size: "<<mymap.size()<<endl;

///if key is not present inside the map, 'at' will throw an error
///cout<<mymap.at("ghi")<<endl;

///if key is not present inside the map, [] will push the key inside map and will put the value as 0 by default
cout<<mymap["ghi"]<<endl;

///SIZE
cout<<"size: "<<mymap.size()<<endl;

///if key is PRESENT or not
if(mymap.count("ghi")>0){  ///1: key is present, 0: not present
    cout<<"ghi is present"<<endl;
}else{
    cout<<"not present"<<endl;
}

///UPDATE key
mymap["abc"] = 20;

///DELETE or ERASE
cout<<mymap.erase("ghi")<<endl;

if(mymap.count("ghi")>0){  ///1: key is present, 0: not present
    cout<<"ghi is present"<<endl;
}else{
    cout<<"not present"<<endl;
}
cout<<"size: "<<mymap.size()<<endl;

return 0;
}
