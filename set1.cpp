1
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

2
#include <iostream>
using namespace std;
int main() {
 int arr[5];
  for(int i=0; i<5; i++){
     cin>>arr[i];
 }
 int max=arr[0];
 for(int i=0; i<5; i++){
     if(arr[i]>max){
         max=arr[i];
     }
 }
 cout<<"Maximum = "<<max;
    return 0;
}

3
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

4
#include <iostream>
using namespace std;
int main() {
 int arr[5];
 for(int i=0; i<5; i++){
     cin>>arr[i];
 }
 
 int revArr[5];
 int j=0;
 for(int i=4; i>=0; i--){
    revArr[j]=arr[i];
    j++;
 }
 
 for(int i=0; i<5; i++){
    cout<<revArr[i];
 }
    return 0;
}

5
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

6
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

7
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

8
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

9
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

10
#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }
        for(int k=0; k<n; k++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

11
#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"Enter a no. : ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"8";
        }
        cout<<"\n";
    }


}

12
#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"Enter a no. : ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"8";
        }
        cout<<"\n";
    }
    
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"8";
        }
        cout<<"\n";
    }
}

13
#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"Enter a no. : ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<" ";
        }

        for(int j=0; j<=i*2; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    
    for(int i=1; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<" ";
        }
        for(int j=i*2; j<n*2-1; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

14
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

15
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

16
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

