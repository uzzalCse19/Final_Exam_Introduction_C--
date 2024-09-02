#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int t;
    cin>>t;
    while(t--)
    {
        string s,x;
        cin>>s>>x;
        int n=x.size();
        int p=s.find(x);
        while(p!=-1){
    
        s.replace(p,n,"#");
        p=s.find(x,p+1);
        }
        cout<<s<<endl;
    }

    return 0;
}
