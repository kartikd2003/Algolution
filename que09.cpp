#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10] = {10,1,25,3,4,6,3,5,2,41};
    
    int len = sizeof(a)/sizeof(a[0]);
    int duplicate = 0;
    for(int i = 0 ; i < len ; i++)
    {
        int flag = 1;
        for(int j = 0; j < len; j++)
        {
            if(i != j && a[i]==a[j]) 
            {
                flag = 0;
                break;
            }
            
        }
        if(flag==0){
            duplicate++;
        }
    }
    cout<<duplicate/2;
}
