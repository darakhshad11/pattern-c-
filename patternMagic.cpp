#include<iostream>
using namespace std;
int main()
{
    int tr, rownum;
    cin>>tr;
    for(int i =1 ; i<=2*tr-1 ; i++)
        {
            cout<<"*";
        }
        cout<<endl;
    for(rownum=1; rownum<tr-1 ;rownum++)
    {
        
        for(int i =1 ; i<=tr-rownum ; i++)
        {
            cout<<"*";
        }
        for(int j=1; j<=2*rownum-1; j++)
        {
            cout<<" ";
        }
        for(int i =1 ; i<=tr-rownum ; i++)
        {
            cout<<"*";
        }
        
        cout<<endl;
        
    }
        

    rownum=tr-1;
    for(rownum; rownum>=1 ;rownum--)
    {
        for(int i =1 ; i<=tr-rownum ; i++)
        {
            cout<<"*";
        }
        for(int j=1; j<=2*rownum-1; j++)
        {
            cout<<" ";
        }
        for(int i =1 ; i<=tr-rownum ; i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i =1 ; i<=2*tr-1 ; i++)
        {
            cout<<"*";
        }
        
    return 0;
    
}