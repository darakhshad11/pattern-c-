#include<iostream>
using namespace std;
int main()
{
   int  tr , rownum=0, num1 = 0, num2=1,  sum=0;
   cin>>tr;
   while(rownum<=tr)
   {
    int i=1;
    while(i<=rownum) 
    {   
        sum = num1+num2;
        cout<<num1;
        num1=num2;
        num2=sum;
        i++;
    }
    int j=1;
    while(j<=tr-rownum)
    {
        cout<<" ";
        j++;
    } cout<<endl;
    rownum++;
   }
}