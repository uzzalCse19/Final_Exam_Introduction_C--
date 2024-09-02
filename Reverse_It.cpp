#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int cls, roll;
    char ch;
};
int main()
{
    int n;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++) 
    {
        cin>>a[i].name>>a[i].cls>>a[i].ch>>a[i].roll;
    }
    
   int i=0,j=n-1;
   while(i<j)
   {
    swap(a[i].ch,a[j].ch);
    i++,j--;
   }
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].ch<<" "<<a[i].roll;
        cout<<endl;
    }
    return 0;
}