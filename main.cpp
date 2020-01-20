#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here:
 
 int
 float
 bool
 double
 char
 unsigned int
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function.
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end
    for each of those functions declared, write out how the function would look if called with correct arguments
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int meaningOfLife = 32;
    int wheelsOnCar = 4;
    float pi = 3.14f;
    float eulersNumber = 2.718f;
    float feigenbaum = 4.6692f;
    bool isDoorOpen = 0;
    bool boxIsEmpty = 1;
    bool carIsRunning = 0;
    double goldenRatio = 1.6180339887;
    double aLargeFloat = 8.99999999999996;
    double anotherLargeFloat = 325982.32;
    char firstLetter = 'a';
    char lastLetter = 'z';
    char randomLetter = 'm';
    unsigned int foo = 2;
    unsigned int bar = 32757;
    unsigned int baz = 30;
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
    ignoreUnused(meaningOfLife);
    ignoreUnused(wheelsOnCar);
    ignoreUnused(pi);
    ignoreUnused(eulersNumber);
    ignoreUnused(feigenbaum);
    ignoreUnused(isDoorOpen);
    ignoreUnused(boxIsEmpty);
    ignoreUnused(carIsRunning);
    ignoreUnused(goldenRatio);
    ignoreUnused(aLargeFloat);
    ignoreUnused(anotherLargeFloat);
    ignoreUnused(firstLetter);
    ignoreUnused(lastLetter);
    ignoreUnused(randomLetter);
    ignoreUnused(foo);
    ignoreUnused(bar);
    ignoreUnused(baz);
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
}

/*
 1)
 */

void playSound(double frequency, int envelope, int patch = 0){
  ignoreUnused(frequency, envelope, patch);
}

/*
 2)
 */

double convertFrequencyToPeriod(double frequency){
  ignoreUnused(frequency);
  return {};
}

/*
 3)
 */

void brewCoffee(int numberOfCups, float volumeOfCups, int strength){
  ignoreUnused(numberOfCups, volumeOfCups, strength);
}

/*
 4)
 */

double convertFrequencyToWavelength(double frequency, int accuracy){
  ignoreUnused(frequency, accuracy);
  return {};
}

/*
 5)
 */

void playMusic(double idOfSong, bool repeatSong, int volume){
  ignoreUnused(idOfSong, repeatSong, volume);
}

/*
 6)
 */

double deleteTrack(double idOfSong, bool makeNullInCollection){
  ignoreUnused(idOfSong, makeNullInCollection);
  return {}; //returns id of deleted track
}

/*
 7)
 */

bool addToPlaylist(double idOfSong, double idOfPlaylist){
  ignoreUnused(idOfSong, idOfPlaylist);
  return {}; //returns success or failure
}

/*
 8)
 */

double generateRadioStation(double idOfSeed, int degreeOfRandomness = 0, int lengthOfPlaylist = 10){
  ignoreUnused(idOfSeed, degreeOfRandomness, lengthOfPlaylist);
  return {}; //returns id of radiostation
}

/*
 9)
 */

bool isSongInPlaylist(double idOfSong, double idOfPlaylist){
  ignoreUnused(idOfSong, idOfPlaylist);
  return {}; // returns bool if song is in playlist
}

/*
 10)
 */

void playNote(char note, int patch, int volume=5){
  ignoreUnused(note, patch, volume);
}


int main()
{
    //example of calling that function
    rentACar(6, 2);
    
    //1)

    playSound(23.53, 3);
    
    //2)

    convertFrequencyToPeriod(2834.67);
    
    //3)

    brewCoffee(2, 23.5, 6);
    
    //4)

    convertFrequencyToWavelength(440.4, 2);
    
    //5)

    playMusic(8237462, 0, 5);
    
    //6)

    deleteTrack(9928661, 1);
    
    //7)

    addToPlaylist(119284, 129015);
    
    //8)

    generateRadioStation(2312971);
    
    //9)

    isSongInPlaylist(923502, 99205);
    
    //10)

    playNote('C', 25);
    
    std::cout << "good to go!" << std::endl;
    return 0;
}
