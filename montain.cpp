#include<iostream>
using namespace std;
int main()
{
    int tr, rownum =1;
    cin>>tr;
    
    for( tr ; tr>=0; tr--)
    {  
       for(int j=1; j<=rownum-1; j++)
       {
        cout<<j;
       }
       for(int i=1 ; i<=2*tr-1; i++)
       {
        cout<<" ";
       }
       for(int j=3; j<=rownum-1; j++)
       {
        cout<<j;
       }
       cout<<endl;
        rownum++;
    }
}