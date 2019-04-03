#include <iostream>

int main(int argc, char* args[]) {

    // An average Green Fox attendee codes 6 hours daily
    // The semester is 17 weeks long
    //
    // Print how many hours is spent with coding in a semester by an attendee,
    // if the attendee only codes on workdays.
    //
    // Print the percentage of the coding hours in the semester if the average
    // working hours weekly is 52


    double avgcodetime = 6;
    double semesterweeklong = 17;
    double workdays = 5;
    double avgworkhoursweekly = 52;

    std::cout << avgcodetime * semesterweeklong * workdays << std::endl;

    std::cout << (avgcodetime * workdays) / avgworkhoursweekly * 100 << std::endl;



    return 0;
}