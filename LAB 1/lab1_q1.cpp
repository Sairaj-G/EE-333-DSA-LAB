// Write a program to remove outliers from an array using a window 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=10;
    int arr[10];
    int outliers[10] = {0};
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    float means[7];
    for(int i=0; i<7; i++)
    {
        float sum=0;
        for(int j=i; j<i+4; j++)
        {
            sum+=arr[j];
        }
        means[i] = sum/4.0;
    }
    for(int i=0; i<7; i++)
    {
        cout<<means[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<7; i++)
    {
        for(int j=i; j<i+4; j++)
        {
            if(arr[j]>5*means[i] || arr[j]<0.2*means[i])
            {
                outliers[j]=1;
            }
        }
    }
    for(int i=0; i<10; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    int cleaned[10];
    int size=0;
    for(int i=0; i<10; i++)
    {
        if(ans[i]==0)
        {
            cleaned[size]=arr[i];
            size++;
        }
    }
    for(int i=0; i<size; i++)
    {
        cout<<cleaned[i]<<" ";
    }
    cout<<endl;

}
