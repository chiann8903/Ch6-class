#include<stdio.h>
#include<stdlib.h>
main() {
	typedef struct _dates {
		int year;
		int month;
		int day;
	}dates;
	typedef struct _order {
		char num[11];
		dates date;
		int amount;
	}order;
	order o1 = { "AHK08A1024",{2008,10,5},886686688 };
	order o2 = { "USA08A1025",{2008,11,12},1234567 };
	order o3 = { "UNK08A1028",{2008,12,30},98765432 };
	printf("           ******************\n");
	printf("           *    �q����    *\n");
	printf("           ******************\n\n");
	printf("==============================================\n");
	printf("�q��s��       �q�f���      �q�f���B\n");
	printf("==============================================\n");
	printf("%10s %8d/%02d/%02d    NT$%10d\n", o1.num, o1.date.year, o1.date.month, o1.date.day, o1.amount);
	printf("%10s %8d/%02d/%02d    US$%10d\n", o2.num, o2.date.year, o2.date.month, o2.date.day, o2.amount);
	printf("%10s %8d/%02d/%02d    HK$%10d\n", o3.num, o3.date.year, o3.date.month, o3.date.day, o3.amount);
	printf("\n\n");
	system("pause");
}