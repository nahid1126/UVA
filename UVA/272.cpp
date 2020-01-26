#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[10000];
    int count=0;
    while(gets(c))
    {
        int l=strlen(c);
        for(int i=0;i<l;i++)
        {
            if(c[i]=='"')
            {
                count++;
                if(count%2==0)
                    cout<<"\'"<<"\'";
                else
                    cout<<"\`"<<"\`";
            }else
            cout<<c[i];
        }
        cout<<"\n";

    }
    return 0;
}
