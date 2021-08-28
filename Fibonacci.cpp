#include<iostream>
using namespace std;

void fib(int n)
{
    int t1 = 0 ;
    int t2 = 1;
    int nextdigit;

    for(int i=0;i<n;i++)
    {
      cout<<t1<<" ";
      nextdigit = t1 + t2;
      t1= t2;
      t2= nextdigit;
    }

  return ;

}

int main()
{
      int n;
      cout<<"Enter the value to get n fibonacci numbers : ";
      cin>>n;

      fib(n);

      return 0;


}
