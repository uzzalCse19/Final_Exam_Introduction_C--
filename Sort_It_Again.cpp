#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int cls, roll,m_marks,e_marks;
    char ch;
};
int main()
{
    int n;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++) 
    {
        cin>>a[i].name>>a[i].cls>>a[i].ch>>a[i].roll>>a[i].m_marks>>a[i].e_marks;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i].e_marks<a[j].e_marks)
            {
                swap(a[i],a[j]);
            }
            else if(a[i].e_marks==a[j].e_marks)
            {
                if(a[i].m_marks<a[j].m_marks)
               {
                swap(a[i],a[j]);
                }
                else if(a[i].m_marks==a[j].m_marks)
                {
                  if(a[i].roll>a[j].roll) swap(a[i],a[j]);
                }
               
            }
        }
    }
    for(int i=0;i<n;i++)
    {
         cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].ch<<" "<<a[i].roll<<" "<<a[i].m_marks<<" "<<a[i].e_marks;
        cout<<endl;
    }
    return 0;
}