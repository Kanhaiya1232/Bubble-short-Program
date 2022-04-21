#include<iostream>    
using namespace std;   
void bubble(int ,int);//Function Declaration
void bubble(int arr[],int n)// Function Defination
{
    int i,j,temp,count;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            count=1;
            if(arr[j]>arr[j+1])
            {
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
            }
        }
        if(count==0)
        {
            break;
        }
    }
    for(i=0;i<n;i++)
    cout<<arr[i]<<", ";
}

int main()
{
    int arr[]={12,16,24,8,32};
    int n=sizeof(arr)/sizeof(int);
    bubble(arr,n);//Function calling
    return 0;
}









