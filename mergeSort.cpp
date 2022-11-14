#include <iostream>

using namespace std;

void merg(int array[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1]; // two temperary array to merg left and right sorted arrays
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = array[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = array[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            array[k] = a[i];
            k++;
            i++;
        }
        else
        {
            array[k] = b[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        array[k]=a[i];
        k++;
        i++;

    }
     while(j<n2){
        array[k]=b[j];
        k++;
        j++;

    }

}

void mergsort(int array[], int l, int r)
{ 
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergsort(array, l, mid);
        mergsort(array, mid + 1, r);
        merg(array, l, mid, r);
    }
}
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
    

    cout<<" UnSorted Array Is "<<endl;

     for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

    mergsort(array,0,size-1);
    cout<<"...::The Sorted Array is "<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}