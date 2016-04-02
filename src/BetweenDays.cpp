/*
Q4: Two dates are given in a 8 node single linked list form,where each node
has one digit only, dates 01-31, months 01-12, year 0000-9999.

Find the number of days in between those two dates .[Exclusive]

Ex : Date1:  0->1->0->1->2->0->0->4 .
     Date2 : 0->5->0->1->2->0->0->4 should return 3 .
As there are 3 days between Jan1st 2004 and Jan 5th 2004.

Ex 2 : Date1 : 3->1->1->2->2->0->1->2.
       Date2 : 0->2->0->1->2->0->1->3 should return 1 .
(There is only one day between 31st Dec 2012 and 2nd  Jan 2013 .)

Note : Consecutive Days and Same Days should return 0;
->Return -1 for NULL Inputs .
->Between Days have to be calculated by not including start and end date .
->The SLL will have 8 Nodes in all cases . Month 9 will be represented as 09.

Difficulty : Hard 
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct node{
	int data;
	struct node *next;
};

int findDiff(node * date1, node * date2){
	int dd = 0, md = 0, yd = 0;
	//Brute force....
	//Comparind date
	dd = (abs(date1->data - date2->data)) * 10 + (abs(date1->next->data - date2->next->data));
	date1 = date1->next->next;
	date2 = date2->next->next;
	md = (abs(date1->data - date2->data)) * 10 + (abs(date1->next->data - date2->next->data));
	date1 = date1->next->next;
	date2 = date2->next->next;
	md = ((abs(date1->next->next->next->data - date2->next->next->next->data)) * 1000 + (abs(date1->next->next->data - date2->next->next->data) * 100 + (abs(date1->next->data - date2->next->data) * 10 + (abs(date1->data - date2->data));

}

int between_days(struct node *date1head, struct node *date2head){
	return -1;
}