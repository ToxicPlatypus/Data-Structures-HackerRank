#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *arr,siz;
    cin>>siz;
    arr=new int [siz];
    for(int i=0;i<siz;i++)
        cin>>arr[i];
    for(int i=siz-1;i>=0;i--)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}

