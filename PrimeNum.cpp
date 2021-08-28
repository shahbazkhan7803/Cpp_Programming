#include<iostream>
 using namespace std;

 int main()
 {
    int n1, n2;
    cout << "Enter the two numbers to get all the prime numbers between them : ";
    cin>>n1>>n2;

    for (int num = n1 ; num <=n2; num++)
    {     int j;

         for ( j=2; j<num ; j++)
         {

              if(num%j==0)
                {
                    break;
                }
         }

         if(j==num)
         {
              cout<< num << endl;
          }
    }


return 0;
 }
