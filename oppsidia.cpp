#include<iostream>
using namespace std;
int main()
{
    int rownum=1 , tr;
    cin>>tr;
    while(rownum<=tr)
    {
        int i =1;
        while(i<=(tr-rownum)+1)
        {
           cout<<"*";
           i++;
        }
        int j=1;
        while(j<=tr-rownum+1)
        {
            cout<<" ";
            j++;
        }
        int k=1;
        while(k<(tr-rownum)-1)
        {
            cout<<"*";
            k++;
        }
        int l=1;
        while(l<rownum-1)
        {
            cout<<" ";
            l++;
        }
        /*
        int m=1;
       while(m<=tr)
       {
        cout<<"*";
        m++;
       }
       int n=1;
       while(n<=rownum)
       {
        cout<<" ";
        n++;
        
       }
       int p=1;
        while(p<=tr-rownum)
        {
            cout<<" ";
            p++;
        }
        int q=1;
        while(q<=rownum)
        {
            cout<<"*";
            q++;
        }
        cout<<endl;
        */
        rownum++;
    }
}