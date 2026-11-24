#include <stdio.h>

#define TOLL_RATE 50   /* PKR per vehicle - immutable */

/* Static variables retain values across calls.
   Passing NULL prints the final report without counting a vehicle. */
void processVehicle(char vehicleType[]) {
    static int totalVehicles = 0;
    static int totalCollection = 0;

    if (vehicleType == NULL) {
        printf("\n===== Toll Plaza Collection Report =====\n");
        printf("Total Vehicles Processed : %d\n", totalVehicles);
        printf("Toll Rate per Vehicle    : %d PKR\n", TOLL_RATE);
        printf("Total Revenue Collected  : %d PKR\n", totalCollection);
        return;
    }

    totalVehicles++;
    totalCollection += TOLL_RATE;

    printf("Vehicle: %-10s | Toll: %d PKR | Vehicles so far: %d | Collection so far: %d PKR\n",
           vehicleType, TOLL_RATE, totalVehicles, totalCollection);
}

int main() {
    processVehicle("Car");
    processVehicle("Truck");
    processVehicle("Bus");
    processVehicle("Motorbike");
    processVehicle("Van");

    processVehicle(NULL);   /* final report */
    return 0;
}
