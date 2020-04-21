/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PopulationManager.cpp
 * Author: julivanespi
 * 
 * Created on April 12, 2020, 9:14 AM
 */

#include "PopulationManager.h"

PopulationManager::PopulationManager(int popA, float rateA, int popB, float rateB) {
    this-> popA = popA;
    this-> rateA = rateA;
    this-> popB = popB;
    this-> rateB = rateB;
    // run the projection
    projection();
}

PopulationManager::~PopulationManager() {
}

void PopulationManager::projection(){
    int currPopA = this-> popA;
    int currPopB = this-> popB;
    while(true){
        PopulationManager::incrementIntersectionYear();
        currPopA = currPopA + int(currPopA * rateA);
        currPopB = currPopB + int(currPopB * rateB);
        if (currPopA >= currPopB){
            break;
        }
    }
}

void PopulationManager::incrementIntersectionYear(){
    this->intersectionYear++;
}

int PopulationManager::getStartingYear() {
    return this->STARTING_YEAR;
}

int PopulationManager::getIntersectionYear() {
    return this->intersectionYear;
}

int PopulationManager::getTotalYearsPassed() {
    return (this->intersectionYear - this->STARTING_YEAR);
}



