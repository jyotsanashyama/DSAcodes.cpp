#include<iostream>
using namespace std;
int main(){

int real1, img1, real2, img2;
cin>>real1>>img1;
cin>>real2>>img2;

///creating parameterised constructor:---to avoid garbage values
Comp c1(real1, img1);

Comp c2(real2, img2);

int choice;
cin>>choice;

if (choice==1):
        c1.plus(c2); ///plus is a function here, will add both complex numbers and will store it in c1, and c2 is unchanged here
        c1.print()  ///print is a function here which will not take any argument, return type is void

if (choice==2):
        c1.multiply(c2);
        c1.print();


return 0;
}
