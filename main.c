#include <stdio.h>

int main(void){
    int number_of_shares;
    float value_of_trade, price_per_share, commission, rival_commission;
    program_start:
    printf("Enter the number of shares: ");
    scanf("%d", &number_of_shares);
    printf("Enter the price per share: ");
    scanf("%f", &price_per_share);

    value_of_trade = price_per_share * number_of_shares;
    printf("The total value of trade is      : $%.2f\n", value_of_trade);

    //Our commission
    if(value_of_trade < 2500 && value_of_trade > 0)
        commission = value_of_trade * 1.7f / 100 + 30;
    else if(value_of_trade >= 2500 && value_of_trade < 6250)
        commission = value_of_trade * 0.66f / 100 + 56;
    else if(value_of_trade >= 6250 && value_of_trade < 20000)
        commission = value_of_trade * 0.34f / 100 + 76;
    else if(value_of_trade >= 20000 && value_of_trade < 50000)
        commission = value_of_trade * 0.22f / 100 + 100;
    else if(value_of_trade >= 50000 && value_of_trade < 500000)
        commission = value_of_trade * 0.11f / 100 + 155;
    else if(value_of_trade >= 500000)
        commission = value_of_trade * 0.09f / 100 + 255;
    else{
        printf("Wrong input! try again!\n");
        goto program_start;
    }
    if(commission < 39)
        commission = 39;

    //Rival commission
    if(number_of_shares < 2000 && number_of_shares > 0)
        rival_commission = 33 + number_of_shares * 0.3f;
    else if(number_of_shares >= 2000)
        rival_commission = 33 + number_of_shares * 0.2f;

    printf("The commission by our broker     : $%.2f\n", commission);
    printf("The commission by a rival broker : $%.2f\n", rival_commission);

    return 0;
}
