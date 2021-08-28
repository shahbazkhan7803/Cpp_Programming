#include<iostream>

using namespace std;

int main()
{
    int row, col;

    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>row>>col;

      for(int i=1;i<=col;i++)
          cout<<"$";

        cout<<endl;
    for (int p = 1; p < row; p++)
    {
            cout<<"$";
      /* code */
        for(int j =2; j<col;j++)
        {
          cout<<" ";
        }
          cout<<"$"<<endl;
    }

    for(int k=1;k<=col;k++)
        cout<<"$";

        return 0;

}
