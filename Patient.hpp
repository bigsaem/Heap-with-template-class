//
// Created by bigsaem on 2019-12-06.
//

#ifndef LAB10_PATIENT_HPP
#define LAB10_PATIENT_HPP

#include "string"
using namespace std;
class Patient{
    string name;
int severity;
public:
    Patient(int severity, string name):severity(severity), name(name){};
    int getSeverity(){
        return severity;
    }
    string getName() {
        return name;
    }
    friend bool operator<(const Patient& l, const Patient& r)
    {
        return l.severity< r.severity; // keep the same order
    }
    friend bool operator>(const Patient& l, const Patient& r)
    {
        return l.severity> r.severity; // keep the same order
    }
    ~Patient(){
        cout<<name<< " got recovered. Left the hospital"<<endl;
    };
};
#endif //LAB10_PATIENT_HPP
