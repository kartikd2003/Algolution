#include <iostream>
using namespace std;

int main()
{
    int a[10] = {10,10,25,3,4,6,8,5,2,4};
    int len = sizeof(a)/sizeof(a[0]);
    
    for(int i = 0 ; i < len ; i++)
    {
        int count=1;
        int flag=0;
        for(int j = 0; j < len; j++)
        {
            if(i > j && a[i]==a[j]) 
            {   
                flag=1;
                break;
            }
            if(i < j && a[i]==a[j]) 
            {
                count++;
            }
            
        }
        
        if(flag==0){
            cout<<a[i]<<" present "<<count<<" time."<<endl;
        }
    }
}
