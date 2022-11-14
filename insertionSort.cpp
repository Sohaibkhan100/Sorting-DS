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
for (int i = 1; i < size; i++)
{
    int current = array[i];
    int j = i-1;
    while (array[j]>current && j>=0)
    {
        array[j+1]=array[j];
        j=j-1;
    }
    array[j+1]=current;
    
}
for (int i = 0; i < size; i++)
{
    cout<<array[i]<<endl;
}





}