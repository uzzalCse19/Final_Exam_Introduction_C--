#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   string temp= "Jessica";
   getline(cin,s);
   stringstream ss(s);
   string word;
   int test =0;
   while(ss>>word)
   {

    if(temp==word)
    {
        cout<<"YES"<<endl;
        test=1;
        break;
    }
   }
   if(test==0) cout<<"NO"<<endl;
   return 0;
}