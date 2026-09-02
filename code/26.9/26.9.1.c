#include<stdio.h>
int main()
{
    printf("%s","Hello,World!");
    int age = 20 ,weight = 63, height =165;
    char name[] = "sun hailin";
    char kg[] ="kg", cm[] = "cm",sui[] = "岁";
    printf("\n%s %s \n%s %d %s \n%s %d %s \n%s %d %s","姓名", name ,"年龄",age,sui,"身高",height,cm,"体重",weight,kg);
    return 0;
}