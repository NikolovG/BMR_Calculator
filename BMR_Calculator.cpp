
//Purpose: Have user enter their gender, age, weight, & height -
//- have the program spit out how much energy you consume roughly.

// The Mifflin - St Jeor BMR equation

// Metric formula for men ()
// BMR = (10 × weight in kg) + (6.25 × height in cm) − (5 × age in years) + 5
// Imperial formula for men
//BMR = (4.536 × weight in pounds) + (15.88 × height in inches) − (5 × age) + 5

// Metric formula for women
// BMR = (10 × weight in kg) + (6.25 × height in cm) − (5 × age in years) − 161
// Imperial formula for women
// BMR = (4.536 × weight in pounds) + (15.88 × height in inches) − (5 × age) − 161


#include<iostream>
using namespace std;

int main(void){
    
    char type = ' ';

    cout<<"\nHello! Welcome to BMR calulcator! Made by: Georgi Nikolov"
    <<"\n"<<"Based on Mifflin - St Jeor BMR equation\n\n"<<endl;

    cout<<"\nWould you like to use metric or imperial system?"
    <<" Type m or i to proceed. or q to quit"<<endl;
    cin>>type;

    string typeM = " ";

    switch (type){
    case 'i':
        typeM = "imperial";
        break;
    case 'm':
        typeM = "metric";
        break;
    case 'q':
        cout<<"Thank you for using BMR calculator!"<<endl;
    default:
        break;
    }

    cout<<"\nYou've selected "<<typeM<<" system.\n";

    char gender = ' ';
    int age = 0;
    int height = 0;
    double weight = 0;

    cout<<"\nWhat is your gender? Please select m or f"<<endl;
    cin>>gender;
    cout<<"What is your age?"<<endl;
    cin>>age;
    cout<<"What is your height? If metric use cm, if imperial use in."<<endl;
    cin>>height;
    cout<<"How much do you weigh? If metric use Kg, if imperial use lbs."<<endl;
    cin>>weight;

    string genderSelect = " ";

    if(gender == 'm'){
        genderSelect = "Male";
    } else if (gender == 'f') {
        genderSelect = "Female";
    } else {
        cout<<"\nINVALID INPUT\nRESTART PROGRAM\n";
        return 0;
    }

    string heightMeasure = " ";

    if(type == 'm'){
        heightMeasure = "cm";
    }else if(type == 'i'){
        heightMeasure = "inches";
    } else {
        cout<<"\nINVALID INPUT\nRESTART PROGRAM\n";
        return 0;
    }

    string weightMeasure = " ";

    if(type == 'm'){
        weightMeasure = "kg";
    }else if(type == 'i'){
        weightMeasure = "lbs";
    } else {
        cout<<"\nINVALID INPUT\nRESTART PROGRAM\n";
        return 0;
    }

    cout<<"\nYou are a "<<genderSelect<<".\n";
    cout<<"You are "<<age<<" years old.\n";
    cout<<"You are "<<height<<" "<<heightMeasure<<" tall.\n";
    cout<<"You are "<<weight<<" "<<weightMeasure<<".\n";

    double BMR = 0;

    // Metric formula for men ()
    // BMR = (10 × weight in kg) + (6.25 × height in cm) − (5 × age in years) + 5
    // Imperial formula for men
    //BMR = (4.536 × weight in pounds) + (15.88 × height in inches) − (5 × age) + 5

    // Metric formula for women
    // BMR = (10 × weight in kg) + (6.25 × height in cm) − (5 × age in years) − 161
    // Imperial formula for women
    // BMR = (4.536 × weight in pounds) + (15.88 × height in inches) − (5 × age) − 161

    switch (gender){
    case 'm':
        if (type == 'm'){
        BMR = ((10 * weight) + (6.25 * height) - (5.00 * age)) + 5.00;
        } else if(type == 'i'){
        BMR = ((4.536 * weight) + (15.88 * height) - (5.00 * age)) + 5.00;
        }
        break;

    case 'f':
        if (type == 'm'){
        BMR = ((10 * weight) + (6.25 * height) - (5 * age)) - 161;
        } else if(type == 'i'){
        BMR = ((4.536 * weight) + (15.88 * height) - (5 * age)) - 161;
        }
    default:
        break;
    }

    cout<<"\nYou need to consume roughly "<<BMR<<" calories to maintain your weight.\n";

    return 0;
}