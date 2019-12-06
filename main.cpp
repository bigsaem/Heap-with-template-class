#include <iostream>
#include "heap.hpp"
#include "Hospital.hpp"
int main() {
    //Singleton is applied to this program.

    Hospital* hospital = Hospital::getHospital();
    hospital->addPatient(3, "Sam");
    hospital->addPatient(5, "Chloe");
    hospital->addPatient(2, "Amir");
    hospital->addPatient(4, "Jameson");
    hospital->printPatients();
    heap<Patient, std::vector<Patient>> heap(hospital->getPlist());
    hospital->acceptHeap(heap.getList());
    hospital->printPatients();

    return 0;
}
