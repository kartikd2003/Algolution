#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {1,5,8,12,18};
    int b[7] = {3,5,6,11,13,15,30};
    
    int c[12];
    int i=0,j=0,k=0;
    
    while(i<5&&j<7){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        
        else{
            c[k]=b[j];
            j++;
            k++;        
        }
    }
    
    while(i<5){
        c[k]=a[i];
        i++;
        k++;
    }
    
    while(j<7){
        c[k]=b[j];
        j++;
        k++;
    }
    
    for(int k=0; k<12; k++){
        cout<<c[k]<<' ';
    }
}
