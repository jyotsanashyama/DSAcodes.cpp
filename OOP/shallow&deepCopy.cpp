#include <iostream>
#include <cstring>
using namespace std;

class content{ ///here, we are creating a class
    int age;
    char *name;

public:
    content(int age, char *name){
        this-> age = age;  ///creating a shallow copy: it copy only address of 0 index
        this-> name = name;
    }

    void display(){
        cout<< age<<" "<<name;
        }
};
class student{
    int a;
    char *n;

///Deep copy: create a new array and then copy the whole content in the new array
public:
    student(int a, char * n){
        this -> a = a;
        this -> n = new char(strlen(n)+1); /// create new array and to get the string length along with 0 index, we add 1
        strcpy(this -> n, n);  ///everything will get copy from n to n
    }

    void display1(){
    cout << n <<" "<< a<<endl;
    }
};

int main(){
    char name[]="abcd";
    content c1(20,name);
    c1.display();

    char n[]="efgh";
    student s1(10,n);
    s1.display1();
return 0;
}
