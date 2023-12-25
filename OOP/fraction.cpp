#include <iostream>
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
    ///here we are adding two fractions

    void add(fraction f2){///copy constructor is called...fraction f2 = main.f2...copy the value of fraction present in main

            int lcm = denominator*f2.denominator;
            int x = lcm/denominator;
            int y = lcm/f2.denominator;
            int num = numerator*x + f2.numerator*y;

            numerator=num;
            denominator=lcm;


          simplify(); ///calling the function to simplify after addition
        }

          ///from here we are simplifying the value of fraction

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
///calling the function
    fraction f1(10,2);
    fraction f2(15,4);

    f1.add(f2);
    f1.answer();
    f2.answer();


return 0;
}

///inbilt function for gcd => int c=__gcd(a,b)
