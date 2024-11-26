#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"Enter a no. : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int k=i; k<n; k++){
            cout<<k;
        }
        for(int j=0; j<i; j++){
            cout<<"5";
        }
        cout<<"\n";
    }


}
