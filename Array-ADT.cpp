#include <iostream>
#include<malloc.h>
using namespace std;
struct Array{
   // int *A;
    int A[10];
    int size;
    int length;
};
void display(struct Array arr){
    cout<<"\n Array Elements are\n";
    for(int i=0;i<arr.length;i++)
        cout<<arr.A[i];
}
//inserting new element at the end of array
void append(struct Array *arr,int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}
void insert(struct Array *arr,int index,int x){
    if(index>=0 && index<=arr->length){
        for(int i=arr->length;i>index;i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }

}
int main()
{
    struct Array arr={{2,3,4,5,6,7},20,6};
//    cout<<"Enter size of array\n";
//    cin>>arr.size;
//    arr.A=(int *)malloc(arr.size*sizeof(int));
////    arr.A=new Array;
//    arr.length=0;
//    int n,i;
//    cout<<"enter how many numbers\n";
//    cin>>n;
//    cout<<"Enter all elements\n";
//    for(i=0;i<n;i++)
//        cin>>arr.A[i];
//    arr.length=n;
    insert(&arr,5,10);
    display(arr);
    return 0;
}
