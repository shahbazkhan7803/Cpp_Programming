#include<iostream>
#include<cmath>

using namespace std;

int main()
{
      int n = 0;
      bool flag =0;

      cout<<"Enter the number to check if it is prime or not : "<<endl;
      cin>>n;

    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<"Not a prime number"<<endl;
                  flag = 1;
                  break;
        }

    }

    if(flag==0)
    {
      cout<<"Prime Number "<<endl;
    }

  return 0;
}
