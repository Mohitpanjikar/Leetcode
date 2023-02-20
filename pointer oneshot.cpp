#include <iostream>
using namespace std;

int main() {
    // playing with the pointer , modify the value of variable through pointer]
    
    int num = 10;
    cout<<num<<endl;
    
    int *ptr = &num;
    cout<<*ptr<<endl;
    
    cout<<(++(*ptr))<<endl;
    cout<<num<<endl;
    
    
    // pointer pointing to pointer 
    int num = 10;
    int *ptr = &num;
    int *ptr2 = ptr;
    
    cout<<num<<" "<<*ptr<<endl;
    cout<<ptr<<" "<<&ptr2<<end;
    
    // finding the location of the array using two method which are as following - method 1 -
    int arr[10] = {0};
    cout<<"location of the array "<<arr<<endl;
    // method 2 
    cout<<"location of the array form second method "<<&arr[0]<<endl;
    // & - address of operator , address of
    // * - derefrence operator , value of 
    
    
    int num = 10;
    // // value of num
    cout<<num<<endl;
    
    int *ptr = &num;
    // //porinting address of ptr
    cout<<ptr<<endl;
    // //derefernce operator , value inside that pointer
    cout<<*ptr<<endl;
    
    // //address of pointer
    cout<<&ptr<<endl;
    
    // // creating a double pointer 
    double d = 40.22;
    double *ptr2 = &d;
    // // this will return ptr ka address matlab d ka address
    cout<<"adress of d through pointer"<<*ptr<<endl;
    
    // // this will return pointer ki reference karna wali value per -
    cout<<*ptr<<endl;
    
    // // this will return address of ptr
    cout<<&ptr<<endl;
    
    // creating char ptr
    char ch = 'q';
    char *ptr3 = &ch;
    cout<<ch<<" "<<*ptr3<<endl;
    cout<<ptr3<<endl;
    cout<<*ptr3<<endl;
    cout<<&ptr3<<endl;
    
  
    int num = 10;
    cout<<"Size of int num "<<sizeof(num)<<endl;
    int *ptr = &num;
    cout<<"Size of int pointer "<<sizeof(ptr)<<endl;
    
    double d = 11.11;
    double *ptr2 = &d;
    cout<<"Size of int num "<<sizeof(d)<<endl;
    cout<<"Size of int pointer "<<sizeof(ptr2)<<endl;
   
   
    // playing with the null pointer
    int *ptr = 0;
    cout<<*ptr<<endl;
    // this will give segmentation fault as we are trying to access null pointer ki value 
    
    
    // intializing pointer we have two ways which are as following - thorught normal method and second one is throught null pointer 
    // 1.normal method
    int i = 10;
    int *ptr = &i;
    cout<<*ptr<<endl;
    
    // 2.null pointer method 
    int *ptr2 = 0;
    ptr2 = &i;
    cout<<*ptr2<<endl;
    
    
    
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<&arr[0]<<endl;
    cout<<&arr<<endl;
    cout<<arr<<endl;
    
    // arr = arr+1; this will through an error bcoz we are trying to modify the value of symbol table 
    
    
    int *ptr = &arr[0];
    // pointing to the array ka location 
    cout<<ptr<<endl;
    // pointing to the first value of array zeroth index
    cout<<*ptr<<endl;
    pointing to the 
    // pointing to memory location 
    cout<<&ptr<<endl;


    int num = 10;
    int *ptr = &num;
    int **ptr2 = &ptr;
    int ***ptr3 = &(ptr2); // triple pointer
    
    cout<<num<<endl;
    cout<< *ptr <<endl;
    cout<< **ptr2 <<endl;
    cout<< ***ptr3 <<endl;
    
    return 0;
}