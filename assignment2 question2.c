#include <stdio.h>

int main ()
{
  int bookID,dueDate,returnDate,daysOverdue ;
  float fineRate,fineAmount;

    printf("Enter book ID:");
    scanf("%d", &bookID);

    printf("Enter the Due Date(in days):");
    scanf("%d", &dueDate);

    printf("Enter Return Date: ");
    scanf("%d",&returnDate);

    daysOverdue= returnDate-dueDate;
    printf("Days overdue is : %d \n", daysOverdue);
    //We only calculate fines if the book is overdue
    if(daysOverdue<=0){
            fineRate=0;
            fineAmount=0;
    }

            //Determine the fine rate based on the number of days overdue
  else if(daysOverdue<=7) {
                fineRate =20;//ksh 20 per day for up to 7 days
                fineAmount=daysOverdue*20;
  }
   else if(daysOverdue<=14) {
            fineRate=50;// Ksh 50 per day for 8 to 14 days
            7*20+(daysOverdue-7)*50;
    }
    else {
          fineRate=100;// Ksh 100 per day for 15 or more days
         (20*7)+(50*7)+((daysOverdue-14)*100);
    }

        printf("\n---Library Fine Details ---\n");
        printf("Book ID: %d \n",bookID);
        printf("Due Date :%d \n", dueDate);
        printf(";Return Date : %d \n", returnDate);
        printf("Days Overdue : %d \n", daysOverdue);
        printf("Fine Rate (Ksh per day) : %d \n", fineRate);
        printf("Total Fine Amount(Ksh per day): %d \n",fineAmount);

    return 0;
}
