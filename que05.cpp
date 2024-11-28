#include <iostream>
using namespace std;
int main() {
    int arr[5]={44,45,4,45,44};
    
    int j=5-1, flag=0;
    
    for (int i=0; i<5/2; i++){
        if(arr[i]!=arr[j]){
            cout<<"Not palindrom";
            flag=1;
            break;
        }
        j--;
    }
    
    if(flag==0){
        cout<<"Palindrom";
    }
}
