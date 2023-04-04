#include <iostream>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int num = (n*2);
   for(int i = 0;i<=num;i++){
        int a = n;
        for(int j = 0;j<=num;j++)
        {
            if(i==n && j==n+1) 
            { 
               ++a;
            }
            if(i+j<=num && i>=j ) 
            {
               cout << a--<<" ";
            }
            else if(i+j>=num && i<=j) 
            {
               cout <<++a<<" ";
            }
            else
            {
               cout<<" ";
            }
        }
        cout <<endl;
    }
}
