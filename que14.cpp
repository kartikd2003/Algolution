#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"Enter a no. : ";
    cin>>n;

    for(int i=0; i<n; i++){
        if(i%2==0){
            cout<<"12345"<<"\n";
        }
        
        else{
            cout<<"54321"<<"\n";
        }
    }


}
