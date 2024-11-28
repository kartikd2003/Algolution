#include <iostream>
using namespace std;
int main() {
 int arr[5]={2,-6,5,-7,-11};
 
 int count=0;
 for(int i=0; i<5; i++){
     if(arr[i]<0){
         count++;
     }
 }
 cout<<"Negative no. = "<<count;
    return 0;
}
