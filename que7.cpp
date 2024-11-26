#include<iostream>
using namespace std;
int main()
{
    int isunique = -1;
    int a[10] = {10,10,25,3,4,6,8,5,2,4};
    int len = sizeof(a)/sizeof(a[0]);
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
        if(flag == 1) 
        {
            cout<<a[i]<<" ";
        }
    }
}
