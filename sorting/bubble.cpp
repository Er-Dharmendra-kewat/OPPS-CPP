#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    // taking user input array elements
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
        
    }
    int i;
    cout<<"the sorted elements using bubble sorting are:: ";
    for (i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    

}