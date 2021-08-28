#include<iostream>

using namespace std;

  void fact(int n)
  {
    int ans = 1;
    for(int i=2;i<=n;i++)
    {
        ans *= i;

    }
    cout<<" Factorial is : "<<ans;
    return ;
  }

int main()
{
    int n;
    cout<<"Enther the number to get its factorial value : ";
    cin>>n;

    fact(n);

    return 0;

}
