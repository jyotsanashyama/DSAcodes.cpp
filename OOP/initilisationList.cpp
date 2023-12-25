#include<iostream>
using namespace std;

class student{
public:
    int age;
    int const roll; ///here roll is a constant variable


    student(int age, int r):age(age),roll(r){ ///initialisation list
    }

    void display(){
        cout << age <<" " << roll;
        }

};
s
int main(){
    student s1(10,100);
    s1.display();

return 0;
}
