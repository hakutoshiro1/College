#include <bits/stdc++.h>
using namespace std;

class MAT
{
  int a[2][2];

  public:
      void accept()
       {
          cout << "Enter the 4 elements" ;
          for (int i = 0; i < 2; i++) {
              for (int j = 0; j < 2; j++) {
                cin>>a[i][j];
              }
          }
       }

       void display()
       {
         for (int i = 0; i < 2; i++)
           {  cout<<endl;
             for (int j = 0; j < 2; j++)
              {
               cout<<" "<<a[i][j];
              }
           }
       }

       MAT operator+(MAT M2)
       {
         MAT M3;
         for (int i = 0; i < 2; i++)
           {  cout<<endl;
             for (int j = 0; j < 2; j++)
              {
               M3.a[i][j]=a[i][j]+M2.a[i][j];
              }
       }
       return M3;
}
       MAT operator*(MAT M2)
       {
          MAT M3;
          for (int i = 0; i < 2; i++)
            {
               for (int j = 0; j < 2; j++)
               {
                 M3.a[i][j]=0;
                for (int k = 0; k <2; k++)
                {
                  M3.a[i][j]=(a[i][k]*M2.a[k][j]+M3.a[i][j]);
                }
               }
        }
        return M3;
       }

};
int main()
{
  MAT M1,M2,M3;
  cout<<"\n\n enter the first matrix";
  M1.accept();
  cout<<"\n\n enter the second matrix";
  M2.accept();



  M3=M2+M1;
  cout<<"\n\n addition is :";
  M3.display();
  M3=M2*M1;
  cout<<"\n\n multiplication is :";
  M3.display();
  return 0;
}
