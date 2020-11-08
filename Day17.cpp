#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

//!My Code
class Calculator
{
    public:
    Calculator()
    {

    }
    int power(int n, int p)
    {
        if (p < 0 || n < 0)
        {
            throw runtime_error ("n and p should be non-negative");
        }
        int result = pow(n,p);
        return result;
    }
};

//!God level Code
// struct MyException : public exception
// {
//   const char * what () const throw ()
//   {
//     return "n and p should be non-negative";
//   }
// };

// class Calculator{
//     public:
//    int power(int n,int p){
//     if(n<0 || p<0){
//         throw MyException();
//     }
//         return    pow(n,p);
//    }
    
// };

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}