//
//  quiz_4..cpp
//  Quiz_4
//
//  Created by Lucas Dahl on 4/13/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//

// This is a simple word game using user input.

// Header
#include <iostream>
#include <string>

using namespace std;


// getline will inculde the spaces when the user inputs data **must be string**
int main() {
    
    // Properties
    string name, city, college, proffession;
    int age, ageSeconds;
    
    // Gather data
    cout << "Please enter your first and last name: ";
    getline(cin, name);
    cout << "Thanks! Now can you enter your city and state? ";
    getline(cin, city);
    cout << "Great! What college do you attend? ";
    getline(cin, college);
    cout << "What is your proffession now? ";
    getline(cin, proffession);
    cout << "And how old are you? ";
    cin >> age;
    
    // Appply the users age to convert it to seconds
    ageSeconds = (age*365*24*60*60);
    
    // Output the given data
    cout << "\nThere once was a person named "+name+" who lived in "+city+". At the age of "+to_string(age)+", "+name+" went to college at "+college+". "+name+" graduated and whent to work as a "+proffession+". "+name+", if expressed in seconds you are already "+to_string(ageSeconds)+" seconds old!" << endl;
    
    // Used to exit the program
    return 0;
}
