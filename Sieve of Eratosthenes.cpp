#include<iostream>
#include<cmath>
using namespace std;
///Sieve of Eratosthenes: finding prime up-to a limit
bool isprime(int x){
    int count=0;
   for(int i=1;i<sqrt(x);i++){  ///counting factors
       if(x%i==0){
           if(i!=x/i){
               count+=2;
           }else{
               count++;
           }
       }
   }
   if(count>2) return false;  ///if there are more than 2 factors(1 and itself) then prime
   return true; ///else it is non-prime
}
int main() {
    int n;
    cout<<"Enter the limit: "<<endl;
    cin>>n;
    string arrp[n+1];
    for(int i=1;i<=n;i++){
        arrp[i]="prime";
    }
    for(int i=2;i<=sqrt(n);i++){
      if(isprime(i)){
          for(int j=i*i;j<=n;j=j+i){  ///j starting from its sqrt-> going to its multiple
              arrp[j]="nonprime";
          }
      }
    }
    for(int i=2;i<=n;i++){
      cout<<i<<"="<<arrp[i]<<endl;
    }
    return 0;
}
