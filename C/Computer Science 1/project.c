#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double total_interest_sum( double loan_amount, double interest_rate, double term_years) {

	double payment, m_rate, months, interest, interest_pay = 0, balance, principal;

	m_rate = interest_rate / (12 * 100);
        months = 180;
        payment = loan_amount * m_rate * pow((1+m_rate), months) / (pow((1+m_rate), months)-1);
        balance = loan_amount;

	for(int year = 1; year <= term_years; year++) {
                int x = 1;

                while(x <= 12) {
                        interest = balance * m_rate;
                        principal = payment - interest;
                        balance -= principal;
                        interest_pay += interest;
                        x++;
                }
	}
return interest_pay;
}


void output_short_format(double loan_amount, double interest_rate, double term_years) {

double payment, m_rate, months, interest, interest_pay = 0, balance, principal;

	printf("----------------------------------------\n");
	printf("%25s","LOAN TERMS\n");
	printf("----------------------------------------\n");
        printf("Loan Amount:\t %14.0f \n",loan_amount);
        printf("Interest Rate:\t %13.2lf%% \n",interest_rate);
        printf("Term:\t\t%9.0f years\n",term_years);
	printf("----------------------------------------\n\n");

	m_rate = interest_rate / (12 * 100);
	months = 180;
	payment = loan_amount * m_rate * pow((1+m_rate), months) / (pow((1+m_rate), months)-1);
	balance = loan_amount;

	for(int year = 1; year <= term_years; year++) {
		int x = 1;

		while(x <= 12) {
			interest = balance * m_rate;
			principal = payment - interest;
			balance -= principal;
			interest_pay += interest;
			x++;
		}
	}

	printf("Monthly payment is:%17.2lf \n",payment);
	printf("Total interest is:%18.2lf \n", interest_pay);
	printf("Total amount paid is:%15.2lf \n",loan_amount + interest_pay);
}


void output_amortized( double loan_amount, double interest_rate, double term_year) {


	double m_rate, payment, balance, principal = 0, interest = 0, total_interest = 0, total_principal = 0;
	int months;

	m_rate= interest_rate / (12 * 100);
	payment = loan_amount * m_rate * pow((1+m_rate), (12 * term_year)) / (pow((1+m_rate), (12 * term_year))-1);
        balance = loan_amount;

	for(int year = 1; year <= term_year; year++) {
		printf("-----------------------------------------------------------------\n");
		printf("Year  Month  Interest  Principal  Balance  |  INTEREST  PRINCIPAL\n");
		printf("-----------------------------------------------------------------\n");

		for(months = 1; months <= 12; months++) {
			interest = balance * m_rate;
			principal = payment - interest;
			balance -= principal;
			total_interest += interest;
			total_principal += principal;

			if(months == 1){
				printf("%4d %6d %9d %10d %8d  | %9d %9d\n", year, months, (int)round(interest), (int)round(principal), (int)round(balance), (int)round(total_interest), (int)round(total_principal));
			}
			else{
				printf("%11d %9d %10d %8d  | %9d %9d\n", months, (int)round(interest), (int)round(principal), (int)round(balance), (int)round(total_interest), (int)round(total_principal));
			}
		}
	}
}


