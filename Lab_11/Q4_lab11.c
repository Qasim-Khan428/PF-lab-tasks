#include <stdio.h>

/* Separate nested structure approach: Address defined on its own */
struct Address {
    char City[30];
    int  ZipCode;
    char State[30];
};

struct Student {
    int            RollNo;
    char           Name[50];
    float          CGPA;
    struct Address studentAddress;   /* embedded Address member */
};

int main() {
    struct Student student1 = {
        1001, "Ali Khan", 3.65f,
        {"Karachi", 74000, "Sindh"}
    };

    printf("===== Student Profile =====\n");
    printf("Roll No : %d\n", student1.RollNo);
    printf("Name    : %s\n", student1.Name);
    printf("CGPA    : %.2f\n", student1.CGPA);
    printf("City    : %s\n", student1.studentAddress.City);
    printf("ZipCode : %d\n", student1.studentAddress.ZipCode);
    printf("State   : %s\n", student1.studentAddress.State);
    return 0;
}
