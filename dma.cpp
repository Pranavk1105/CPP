// // New operator 

// #include <iostream>
// using namespace std;
// int main() {
//     int* pnt =new int ;    
//     *pnt = 5;
//     cout << *pnt <<endl;
//     // delete pnt;
//     cout << *pnt;
//     return 0;

 
// }



// Delete operator 
// #include <iostream>
// using namespace std;
// int main() {
//     int* pnt =new int ;    
//     *pnt = 5;
//     cout << *pnt <<endl;
//     delete pnt;
//     cout << *pnt;
//     return 0;

 
// }

// // cpp program to demonstrate how to create dynamic variable 
// //  using new 

// #include <iostream>
// #include<memory>
// using namespace std;

// int main ()
// {
//     // pointer to store the address returned by the new 
//     int*ptr;
//     // allocating memory for integer
//     ptr = new int;

//     // assigning value using de reference operator 
//     *ptr = 10;

//     // printing value and address
//     cout << "address[]"
// }





#include <iostream>
using namespace std;
int main(){
    //declaration of variables
    int *arr, max_num, i;

    cout << "Enter total number of elements to be entered: ";
    cin >> max_num;

    //use new operator to declare array memory at run time
    arr = new int[max_num];

    cout << "Enter elements: \n";
    for(i = 0; i < max_num; i++){       //input array from user
        cout << " Number " << i+1 << " is ";
        cin >> arr[i];
    }

    cout << " Numbers are : ";
    for(i = 0; i < max_num; i++){
        cout << arr[i] << "\t";
    }
    
    //use delete operator to deallocate dynamic memory
    delete [] arr;
    return 0;
}






