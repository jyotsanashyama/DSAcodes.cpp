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

    fraction add(fraction const &f2){

            int lcm = denominator*f2.denominator;
            int x = lcm/denominator;
            int y = lcm/f2.denominator;
            int num = numerator*x + f2.numerator*y;

            fraction fnew(num,lcm);
            ///parameterised constructor called

            fnew.simplify(); ///calling the function to simplify after addition
            return fnew;
        }

        ///operator overloading: Extend the functionality of the function or any operator
        ///here we are extending the functionality of add operator

        fraction operator+ (fraction const &f2){

            int lcm = denominator*f2.denominator;
            int x = lcm/denominator;
            int y = lcm/f2.denominator;
            int num = numerator*x + f2.numerator*y;

            fraction fnew(num,lcm);
            ///parameterised constructor called

            fnew.simplify(); ///calling the function to simplify after addition
            return fnew;
        }

        fraction multiply(fraction const &f2){
            numerator = numerator * f2.numerator;
            denominator = denominator * f2.denominator;

            simplify();

        }

        fraction operator*(fraction const &f2){
            int n = numerator * f2.numerator;
            int d = denominator * f2.denominator;

            fraction fnew(n,d);
            fnew.simplify();
            return fnew;
        }

        bool operator==(fraction f2){
            return (numerator == f2.numerator && denominator == f2.denominator);
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
    fraction f3 = f1.add(f2);
    fraction f4 = f1+f2;

    f1.answer();
    f2.answer();
    f3.answer();
    f4.answer();

    fraction f5 = f1.multiply(f2);
    fraction f6 = f1*f2;

    f5.answer();
    f6.answer();

    if (f1==f2){
        cout<<"Equal"<<endl;
    }
    else{
        cout<<"Not Equal"<<endl;
    }



return 0;
}
