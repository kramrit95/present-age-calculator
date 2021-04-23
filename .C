#include<stdio.h>

void findAge(int current_date ,int current_month, int current_year,int birth_date, int birth_month, int birth_year)
{
	int month[]={ 31,28,31,30,31,30,31,31,30,31,30,31};
	if(birth_date>current_date)
	{
		current_date=current_date+month[birth_month-1];
		current_month=current_month-1;
	
		
	}
	if(birth_month>current_month)
	{
		current_year=current_year-1;
		current_month=current_month+12;
	}
	int cal_date=current_date-birth_date;
	int cal_month=current_month-birth_month;
	int cal_year=current_year-birth_year;
	printf("present age  is date:%d month: %d year: %d\n",cal_year,cal_month,cal_date);
}
int main(){
	int current_date;
	int current_month;
	int current_year;
	printf("enter the current date \n");
	scanf("%d",&current_date);
	printf("enter the current month\n");
	
	scanf("%d",&current_month);
	printf("enter the currrent year\n");
	scanf("%d",&current_year);
	int birth_date;
	int birth_month;
	int birth_year;
	printf("enter the birth date\n");
	scanf("%d",&birth_date);
	printf("enter the birth month\n");
	
	scanf("%d",&birth_month);
	printf("enter the birth year\n");
	scanf("%d",&birth_year);
	
findAge(current_date,current_month,current_year,birth_date,birth_month,birth_year);
	return 0;
	
}
