
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int *arr;
    arr=new int [a];
    for(int i=0;i<a;i++)
        cin>>arr[i];
    for(int i=0;i<b;i++)
    {
        int temp=arr[0];
        for(int j=0;j<a;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[a-1]=temp;
    }

    for(int i=0;i<a;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;

}
