/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PopulationManager.h
 * Author: julivanespi
 *
 * Created on April 12, 2020, 9:14 AM
 */

#ifndef POPULATIONMANAGER_H
#define POPULATIONMANAGER_H

class PopulationManager {
public:
    PopulationManager(int popA, float rateA, int popB, float rateB);
    virtual ~PopulationManager();
    int getStartingYear();
    int getIntersectionYear();
    int getTotalYearsPassed();
private:
    void projection();
    void incrementIntersectionYear();
    int popA = 0, popB = 0;
    float rateA = 0.0, rateB = 0.0;
    const int STARTING_YEAR = 2020;
    int intersectionYear = 2020;
    
    
    

};

#endif /* POPULATIONMANAGER_H */

