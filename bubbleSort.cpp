#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter size of array = ";
    cin>>size;
    int array[size];
    for (int i=0;i<size;i++){
        cout<<"enter elements  "<< i+1 <<" = ";
        cin>>array[i];

    }
    int counter=1;
    while(counter<size){
        for(int i=0;i<size-counter;i++){
            if(array[i]>array[i+1]){
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }

        }
        counter++;
    }
    
    for (int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

}