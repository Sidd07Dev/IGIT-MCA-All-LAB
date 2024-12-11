/*An electricity board charges the following rates for the use of electricity.
− For the first 200 units: 80 paise per unit
− For the next 100 units: Rs. 1.30 per unit
− Beyond 300 units: Rs. 2.00 per unit
All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more that Rs. 400, then
an additional surcharge of 15% of total amount is charged. Write a program to read the name of a
consumer and the number of units consumed and print the charge with his/her name.*/
#include <stdio.h>

int main() {
    char name[50];
    int units;
    float charge = 0.0, total_amount = 0.0, surcharge = 0.0;

    printf("Enter consumer's name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 200) {
        charge = units * 0.80;
    } else if (units <= 300) {
        charge = (200 * 0.80) + ((units - 200) * 1.30);
    } else {
        charge = (200 * 0.80) + (100 * 1.30) + ((units - 300) * 2.00);
    }

    total_amount = charge + 100;

    if (total_amount > 400) {
        surcharge = total_amount * 0.15;
        total_amount += surcharge;
    }

    printf("\nElectricity Bill\n");
    printf("-----------------------------\n");
    printf("Consumer Name: %s", name);
    printf("Units Consumed: %d\n", units);
    printf("Charge: Rs. %.2f\n", charge);
    printf("Meter Charge: Rs. 100.00\n");
    if (surcharge > 0)
        printf("Surcharge: Rs. %.2f\n", surcharge);
    printf("Total Amount: Rs. %.2f\n", total_amount);

    return 0;
}
