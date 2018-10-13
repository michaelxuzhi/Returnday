#include "iostream.h"

typedef struct date
{
 int year;
 int month;
 int day;
}Date;

//����ָ���·�������������
int daysOfMonth(int year, int month)
{
 int days;

 if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
  days = 31;
 else if(month==4 || month==6 || month==9 || month==11)
  days = 30;
 else if(year%400==0 || (year%4==0 && year%100!=0))
  days = 29;
 else
  days = 28;

 return days;
}

//����ĳ������һ��ĵڼ���
int day(Date now)
{
 int m, sum = 0;
 for(m=1; m<now.month; m++)
  sum += daysOfMonth(now.year, m);
 sum += now.day;

 return sum;
}

void main()
{
 Date now;
 now.year = 2012;
 now.month = 12;
 now.day = 31;
 cout<<now.year<<"��"<<now.month<<"��"<<now.day<<"������һ��ĵ�"<<day(now)<<"��"<<endl;
}