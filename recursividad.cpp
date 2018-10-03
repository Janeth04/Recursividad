#include <iostream>
using namespace std;
int nFibonacci(int n);
int main()
{
int x;
cout<<"Escribe un numero pra generar la serie de Fibonacci";
cin>>x;
 for(int t=1;t<=x;t++)
  {
   cout<<nFibonacci(t)<<endl;
  }
 system("pause");
 return 0; 
}

int nFibonacci(int n)
{
 if(n==0) return 0;
 else
  if(n==1) return 1;
   else return (nFibonacci(n-2)+nFibonacci(n-1));
}
