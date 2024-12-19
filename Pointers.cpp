// #include<iostream>
// using namespace std;

// int main ()
// {
//     // declare variable 
//     int var1 = 3;
//     int var2 = 24;
//     int var3 = 17;

//     // print address of var1
//     cout << "Address of var1:" <<&var1 <<endl;
//     // print address of var2
//     cout << "Address of var2:" <<&var2 <<endl;
//     // print addressof var 3
//     cout << "Address of var3:"<<&var3 << endl;

//     return 0;
// }


// //working of c++ pointers:
// #include <iostream>
// using namespace std;
// int main(){
//     int var=5;
//     // store address of var
//     int* point_var = &var;
//     // print value of var
//     cout << "var = " << var <<endl;
//     // p
//     cout<<"Address of var (&var): "<<var<<endl;
//     cout << "point_var" << point_var << endl;
//     cout<< "Content of the address pointer to by point_var (*point_var) = " << *point_var << endl;
//     return 0;
// }



//C++ program to illustrate pointers

// #include <iostream>           
// using namespace std;

// void demonstration_pointer(){
//     int var = 20;

//     //declare pointer value
//     int* ptr;

//     ptr = &var;

//     //assign the address f a variable to a pointer
//     cout<<"Value at ptr = " << ptr << "\n";
//     cout<<"Value at var = " << var << "\n";
//     cout<<"Value at *ptr = " << *ptr << "\n";
// }
// //Driver Program
// int main(){
//     demonstration_pointer();
//     return 0;
// }





// #include <iostream>
// using namespace std;
// int main(){
//     int var = 5;
//     //Store address of var
//     int* point_var = &var;
//     //point var
//     cout << "var = "<< var << endl;

//     //print *point_var
//     cout << "*point_var " << *point_var << endl;
//     cout << "Changing value of var to 7: " << endl;

//     //Change value of var to 7
//     var = 7;

//     //print var
//     cout << "var = "<< var << endl;

//     //print *point_var
//     cout << "*point_var " << *point_var << endl;
//     cout << "Changing value of var to 16: " << endl;

//     //change value of var to 16
//     *point_var = 16;
    
//     //print var
//     cout << "var = "<< var << endl;

//     //print *point_var
//     cout << "*point_var " << *point_var << endl;
//     return 0;
// }





// #include <iostream>
// using namespace std;

// //function with 2 parameter declarations and defination
// void addition(int& a, int& b)   //Formal parameter a and b
// {
//     int c=a+b;
//     cout << "Addition is " << c<<endl;
// }
// int main(){
//     //Value can asked to user and pass num1 and num2 as argument for function addition
//     int num1 = 10;
//     int num2 = 20;
//     addition(num1,num2); //Passing actual parameter

//     //direct value for a and b
//     //addition(10,20); //Passing a and b values (arguments)
//     return 0;
// }



#include <iostream>
using namespace std;
//Accessing array using pointer
int main(){
    int a[3]={10,20,30};
    int *ptr =a;
    cout<<"access first elements "<<*ptr<<endl;
    cout<<"access second elements "<<*(ptr+1)<<endl;
    cout<<"access third elements "<<*(ptr+2)<<endl;
    return 0;
}





#include <iostream>
using namespace std;

//Create and calling function using pointer concept
void display(int *a){
    cout <<"Value of a is: "<<*a<<endl; // * is derefrencing operator
}
int main(){
    int num=10;
    display(&num);
    return 0;
}




