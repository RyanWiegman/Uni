#include <stdio.h>
double transaction(int param, double amount) {
	static double balance = 0.00;

	if(param == 1){
		balance += amount;
		return 0;
	}

	if(param == 0){
                balance -= amount;
                return 0;
        }

	if(param == 2){
                return balance;
        }
}

double convert_cash( int dollars, int cents) {

	return (float)dollars + cents/100.00;
}

void process_day( int counter) {

	if (counter == 0)
		return;

	double balance;
	if (counter == -1) {
		printf("Enter Initial Balance (USD): ");
		scanf("%lf", &balance);
		transaction(1, balance);
		printf("Enter the number of days: ");
	        scanf("%d", &counter);

	}

	process_day(counter - 1);

	int sdollars, scents;
	int rdollars, rcents;
	printf("Business Day %d\n", counter);
	printf("Spending: ");
        scanf("%d%d", &sdollars, &scents);
        printf("Revenue: ");
        scanf("%d%d", &rdollars, &rcents);

	float dayspending = convert_cash(sdollars, scents);
	float daysrevenue = convert_cash(rdollars, rcents);
	printf("Day's Net: %.2f\n", daysrevenue - dayspending);

	float transreturn = transaction(1,daysrevenue-dayspending);

	printf("**********************\n");
	printf("Overall Balance: %.2f\n", transaction(2,0));
	printf("**********************\n");

}

int main() {
	process_day(-1);
	return 0;
}
