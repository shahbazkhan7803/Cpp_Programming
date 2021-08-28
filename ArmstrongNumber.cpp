#include<iostream>
#include<math.h>

using namespace std;

int main()
{
      int n,num, lastdigit, sum =0;
      cout<<"Enter a number to check if it is a armstrong number or not : "<<endl;
      cin>>n;
      num = n;

      while(n>0)
      {
          lastdigit = n%10;
          sum += pow(lastdigit, 3);
          n=n/10;
      }

      if(num==sum)
      {
        cout<<"It is an ARMSTRONG number!"<<endl;
      }
      else{
        cout<<"It is NOT an Armstrong number!"<<endl;
      }

      return 0;
}
