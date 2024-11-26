#include <iostream>
using namespace std;
int main() {
    int arr[5]={44,45,4,45,44};
    int search;
    cout<<"Enter a no. you want to search : ";
    cin>>search;
    
    int flag=0;
    for (int i=0; i<5; i++){
        if(search==arr[i]){
            cout<<"No. found at index = "<<i;
            flag=1;
            break;
        }
    }
    
    if(flag==0){
        cout<<"-1";
    }
}
