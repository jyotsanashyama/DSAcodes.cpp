#include<iostream>
using namespace std;

///+= nesting is also allowed. so pass by reference

class fraction{
private:
    int numerator;
    int denominator;
public:
    fraction(int numerator,int denominator){
        this->numerator = numerator;
        this->denominator = denominator;

    }

    fraction& operator+=(fraction const &f2){ ///take fraction as input--- pass const because we don't want to call copy constructor
            int lcm = denominator*f2.denominator;
            int x = lcm/denominator;
            int y = lcm/f2.denominator;

            int num = numerator*x + f2.numerator*y;

            numerator=num;
            denominator=lcm;


            simplify(); ///calling the function to simplify after addition
            return *this;
        }

        void answer(){
        cout<<numerator<<"/"<<denominator<<endl;
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
    ///example of += operator
    int i=5;
    int j=3;
    (i+=j)+=j;  ///will first add j to i---value of i is updated now----then again add j to the updated i---again i is updated and value of j remains same(as there is no change done in the value of j)
    cout<<i<<" "<<j<<endl;

    fraction f1(10,3);
    fraction f2(5,2);

    f1+=f2;
    f1.answer();
    f2.answer();
return 0;
}
