#include <stdio.h>

int main() {
    int id, units;
    char customer_name[50];
    float bill, surcharge, net_bill;

    printf("Enter Customer ID: ");
    scanf("%d", &id);
    printf("Enter Customer Name: ");
    scanf("%s", customer_name);
    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 199) {
        bill = units * 1.20;
    } else if (units >= 200 && units < 400) {
        bill = units * 1.50;
    } else if (units >= 400 && units < 600) {
        bill = units * 1.80;
    } else {
        bill = units * 2.00;
    }

    if (bill > 400) {
        surcharge = bill * 0.15;
    } else {
        surcharge = 0;
    }

    net_bill = bill + surcharge;
    if (net_bill < 100) {
        net_bill = 100;
    }

    printf("Customer IDNO: %d\n", id);
    printf("Customer Name: %s\n", customer_name);
    printf("Unit Consumed: %d\n", units);
    printf("bill Charges @Rs. %.2f per unit: %.2f\n", bill / units, bill);
    printf("Surcharge bill: %.2f\n", surcharge);
    printf("Net bill Paid By the Customer: %.2f\n", net_bill);

    return 0;
}
