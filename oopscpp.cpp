// //C++ program to illustrate how create a simple class and object
// #include <iostream>
// using namespace std;

// //Define a class named 'Person'
// class Person {
//     public:
//         //Data members
//         string name;
//         int age;

//         //Member function to introduce the person
//         void introduce() {
//             cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
//         }
// };
// int main(){
//     //Create an object of the class 'Person'
//     Person person1;
//     //accessing data members
//     person1.name = "Pranav";
//     person1.age = 19;

//     //Call the introduce member method
//     person1.introduce();
//     return 0;
// }



// CPP program to demonstrate accessing of data members 
#include <iostream>
// using namespace std;
// class ABC{
//             string g;
//             public:
//             void setname(string name){g = name;}
//             void printname() {cout << "My name is "<< g;}
// };
// int main() 
// {
//             ABC obj1;
//             obj1.setname("Pranav");
//             obj1.printname();
//   return 0;
// }




#include <iostream>
using namespace std;
class outside_class{
            public:
            string g;
            int id;
            void printname();
            void printid(){cout << " id is: " << id;}

};
void outside_class::printname()
{
            cout << "Name is: " << g;
}
int main() 
{
            outside_class obj1;
            obj1.g = "Pranav";
            obj1.id = 19;
            obj1.printname();
            cout << endl;
            obj1.printid();
  return 0;
}






