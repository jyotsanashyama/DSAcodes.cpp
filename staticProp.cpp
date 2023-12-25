#include<iostream>
using namespace std;

class student{  ///creating class

public:
    int Roll;
    int Name;
    static int TotalStudent; ///making it static

    ///to update the static property: we can call a constructor

    student(){
    TotalStudent++; ///incrementing the static value in class

    }

};

int student::TotalStudent=10; ///initialising static data member....we can only initialise static members outside the class

int main(){

student S1;  ///default constructor called


student s2,s3,s4,s5;
cout << S1.Roll <<" "<<S1.Name <<endl;

cout << student::TotalStudent <<endl;

return 0;
}
