// Cinema Ticket Booking
#include <stdio.h>

int main() {
    int members;
    float totalBill, discount = 0, finalBill;

    printf("How many members in the group: ");
    scanf("%d", &members);

    totalBill = members * 200;  // total without discount

    if (members > 5) {
        discount = totalBill * 0.10;  // 10% discount
    }
    finalBill = totalBill - discount;
    

    printf("Total Members: %d\n", members);
    printf("Total Bill (without discount): %.2f Rs\n", totalBill);
    printf("Discount: %.2f Rs\n", discount);
    printf("Final Payable Bill: %.2f Rs\n", finalBill);

    return 0;
}
