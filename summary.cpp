#include "summary.h"
#include "slime.h"
#include <iostream>
#include <string>

using namespace std;

/***********************FUNCTION DEFINITIONS***********************/
void printSlime(slime slimePerson){
    cout << "Name - " << slimePerson.m_firstName << " " << slimePerson.m_lastName << endl;
    cout << "Violence Level - " << slimePerson.m_lvlOfViolence << endl;
    cout << "Age - " << slimePerson.m_age << endl;
    cout << "Wants to hurt you - ";
    if (slimePerson.m_agro){
        cout << "Yes" << endl;
        cout << "I'd steer clear of this one." << endl;
    }
    else if (!slimePerson.m_agro){
        cout << "No" << endl;
        cout << "Seems safe to me!" << endl;
    }
    
}