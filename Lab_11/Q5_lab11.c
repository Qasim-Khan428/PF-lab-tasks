#include <stdio.h>

/* Embedded nested structure: inner struct defined inside the outer one */
struct HospitalRecord {
    int  recordID;
    char ward[30];
    int  daysAdmitted;

    struct PatientInfo {
        char name[50];
        int  age;
        char bloodGroup[5];
        char condition[50];
    } patient;
};

int main() {
    struct HospitalRecord record = {
        5001, "Emergency", 3,
        {"Ahmed Raza", 45, "B+", "Cardiac Arrest"}
    };

    struct HospitalRecord *ptr = &record;

    printf("===== Emergency Admission Record =====\n");
    /* Outer members: arrow operator */
    printf("Record ID     : %d\n", ptr->recordID);
    printf("Ward          : %s\n", ptr->ward);
    printf("Days Admitted : %d\n", ptr->daysAdmitted);

    /* Inner members: arrow + dot operator */
    printf("Patient Name  : %s\n", ptr->patient.name);
    printf("Age           : %d\n", ptr->patient.age);
    printf("Blood Group   : %s\n", ptr->patient.bloodGroup);
    printf("Condition     : %s\n", ptr->patient.condition);
    return 0;
}
