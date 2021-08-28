#include<iostream>
#include<math.h>

using namespace std;
int main()
{
      int n, lastdigit, reverse =0;
      cout<<"Enter a number to reverse it : "<<endl;
      cin>>n;

      while(n>0)
      {
          lastdigit= n%10;
          reverse = reverse*10 + lastdigit;
          n=n/10;
      }

      cout<<"Reverse is :"<<reverse <<endl;

  return 0;
}
