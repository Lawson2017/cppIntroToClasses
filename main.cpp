//
//  main.cpp
//  practice091918
//
//  Created by James Lawson on 9/10/18.
//  Copyright © 2018 James Lawson. All rights reserved.
//

#include <iostream> // cout, cin, endl become available using this library.
#include <string> // needs to be added in order to assign string values to variables.
using namespace std;

//function DEFINITION.. setup
int Xtimes2(int inX) // datatype - variable name;
{
    int answer = 0;
    answer = 2 * inX;
    return answer;
}

// different organiztion/style of programming -- OOP Object Oriented Programming
// where match/group/associate related functions and variables..

// Group is called a CLASS(ification) or a DATA TYPE created by the programmer.
//Step 1 - define a class
class myClass {
    
private: // all variables private (access specifier)
    int age; // the characteristics of the thing
    string name;
    
public: // all functions public
    // getters (state/value of object variable) and setters.. functions..
    int getAge() { return age;} // parenthese are blank because were not passing any information.
    string getName() { return name;}
    void setAge ( int inAge) { age = inAge;}
    void setName (string inName) { name = inName;} // inName must be declared as a STRING value, not an int, otherwise the build will fail when assigning a value down the line.
    
};

int main() //start program - ENTRY POINT
{
    int x; // declaration statements
    x = 42; // assignment statements
    
    // using the function - NAME is the key
    cout << "The double of " << x << " is " << Xtimes2(x) << endl;
    
    // Step 2 decleration of the class (is a classification - data type)
    int y;
    myClass MC1;
    
    //Step 3 use it.. with dot notation
    y = 42;
    MC1.setAge(21);
    MC1.setName("Lawson");
    
    // group part
    cout << MC1.getName() << ", your age is " << MC1.getAge() << endl;
    cout << "Name: James Lawson  - Program Name: inClass091028 - Date:  09/10/18" << endl;
    
    return 0; // END PROGRAM
}

