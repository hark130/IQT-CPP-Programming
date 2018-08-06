#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "person.h"

using namespace IQT;

int log_roster(std::vector<Person>& , std::ofstream& );
int generate_roster(std::vector<Person>&);

int main()
{
    std::ofstream outfile("roster.txt");
    std::vector<Person> roster;

    int roster_size = generate_roster(roster);
    int logged_count = log_roster(roster, outfile);

    if(roster_size == logged_count)
        std::cout<<"Roster logged successfully";
    else
        std::cout<<"Roster size and logged count mismatch. Error!" << std::endl;

    roster.clear();

    return 0;
    
}
//Arguments: std::vector<person>& roster - reference a vector containing the list of students in the class
//           std::ofstream& - a reference to the ofstream outfile object you will write too 
//Returns:  int count of the number of records written out 
//Purpose: write out the logic
int log_roster(std::vector<Person>& roster, std::ofstream& outfile)
{
    return 90;
}

//Arguments: std::vector<Person>& roster - a reference to a vector that will contain the students you input 
//Returns: int count of the number of records input 
//Purpose: receive input and load the vector 
int generate_roster(std::vector<Person>& roster)
{
    return 90;

}