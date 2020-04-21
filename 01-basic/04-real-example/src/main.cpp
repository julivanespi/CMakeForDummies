/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: julivanespi
 *
 * Created on April 12, 2020, 9:10 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "PopulationManager/PopulationManager.h"

using namespace std;

void welcome();
/*
 * 
 */
int main(int argc, char** argv) {
    
    welcome();
    
    int populationA = 0, populationB = 0;
    float rateA = 0.0, rateB = 0.0;
    
    string inputMessage = "Please enter a";
    
    std::cout << inputMessage << "n integer for the first population: ";
    std::cin >> populationA;
    
    std::cout << inputMessage << " float for the growth rate: ";
    std::cin >> rateA;
    
    std::cout << inputMessage << "n integer for the second population: ";
    std::cin >> populationB;
    
    std::cout << inputMessage << " float for the growth rate: ";
    std::cin >> rateB;
    
    PopulationManager popMan (populationA, rateA, populationB, rateB);
    
    std::cout << "The starting year is: " << popMan.getStartingYear() << std::endl;
    std::cout << "\nThe intersection year is: " << popMan.getIntersectionYear() << std::endl;
    std::cout << "\nThe amount of years passed is: " << popMan.getTotalYearsPassed() << std::endl;    
    
    return 0;
}

void welcome(){
    string message = "Welcome to Population Manager. "
            "Follow the instructions below.\n" ;
    
    std::cout << message << std::endl;
}

