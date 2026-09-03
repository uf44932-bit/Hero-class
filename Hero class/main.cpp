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
    
    void AttendTherapy() {
        int CourageGain = (rand() % 5) +1;
        Courage += CourageGain;
        cout << Name << " Gained Courage! Courage is now " << CourageGain << "\n";
    }
    void AttendTraining(int time) {
        Strength += time * 2;
        cout << Name << " Trained For " << time << " hours. Strength is now " << Strength << "\n";
        
    }

        
};

void SendOnAQuest(Hero& hero) {
    
    int sucessRoll = (rand() % 10) + hero.getStrength();
    
    string outcome;
    int Courageloss = 0;
    
    if(sucessRoll >= 15)
    {
        outcome = "Sucess";
        Courageloss = 2;
        
    } else if (sucessRoll >= 8){
        outcome = "Good";
        Courageloss = 5;
    } else {
        outcome = "Failure";
        Courageloss = 10;
    }
    
    int currentCourage = hero.getCourage();
    hero.setCourage(currentCourage - Courageloss);
    
    cout << "Quest: " << hero.getName() << " goes on a quest " << outcome << " lost " << Courageloss << " courage. courage is now " << currentCourage << "\n";
        
};

    


int main() {
    
    srand(time_t(0));
    Hero hero1("Amy: ");
    Hero hero2("joan: ");
    Hero hero3("robert: ");
    
    cout << hero1.getName() << " Strength = " << hero1.getStrength() << " courage = " << hero1.getCourage() << "\n\n";
    cout << hero2.getName() << "Strength = " <<hero2.getStrength() << " Courage = " << hero2.getCourage() << "\n\n";
    cout << hero3.getName() << "Strength = " << hero3.getStrength() << " Courage = " << hero3.getCourage() <<"\n\n";
    
    hero1.AttendTherapy();
    hero1.AttendTraining(2);
    cout << "\n\n";
    
    hero2.AttendTherapy();
    hero2.AttendTherapy();
    cout << "\n\n";
    
    hero3.AttendTraining(3);
    hero3.AttendTraining(3);
    
    cout <<"\n\n";
    
    SendOnAQuest(hero1);
    cout << "\n\n";
    SendOnAQuest(hero2);
    cout << "\n\n";
    SendOnAQuest(hero3);
    
    cout << "\n\n";
    
    
    
    
    
    
    return EXIT_SUCCESS;
}
