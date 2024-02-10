
// 1. Function with no arguments and no return value
// 2. Function with no arguments and a return value
// 3. Function with arguments and no return value
// 4. Function with arguments and a return value

// 1:
//  void show(void)
//  {
//      printf("Hello Phitron\n");
//  }
//  int main()
//  {
//      show();
//      return 0;
//  }

// 2:
//  int no_arg_ret_value(void)
//  {
//      int a, b;
//      scanf("%d %d",&a,&b);
//      return a+b;
//  }
//  int main()
//  {
//      int sum;
//      sum = no_arg_ret_value();
//      printf("%d\n",sum);
//      return 0;
//  }

// 3:
// #include <stdio.h>
// void argu_no_ret(int a, int b)
// {
//     if (a > b)
//         printf("Hello Phitron\n");
//     else
//         printf("Hi Phitron\n");
// }
// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     argu_no_ret(a, b);
//     return 0;
// }

// 4:
#include <stdio.h>
int argu_and_ret(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", argu_and_ret(a, b));
    return 0;
}
