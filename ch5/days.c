#include <stdio.h>

int main(void)
{	const int days_per_week = 7;
	int n, days, weeks;
	char week_str[6] = "week";
	char weeks_str[7] = "weeks";
	char day_str[4] = "day";
	char days_str[5] = "days";
	printf("Please enter the number of days:\n");
	scanf("%d", &n);
	while (n > 0) {
		weeks = n/days_per_week;
		days = n % days_per_week;
		printf("%d %s and %d %s\n", weeks, weeks == 1 ? week_str: weeks_str, days, days == 1 ? day_str: days_str);
		printf("Please enter another number of days (<= 0 to quit):\n");
		scanf("%d", &n);
	}
	printf("See you next time!\n");
	
	return 0;
}