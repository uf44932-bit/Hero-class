/*
 A hero has (variables for):
 -A strength value, that is assigned randomly when they are created. Code outside the class should be able to read this value, but not write to it.
 -A courage value, that is assigned randomly when they are created. Code outside the class should be able to read or write this value.
 -A name, that is set by the constructor. Code outside the class should be able to read this value, but not write to it.

 A hero can (has functions to):
 -Attend training for some length of time (the argument), which increases their strength proportionally to the time.
 -Attend therapy, which increases their courage by a random amount.
 These functions should be accessible outside the class.

 There should be an external (not in the class) function which sends a hero on a quest:
 -The quest should end in success, failure, or a neutral result. A better outcome should be more likely for heroes with higher strength.
 -The quest should reduce the hero's courage, with them losing more for worse outcomes.
 -The quest should print the hero's name and the result to the terminal.
 */

#include <iostream>
#include <string>

using namespace std;

class Hero {
private:

    double Strength;
    string Name;
    
    
public:
    
    double Courage;
    
    Hero (string name) {
        name = name;
    }
    
    double strength = rand();
    double courage = rand();

    
    
};

int main() {
    
    double time = 0.0;
    
    srand(time /0.5);
    
    
    
    return EXIT_SUCCESS;
}
