#include <iostream>
#include <string>

using namespace std;

//FUNCTION DECLARATIONS

//CHECKS A TIC-TAC-TOE GAMEBOARD FOR WINNING CONDITIONS
void tictactoe(){
//VARIABLE DECLARATIONS
    char gameboard[3][3];
    char element;
    bool win_o=false, win_x=false;

//USER PROMPT - FILL ARRAY
    cout << "Input x's and o's on the game board (row by row): " << endl;
        for (int i=0; i<3; i++){
            cout << "Input row " << i+1 <<": ";
                for (int j=0; j<3; j++){
                    cin >> element;
                    gameboard[i][j]=element;
    }
    }

    //WINNER VALIDATION FOR X
    for (int i=0; i<3; i++){
        if ((gameboard[i][0]=='x'&&gameboard[i][1]=='x'&&gameboard[i][2]=='x')||(gameboard[0][i]=='x'&&gameboard[1][i]=='x'&&gameboard[2][i]=='x')){
            win_x=true;
            break;
        }
    }

    if ((gameboard[0][0]=='x'&&gameboard[1][1]=='x'&&gameboard[2][2]=='x')||(gameboard[0][2]=='x'&&gameboard[1][1]=='x'&&gameboard[2][0]=='x')){
        win_x=true;
    }

    //WINNER VALIDATION FOR O
    for (int i=0; i<3; i++){
        if ((gameboard[i][0]=='o'&&gameboard[i][1]=='o'&&gameboard[i][2]=='o')||(gameboard[0][i]=='o'&&gameboard[1][i]=='o'&&gameboard[2][i]=='o')){
            win_o=true;
            break;
        }
    }

    if ((gameboard[0][0]=='o'&&gameboard[1][1]=='o'&&gameboard[2][2]=='o')||(gameboard[0][2]=='o'&&gameboard[1][1]=='o'&&gameboard[2][0]=='o')){
        win_o=true;
        }

    //VALIDATE THAT A WIN OCCURRED
    if (win_x&&win_o)
        cout << "Error: Two victory conditions met - table input is invalid." << endl;

    else if(win_x)
        cout << "x is the winner" << endl;

    else if(win_o)
        cout << "o is the winner" << endl;

    else if(!win_o&&!win_x)
        cout << "Its a draw! (Or maybe you input something that was not an 'x' or an 'o'!)" << endl;
}
//CHECKS IF DATE INPUT IS A VALID, LEGITIMATE DATE
void ValidateDate(){
    //VARIABLE DECLARATION
    int day, month, year;
    bool validate=true;
    //USER PROMPT
    cout << "Please input the date you wish to validate (dd - mm - yyyy)" << endl;
    cin >> day >> month >> year;
    //VALIDATION PROCESS
    if (day<=0||day>31){
        validate=false;
        cout << "This is an invalid amount of days." << endl;
    }
    if (month<=0||month>12){
        validate=false;
        cout << "This is an invalid month number. "<< endl;
        }
    if(month%2==0&&day==31){
        validate=false;
        cout << "This month does not have 31 days." << endl;
    }
    if (month==2&&day>29){
        validate=false;
        cout << "February contains a maximum of 29 days during leap years." << endl;
    }
    if (month==2&&day>28&&year%4!=0){
        validate=false;
        cout << "The year is not a leap year, February cannot have more than 28 days." << endl;

    }
    //DISPLAY RESULT
    if (validate){
        cout << "The date is valid" << endl;
    }
    else
        cout << "Invalid date" << endl;
}
void classaverage(){
    int lowest=0,fifties=0, sixties=0, seventies=0, eighties=0, nineties=0;
    int students;
    //PROMPT
    cout << "Please input the number of students: " << endl;
    cin >> students;

    string names[students];
    string name;
    int grades[students][3];
    float average[students];

    for (int i=0; i<students; i++){
    cout << "Input student name: " << endl;
    getline(cin.ignore(), name);
    names[i]=name;

    cout << "Input their three partial grades: " << endl;
    for (int j=0; j<3; j++){
       cin >> grades[i][j];
    }
    }
    //CALCULATE STUDENT AVERAGES
    for (int i=0; i<students; i++){
            double score=0;
        for (int j=0; j<3; j++){
            score+=grades[i][j];
        }
        score/=3;
        //ACQUIRING DATA FOR GRAPHIC DISPLAY
        if(score<=50)
            lowest++;
        if(score>50&&score<=60)
            fifties++;
        if(score>60&&score<=70)
            sixties++;
        if(score>70&&score<=80)
            seventies++;
        if (score>80&&score<=90)
            eighties++;
        if (score>90&&score<=100)
            nineties++;
        average[i]=score;
    }

    for (int j=0; j<students; j++){
        cout << names[j] << "     ";
        for (int k=0; k<3; k++){
            cout << grades[j][k] << " ";
        }
        cout << "    " << average[j] << endl;
    }
    //GENERATING GRAPHIC DISPLAY
    cout << " 0 - 50  "; for (int i=0; i<lowest; i++){ cout << " * ";}
    cout << endl << "51 - 60  "; for (int i=0; i<fifties; i++){ cout << " * ";}
    cout << endl << "61 - 70  "; for (int i=0; i<sixties; i++){ cout << " * ";}
    cout << endl << "71 - 80  "; for (int i=0; i<seventies; i++){cout << " * ";}
    cout << endl << "81 - 90  "; for (int i=0; i<eighties; i++){ cout << " * ";}
    cout << endl << "91 - 100 "; for (int i=0; i<nineties; i++){cout << " * ";}

}
//DISPLAYS MENU
 void menu(){

                cout << "-- MENU --" << endl;
                cout << "Enter the corresponding number of the action you want to take: "<< endl << endl;
                cout << " [1] Determine the winner of a tic-tac-toe. " << endl;
                cout << " [2] Validate a provided date. " << endl;
                cout << " [3] Get the average of a class with three partials and display a graphic. " << endl;
                cout << " [4] Exit the program. " << endl;

 }

 //MAIN FUNCTION
int main()
{
    //VARIABLE DECLARATIONS
    int menu_selector=0;
    //INITIAL PROMPT
    cout << "Welcome to Jesus Alatorre's Integrative Activity! " << endl << endl;

    menu();


            while (menu_selector!=4){

                   cin >> menu_selector;

                    while(menu_selector!=1&&menu_selector!=2&&menu_selector!=3&&menu_selector!=4){
                    cout << "That is not a valid option. Please input option # 1, 2, 3 or 4." << endl;
                    cin >> menu_selector;
                    }

            switch(menu_selector){
                case 1:{
                    tictactoe();
                    menu();
                    break;
                }

                case 2:{
                    ValidateDate();
                    menu();
                    break;
                }
                case 3:{
                    classaverage();
                    menu();
                    break;
                }
                }
            }

        //PROGRAM TERMINATION
        cout << "Terminating program. Have a nice day." << endl;

    return 0;
}
