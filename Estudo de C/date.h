// file Date.h

#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

typedef struct{
	int day;
	int month;
	int year;	
}Date;

Date *createDate(int d, int m, int y);

long year2Day(Date *d);

long year2Month(Date *d);

long day2Month(Date *d);

long day2Year(Date *d);

Date *readDate();

void showDate(Date *d);

#endif // DATE_H_INCLUDED
