#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter size of array = ";
    cin>>size;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        cout<<"enter element "<< i+1 <<" = ";
        cin>>array[i];
    }
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (array[j]<array[i])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
            
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<endl;
    }
    
    
    







}