#include<iostream> 
using namespace std; 
int fact(int n) 
{ 
 if(n==0) 
  return 1; 
 else 
  return n*fact(n-1); 
} 
int main() 
 
{ 
 int n; 
 cout<<"Enter an number: "; 
 cin>>n; 
 cout<<"Factorial of "<<n<<" : "<<fact(n); 
 return 0; 
} 
