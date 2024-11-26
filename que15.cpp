#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"Enter a no. : ";
    cin>>n;

    for(int i=0; i<n; i++){
        if(i==0||i==n-1){
            cout<<"11111"<<"\n";
        }
        
        else{
            cout<<"10001"<<"\n";
        }
    }


}	
