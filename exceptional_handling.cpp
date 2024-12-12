// // program to divide two number 
// //  throws an exception when the divisor is 0
// #include <iostream>
// using namespace std;
// int main() 
// {
//     double numerator , denominator ,divide;
//     cout<<"Enter numerator: ";
//     cin>>numerator;
//     cout<<"Enter denominator: ";
//     cin>>denominator;


//     try{
//         // throw an exception of denominator is 0
//         if (denominator == 0)
//         throw 0;
//         // not executed if denominator is 0
//         divide =numerator/denominator;
//         cout<<numerator<<" / "<<denominator <<" = " <<divide <<endl;

//     }

//     catch (int num_exception ){
//         cout <<"Error Cannot divide by "<<num_exception<<endl;
//     }
//   return 0;
// }





// Develop a c++ program to accept the age of the user. Using try 
// #include <iostream>
// using namespace std;


// int main() {
//     try {
//         int age ;
//         cout<< "Enter your age";
//         cin >> age;
//         if (age >= 18) {
//             cout << "Access granted - you are old enough.";
//         } else{
//             throw(age);
        
//         }
//         }
    
//     catch (int myNum){
//         cout << "Access denied - You must be at least 18 yrs old.\n";
//         cout << "Age is :" << myNum;
//     }
//     return 0 ;
// }



// Using multiple catch statement `

#include<iostream>
using namespace std;

void test(int x) {
    try {
        if (x>0)
        throw x;
    else
        throw 'x';
    }catch (int x){
        cout<< "catch a integer and that integer is : \n" << x<<endl;

    }catch (char x) {
       cout << "Catch a character and that character is :\n "<< x << endl;

    }
    }


int main () {
    cout << "Testing multiple catches :\n";
    test(10);
    test(0);
    return 0;
}



//  practical questions
// Q1.Write a program that prompts the user to number. If the number is negative, 
// throw an exception. Catch and handle the exception to display an appropriate message.







// Q2. Create a simple Bank Account class with method to withdraw money. 
// Throw exception if the withdrawal amount exceeds the account balance.

