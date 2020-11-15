/****

Write a code to calculate the cost of insurance depending on the user age. For any driver younger than 25 the yearly insurance cost is $5000/year. 
After their 25th birthday the insurance drop to $3500.  If the record of good driving continues, the driver will get a 2% discount.  
Between 35 and 50, the insurance will drop to $2,800.  
After 50, the insurance will stay steady at a cost of $1500 a year. - 20 points


****/
#include <stdio.h>

int main()
{
    int userage;
    int driversaftey;
    int base_insurance_cost;
    double discount_insurance_cost;

    printf("please enter your age");
    scanf("%d", &userage);
    printf("you are %d years old",userage);

    if (userage < 25)
    {
        printf("your insurance cost is $5000 per year");
    }

    if (25 <= userage <35)
    {
        printf("your base insurance cost is 3500.");
        printf("have you been a responible driver(type one for yes and zero for no)?");
        scanf("%d", &driversaftey);
    }
    
    if (driversaftey = 1 )
    {
        discount_insurance_cost = base_insurance_cost * .98
        printf("%lf",discount_insurance_cost );
    }
    
    



    return (0);
}