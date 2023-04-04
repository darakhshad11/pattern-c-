#include<iostream>
using namespace std;
int main()
{
    int tr, rownum=5; // start rownum from 5 instead of 1
    cin>>tr;
    int Tr=tr;
   
    for( tr ; tr>=1 ; tr--)
    {  
       
       for(int j=1; j<=rownum-1; j++)
       {
        
        cout<<j;
        
       }
        
       
       for(int i=1 ; i<=2*tr-1; i++)
       {
        cout<<" ";
       }

       for(int j=1; j<=rownum-1; j++)
       {
        
        cout<<j;
       
       
       }
       
       
       cout<<endl;
        rownum++;
    }
     rownum=2;

    for( rownum ; rownum<=Tr ; rownum++)
    {  
       for(int j=1; j<=Tr-rownum; j++)
       {
        cout<<j;
       }
       
       for(int i=1 ; i<=2*rownum-1; i++)
       {
        cout<<" ";
       }

       for(int j=1; j<=Tr-rownum; j++)
       {
        cout<<j;
       }
      
       cout<<endl;
       
    }
   return 0;
}
