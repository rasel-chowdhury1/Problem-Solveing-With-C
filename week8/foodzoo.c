#include "stdio.h"
#include <stdbool.h>
struct Food
{
    char f_name[100];
    double price;
    double tax;
    int f_code;
};

// Food list input kora hocche-->
struct Food food_list_input()
{
    struct Food food_input;
    printf("Enter Food Name, Price and Food code: ");
    scanf(" %s %lf %d", &food_input.f_name, &food_input.price, &food_input.f_code);
    food_input.tax = food_input.price * 0.05;
    return food_input;
}

// Food list print kora hocche-->
void Food_display(struct Food fud[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n");
        printf(".......\n");
        printf("Food No.%d->\n", i+1);
        printf("Food Name: %s\n", fud[i].f_name);
        printf("Food Price: %.2lfTk.\n", fud[i].price);
        printf("Food Tax: %.2lfTk.\n", fud[i].tax);
        printf("Food Code: %d\n", fud[i].f_code);
    }
}

// Food code matching hoiche kina check kora-->
bool check_food_code(struct Food fudcode[], int size, int code)
{
    bool check = false;
    for (int i = 0; i < size; i++)
    {
        if (fudcode[i].f_code == code)
        {
            check = true;
            break;
        }
    }
    return check;
}

// Ordered food print korbo-->
void output_ordered_food(struct Food foodlist[], int size, int orderfood[], int order_size)
{
    double total_price = 0;
    double total_tax = 0;
    double price_with_tax = 0;

    for (int i = 0; i < order_size; i++)
    {
        int food_code = orderfood[i];
        struct Food order_list;
        for (int j = 0; j < size; j++)
        {
            if (foodlist[j].f_code == food_code)
            {
                order_list = foodlist[j];
            }
        }
        printf("Order No.%d: Food name: %s, Price: %.2lfTk, Tax: %.2lfTk.\n", i+1, order_list.f_name, order_list.price, order_list.tax);

        // Price counting:
        total_tax += order_list.tax;
        total_price += order_list.price;
        price_with_tax = total_price + total_tax;
    }
    printf("\nYour Food Price: %.2lfTk. and Tax: %.2lfTk.\nTotal Price = %.2lfTk.\n", total_price, total_tax, price_with_tax);
}

int main()
{
    printf("Food List: ");
    int n;
    scanf("%d", &n);

    struct Food List[n];

    for (int i = 0; i < n; i++)
    {
        List[i] = food_list_input();
    }

    Food_display(List, n);
    printf("\n");

    int ordered_food[100];
    int index = 0;

    printf("Order your food by using food code or cencel press 0: ");
    int order_fcode;
    while (scanf("%d", &order_fcode))
    {
        if (order_fcode == 0)
        {
            break;
        }
        else
        {
            if (check_food_code(List, n, order_fcode) == false)
            {
                printf("Invalid Food Code, Please try again.\n");
                Food_display(List, n);
                printf("\n");
                printf("Order your food by using food code or cencel press 0: ");
                scanf("%d", &order_fcode);
                if (order_fcode == 0)
                {
                    break;
                }
            }
            else
            {
                ordered_food[index] = order_fcode;
                index++;
            }
            Food_display(List, n);
            printf("\n");
            printf("Order your food by using food code or cencel press 0: ");
        }
    }
    printf("\nOrdered Food list:\n");
    output_ordered_food(List, n, ordered_food, index);
}