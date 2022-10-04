// Marcus Gale
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>

using namespace std;

bool valid(string race){
    int r = 0, NumberOfTeams = 0;
    double  numberOfRunners = 0.0;
    
    for(int i = 0; i < race.length(); i++){
        if(!(race[i] >= 65 && race[i] <= 90)){ // A through Z on the ASCII table                              
            return false;
        }
        
        if(race[i] == race[i + 1]){// if the first char equals to another then we add to the number of
                                   //teams that are in the race.
            NumberOfTeams++;
        }
    }
    
    // the number of runners equals  the race length / amount of runners.
   numberOfRunners = double(race.length()) / double(NumberOfTeams);
    r = numberOfRunners;

        // Makes sure that all teams have the same number of runners, so the program should
        // detect the error condition where teams do not have the same number of runners
    if(r!= numberOfRunners){
        return false;
    }
    else {
        return true;
    }

}

string Teams(string race){
    string NumberOfTeams = "";

    for(int i = 0; i < race.length(); i++){
        // seeing whether there is a character in NumberOfTeams that as an ASCII value is greater than race.size
        if(NumberOfTeams.find(race[i]) > race.size()){
            // adding such character that is greater to the string NumberOfTeams 
            NumberOfTeams = NumberOfTeams + race[i];
            
        }
    }
    // Gives a start and ending to NumberOfTeams
    sort(NumberOfTeams.begin(), NumberOfTeams.end());
    return NumberOfTeams;
}

double score(string race, char c){
    double  sum = 0.0;
    int NumberOfTeams = 0;
    
    for(int i = 0; i < race.length(); i++){
        // starts at A
        if(race[i] == c){
            // add the position to sum + 1 because i starts at 0
            sum += i + 1;
            NumberOfTeams++;
        }
    }
    
    // The team’s score is the sum of the members score divided by the number of people on the team.
    return double(sum) / double(NumberOfTeams);
}

int main(){
    string race,teams;
    cout << "Please input a string of uppercase characters indicating the outcome of a race";
    cin >> race;
    while(!valid(race)){
        cout << "Enter the results of the race again: ";
        cin >> race;
    }
    
    teams = Teams(race); // Sets the teams in order


   // Outputs the number of teams.
    cout << "\nThere are " << teams.length() << " teams." << endl;
    // Outputs the number of runners on a team.
    cout << "Each team has " << race.length() / teams.length() << " runners." << endl << endl;
    //The names of the teams – in alphabetical order - together with the team score.
    cout << '\t' << "Team" << '\t' << "Score" << endl << endl;
	
<< winner_score << endl;
    double min_score = score(race,teams[0]);
    for(int i = 0; i < teams.length(); i++){
        char c = teams.at(i);
        double s = score(race,c);
        cout << '\t' << c << '\t' << score(race,c) << endl;
        
        if(s < min_score)
            min_score = s;
    }
    
    cout << "The winning team is" << c << "with a score of" << min_score << endl;
    system("pause");
}