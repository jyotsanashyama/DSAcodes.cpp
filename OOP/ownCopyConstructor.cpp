#include<iostream>
#include<cstring>
using namespace std;

class student{
    int age;


public:
    char *name; ///to access it we are making it public

   ///to create our own copy constructor always use deep copy

    ///student(student s){ ///copy constructor
        student(student const &s){ ///this s is reference vaiable to student ...this step is done to avoid copy constructor
        this -> age = s.age; ///age is getting copied

        ///deep copy
        this -> name = new char[strlen(s.name)+1];
        strcpy(this->name, s.name);
    }

    student(int age, char name){
    this-> age=age;


    }
};



int main(){

return 0;
}
