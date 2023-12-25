#include<iostream>
using namespace std;

class fraction{
private:
    int numerator;
    int denominator;
public:
    fraction(int numerator,int denominator){
        this->numerator = numerator;
        this->denominator = denominator;

    }

    void answer(){
        cout<<numerator<<"/"<<denominator<<endl;
    }

     ///pre increment operator--- nesting is allowed
        fraction& operator++(){ ///return type can't be void because we can also assign value
            numerator=numerator+denominator; ///1/2+1 = (1+2)/2 = (num+den)/den

            simplify();

            return *this;  //using reference to avoid copying
        }

       ///post operator: urinary operator----nesting is not allowed
       fraction operator++(int){ ///pass integer as argument to differentiate post inc and pre inc.
        fraction fnew(numerator,denominator);  ///creating a new function fnew with some different address
        numerator = numerator+denominator;
        simplify();
        fnew.simplify(); ///to simplify the new function as well
        return fnew;


       }

         void simplify(){
              int gcd = 1;
              int j =  min(numerator,denominator);
              for(int i=1; i<=j; i++){
                if (numerator%i==0 && denominator%i==0){
                    gcd=i;
                }
              }
             numerator = numerator/gcd;
             denominator = denominator/gcd;
          }



};

int main(){

fraction f1(10,2);
fraction f2(15,4);
/*
f1.answer();
++f1;
f1.answer();*/

fraction f3 = ++(++f1);
f1.answer();
f3.answer();


fraction f4 = f1++;
f1.answer();
f4.answer();
return 0;
}
