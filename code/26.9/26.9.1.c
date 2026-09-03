#include<stdio.h>
#define TEX 0.06
float sum(int num,float price)
{
    return num*price*(1+TEX);
}
int main()
{
    char name[20],day[20];
    printf("请输入姓名：");
    scanf("%s", name);
    printf("请输入今天的日期：");
    scanf("%s", day);
    printf("输入电阻数量和LED数量：");
    int num_R,num_LED;
    float price_R,price_LED;
    scanf("%d %d", &num_R, &num_LED);
    printf("输入电阻单价和LED单价：");
    scanf("%f %f", &price_R, &price_LED);
    printf("输入运费");
    int sum_transport;
    scanf("%d", &sum_transport);
    printf("电阻总价为：%.2f\n", sum(num_R, price_R));
    printf("LED总价为：%.2f\n", sum(num_LED, price_LED));
    printf("总价为：%.2f\n", sum(num_R, price_R) + sum(num_LED, price_LED) + sum_transport);
    return 0;
}