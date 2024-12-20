// #include<iostream>
// using namespace std;
// // declaring a function
// void greet(){
//     cout<<"Hello There";

// }

// int main(){
//     // calling the fuction 
//     greet();
//     return 0;

// }



// #include<iostream>
// using namespace std;
// // display a number 
// void displayNum(int n1, float n2) {
//     cout<<"the int number is"<<n1<<endl;
//     cout<< "The double number is "<<n2;

//     }

//     int main () {
//         int num1 = 5;
//         double num2 = 5.5;
//         // calling the function 

//        displayNum(num1,num2);
//        return 0;
//     }






// program to demonstrate addition of two numbers using a function 


// #include<iostream>

// using namespace std;
// // declaring a function 
// int add (int a, int b) {
//     return(a + b);

// }
 
//  int main () {
//     int sum ;
//     // calling the function  and storing 
//     // the returned value in sum 
//     sum  =  add(100,70);
//     cout<< "100 +70 ="<< sum << endl ;
//  }



//  using function definition after main () function 
// function prortotype is declared before main()









// #include<iostream>

// using namespace std;
// // function prototype 
// int add (int,int);
//  int main () {
//     int sum ;
//     // calling the function and storing 
//     // the returned value in sum 

//     sum = add (100,70);
//      cout << "100 + 70 = "<< sum << endl;

//      return 0;



//  }

// //  Function defination 
// int add (int a, int b){
//     return (a+b);
// }





// #include<iostream>
// #include<cmath>
// using namespace std;
// int main() {
//     double number ,squareRoot ;
//     number = 25.0
//     //sqrt() is library function to calculate squareroot
//     squareRoot = sqrt(number);

//     cout<<"Sqaure"


// }



// #include<iostream>
// using namespace std;
// // following function that takes two paramter 'x' and 'y'
// // as input and return  max of two input numbers 
// int max (int x , int y)
// {
//     if (x>y)
//         return x;
//     else
//         return y;

// }

// // main function that doesnt receive any parameter and 
// // returns integer 
// int main()
// {
//     int a =10 , b=20;
//     // calling above function to find  max of 'a' and  'b'
//     int m = max(a,b);
//     cout << "m is "<< m;
//     return 0 ;
// }




// C++ Program to implement 
// Swapping using Call by function 
// #include<iostream>
// using namespace std;

// // Swap function to demonstrate 
// // Call by value method 

// void swap(int x , int y)
// {
//             int t=x;
//             x=y;
//             y=t;
//             cout << "after swapping x is " << x << " and " << "y is " << y << endl;
// }
// int main() 
// {
//             int x = 1 , y = 2;
//             cout << "before swapping x=1 , y=2 ";

//             swap(x,y);
//             cout << "After swapping : ";
//             cout<< "x :"<<x<< "y:"<<y<< endl;

//             return 0;
  

// }



// # WAP to check EVEN OR ODD using Function in C++


#include <iostream>
using namespace std;
void evenodd(){
            int num;
            cout << "Please enter the number :";
            cin >> num ;
            if (num%2==0){
                        cout << num << " is even";
            }
            else
            cout << num << " is odd";
}
int main() 
{
            evenodd();
  return 0;
}



// #WAP TO FIND LARGEST NUMBER AMONG THREE NUMBERS 

#include <iostream>
using namespace std;
void greaternum(){
            int a , b ,c;          
            cout << "Enter three number";
            cin >> a >> b >>  c;
            if (a > b && a > c){
                        cout << a << " is greatest";
            }
            else if (b > c && b > a){
                        cout << b << " is greatest";
            }
            else 
            cout << c << " is greatest";
}
int main() 
{
            greaternum();
  return 0;
}




// WAP to calculate simple interestof given number 
#include <iostream>
using namespace std;
void si(){
            int p , t , r , SI,pro;
            cout << "enter priniciple amount:";
            cin >> p;
            cout << "enter time:";
            cin >> t;
            cout << "enter rate of intreast:";
            cin >> r;

            pro= p*t*r;
            SI=pro/100;

            cout << "ROI on the given amount is "<< SI;
            cout<< "\nNow total amount after intreast "<< p+SI;
}
int main(){
            si();
            return 0;
}






    





















