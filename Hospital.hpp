//
// Created by bigsaem on 2019-12-06.
//

#ifndef LAB10_HOSPITAL_HPP
#define LAB10_HOSPITAL_HPP

#include <vector>
#include "Patient.hpp"
class Hospital{
    std::vector<Patient> plist;
    static Hospital* hospital;
    Hospital()=default;
public:

    static Hospital* getHospital(){
        if(!hospital){
            hospital = new Hospital();
        }
        return hospital;
    }
    vector<Patient> getPlist(){
        return plist;
    };
    void addPatient(Patient patient){
        plist.push_back(patient);
    }
    void addPatient(int severity, string name){
        Patient patient{severity, name};
        plist.push_back(patient);
    }
    void printPatients(){

        for(std::vector<Patient>::iterator it = plist.begin(); it <plist.end(); ++it) {
            cout << it->getName() <<" "<<it->getSeverity()<< endl;
        }
    }
    void acceptHeap(vector<Patient> list){
        plist = list;
    }
};
Hospital *Hospital::hospital = 0;
#endif //LAB10_HOSPITAL_HPP
