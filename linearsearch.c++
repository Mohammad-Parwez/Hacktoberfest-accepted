#include<iostream>
using namespace std;
int main()
{
    int a[8],i,n,index;
    cout<<"enter the element of array\n";
    for(i=0;i<8;i++)
    cin>>a[i];
    cout<<"enter the number the number to be searched \n";
    cin>>n;
    for(i=0;i<8;i++)
    {
        if(a[i]==n)
        {
            index=i;
            break;
        }
    }
    cout<<"element found at position index no :"<<index;
    return 0;
}
