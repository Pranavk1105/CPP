// #include<iostream>
// using namespace std;

// int main () {
//  int a=4 , b=5; 
// //  arithmatic operator 
// cout<<"the addition of a and b " <<a+b <<endl;
//  cout<<"the subtraction of a and b " <<a-b <<endl;
//  cout<<"the multiplication of a and b " <<a*b <<endl;
//  cout<<"the division of a and b " << a/b <<endl;
//  cout<<"the remainder of a and b " << a%b <<endl;
//  cout<<"the value of a++ is " <<a++ <<endl;
//  cout<<"the value of a-- is " <<a-- <<endl;
//  cout<<"the value of --a is " <<--a <<endl;
//  cout<<"the value of ++a is " <<++a <<endl;
 
// //  comparison operator 

//  return 0;
//  }







// #include<iostream>
// using namespace std; 

// int main() {
//     int age ;
//     cout<<"Tell me your age"<<endl;
//     cin>>age;
//     if(age<18){
//     cout<<"You can come to my party"<<endl;
//     }

//     else if( age==18) {
//         cout<<"You are not allowedd to party "<<endl;
//     }

//      else if( age<1){
//        cout<<" you are not allowed"<< endl;
//      }

//     else {
//         cout<<"You are not allowed "<< endl;
//     }


//     return 0;

// }



#include<iostream>
using namespace std; 

int main() {
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age ;
    
    switch (age)
    {
    case 18 :
      cout<<"You are 18"<<endl;
       break;

    case 13 :
       cout <<"YOUR ARE 13"<< endl;
        break;

    default:
        cout<<"no special case"<<endl;
         break;
    
    }

    return 0 ;

}




