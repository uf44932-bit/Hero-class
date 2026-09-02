/*

 There should be an external (not in the class) function which sends a hero on a quest:
 -The quest should end in success, failure, or a neutral result. A better outcome should be more likely for heroes with higher strength.
 -The quest should reduce the hero's courage, with them losing more for worse outcomes.
 -The quest should print the hero's name and the result to the terminal.
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

class Hero {
private:
    string Name;
    int Strength;
    
    
public:

    int Courage;
    

    
    Hero (string Heroname) {
        Name = Heroname;
        
        
        Strength = rand() % 100;
        Courage = rand() % 100;
        
    }
    
    
    string getName() const {
        return Name;
    }
    
    int getStrength() const {
        return Strength;
    }
       
   
    int getCourage() const {
            return Courage;
        }
    void setCourage(int newCourage) {
        Courage = newCourage;
    }
    
    void AttendTheapry() {
        int CourageGain = (rand() % 5) +1;
        Courage += CourageGain;
        cout << Name << "Courage Gained! Courage is now " << CourageGain << endl;
    }
    void AttendTraining(int time) {
        Strength += time * 2;
        cout << Name << "Trained For" << time << "hours. Strength is now" << Strength << endl;
        
    }

        
};

void SendOnAQuest(Hero& hero) {
    
};



    
    
  
    
   
    


int main() {
    
    
   
    
    
    
    
    
    
    return EXIT_SUCCESS;
}
