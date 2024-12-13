// Template to display Array
#include <iostream>
 using namespace std ;
 template <class T>
 void printArray(T arr[1] , int size) {
    for (int i = 0;  i < size; i++) 
    {
        cout << arr[i]<<"";
    }
    cout << endl;
 }

 int main () 
 {
    int arr[] = { 1,2,3,4};
    printArray(arr,4);   
    return 0;
 }



// // template to display ARRAY
// #include <iostream>
// using namespace std;
// template <class T>
// void printArray(T arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << "";
//     }
//     cout << endl;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4};
//     printArray(arr, 4);
//     return 0;
// }