void output_extra_monthly( double loan_amount, double interest_rate, double term_year, double extra){


	double m_rate, payment, balance, principal = 0, interest = 0, total_interest = 0, total_principal = 0, year_left, total_interest_saving;
        int months, mon_counter = 0, months_left;

        m_rate= interest_rate / (12 * 100);
        payment = loan_amount * m_rate * pow((1+m_rate), (12 * term_year)) / (pow((1+m_rate), (12 * term_year))-1);
        balance = loan_amount;

	for(int year = 1; year <= term_year; year++) {
                printf("------------------------------------------------------------------------\n");
                printf("Year  Month  Interest  Principal  Balance  |  INTEREST  PRINCIPAL  EXTRA\n");
                printf("------------------------------------------------------------------------\n");

		for(months = 1; months <= 12; months++) {
                        interest = balance * m_rate;
                        principal = payment - interest;
                        balance = balance - (principal + extra);
                        total_interest += interest;
                        total_principal = total_principal + principal + extra;
			mon_counter++;

			 if(months == 1){
        			printf("%4d %6d %9d %10d %8d  | %9d %10d %6d\n", year, months, (int)round(interest), (int)round(principal), (int)round(balance), (int)round(total_interest), (int)round(total_principal), (int)extra);
                        }
                        else{
                   		printf("%11d %9d %10d %8d  | %9d %10d %6d\n", months, (int)round(interest), (int)round(principal), (int)round(balance), (int)round(total_interest), (int)round(total_principal), (int)extra);
                        }
			if( balance < 0){
				break;
			}
		}

		if(balance < 0){
			months_left = (term_year * 12) - mon_counter;
			year_left = months_left / 12.0;
			total_interest_saving = total_interest_sum(loan_amount, interest_rate, term_year) - total_interest;

			printf("The payments are finished %d months (%.1lf years) earlier!\n", months_left, year_left);
			printf("The interest saving is %d\n", (int)round(total_interest_saving));
			break;
		}
	}
}


void output_extra_yearly( double loan_amount, double interest_rate, double term_year, double extra) {

	double m_rate, payment, balance, principal = 0, interest = 0, total_interest = 0, total_principal = 0, year_left, total_interest_saving;
        int months, mon_counter = 0, months_left;

        m_rate= interest_rate / (12 * 100);
        payment = loan_amount * m_rate * pow((1+m_rate), (12 * term_year)) / (pow((1+m_rate), (12 * term_year))-1);
        balance = loan_amount;

	for(int year = 1; year <= term_year; year++) {
               printf("------------------------------------------------------------------------\n");
               printf("Year  Month  Interest  Principal  Balance  |  INTEREST  PRINCIPAL  EXTRA\n");
               printf("------------------------------------------------------------------------\n");

               for(months = 1; months <= 12; months++) {
		        interest = balance * m_rate;
			principal = payment - interest;

			if(months == 12){
				balance = balance - (principal + extra);
				total_principal = total_principal + principal + extra;
			}
			else{
				balance -= principal;
				total_principal += principal;
			}

			total_interest += interest;
			mon_counter++;

			if(months == 1){
				printf("%4d %6d %9d %10d %8d  | %9d %10d \n", year, months, (int)round(interest), (int)round(principal), (int)round(balance), (int)round(total_interest), (int)round(total_principal));
                        }
                        else{
				if(months == 12){
					printf("%11d %9d %10d %8d  | %9d %10d %6d \n", months, (int)round(interest), (int)round(principal), (int)round(balance), (int)round(total_interest), (int)round(total_principal), (int)extra);
				}
				else{
					printf("%11d %9d %10d %8d  | %9d %10d \n", months, (int)round(interest), (int)round(principal), (int)round(balance), (int)round(total_interest), (int)round(total_principal));
                        	}
			}
                        if( balance < 0){
                                break;
                        }
                }

                if(balance < 0){
                        months_left = (term_year * 12) - mon_counter;
                        year_left = months_left / 12.0;
                        total_interest_saving = total_interest_sum(loan_amount, interest_rate, term_year) - total_interest;

                        printf("The payments are finished %d months (%.1lf years) earlier!\n", months_left, year_left);
                        printf("The interest saving is %d\n", (int)round(total_interest_saving));
                        break;
                }
        }
}




int main() {

	int option;

	do{
		printf("\n\n1. Short Format \n");
		printf("2. Amortized Schedule \n");
		printf("3. Early Monthly Payments \n");
		printf("4. Early Yearly Payments \n");
		printf("5. Exit \n");

		printf("Enter choice: ");
		scanf("%d", &option);
		printf("\n\n");

//	system("cls");

		switch(option) {

		case 1:
			output_short_format(150000, 4.00, 15);
			break;
		case 2:
			output_amortized( 150000, 4.00, 15);
			break;
		case 3:
			output_extra_monthly(150000, 4.00, 15, 200);
			break;
		case 4:
			output_extra_yearly(150000, 4.00, 15, 3000);
			break;
		case 5:
			break;
		default:
			printf("Invalid choice.");
		}
	} while(option != 5);

return 0;
}
