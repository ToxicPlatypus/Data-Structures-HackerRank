
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i;
    cin>>a;
    string s[a];

    for(i=0;i<a;i++)
        cin>>s[i];

    cin>>b;
    string ss[b];

    for(i=0;i<b;i++)
        cin>>ss[i];

    for(i=0;i<b;i++)
    {
        int co=0;
        for(int j=0;j<a;j++)
        {
            if(ss[i].compare(s[j])==0)
                co++;
        }
        cout<<co<<endl;
    }


    return 0;
}
