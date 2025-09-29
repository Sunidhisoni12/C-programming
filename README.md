//percentage of the students

#include<stdio.h>

int main() {

    int Eng ,phy ,chem ,EE ,hindi ,sum , percentage;

    printf("Enter Eng no :");
    scanf("%d",&Eng);

    printf("Enter phy no :");
    scanf("%d",&phy);

    printf("Enter chem no :");
    scanf("%d",&chem);

    printf("Enter EE no :");
    scanf("%d",&EE);

    printf("Enter hindi no :");
    scanf("%d",&hindi);

    sum = Eng+phy+chem+EE+hindi;

    printf("the sum of all the subject is %d \n",sum);

    percentage= (sum)/5;

    printf("the percentage of the students is %d",percentage);

    return 0;
}
