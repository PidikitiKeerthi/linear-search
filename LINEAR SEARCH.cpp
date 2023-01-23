#include<iostream>
using namespace std;
int main()
{
    int n,k,i;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements in array "<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter number to be searched "<<endl;
    cin>>k;
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            cout<<"Number found at postion "<<endl;
            break;
        }
        else
        {
            cout<<"Number not found "<<endl;
        }
    }
    
    return 0;
}