#include"iostream"

using namespace std;

  int fact(int n)
  {
      int ans =1;
      for(int i=2;i<=n;i++)
      {
          ans*=i;

      }

      return ans;

  }

int main()
{
   int n, r, ans;
   cout<<"Enter the value of n & r to get nCr value : ";
   cin>>n>>r;

   ans= fact(n)/ (fact(n-r)*fact(r));

   cout<<"nCr value is : "<<ans;

   return 0;

}
