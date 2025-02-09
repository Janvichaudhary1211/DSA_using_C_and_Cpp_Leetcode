#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";
}
void swappedArray(int arr[],int size){
    for(int i=0; i+1<size; i+=2)
    swap(arr[i],arr[i+1]);
}
int main(){
    int even[8]={2,5,4,1,6,8,7,3};
    int odd[5]={1,5,7,9,6};
    //When the size of array is even
    cout<<"Alternate Swapped array: "<<endl;
    swappedArray(even,8);
    printArray(even,8);
    //when the size of array is odd
    cout<<"Alternate Swapped array: "<<endl;
    swappedArray(odd,5);
    printArray(odd,5);


}