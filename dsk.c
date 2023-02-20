//int* printNumbers(int n, int* returnSize) {
//    int m = 1;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        m *= 10;
//    }
//    int* a = (int*)malloc((m - 1) * sizeof(int));
//    *returnSize = m - 1;
//    for (i = 1; i < m; i++)
//    {
//        a[i - 1] = i;
//    }
//    return a;
//}
#include<stdio.h>
//int main() {
//    int year = 0;
//    int month = 0;
//    int day = 0;
//    scanf("%d%d%d", &year, &month, &day);
//    int monthsize[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//        monthsize[1]++;
//    int time = 0;
//    for (int i = 0; i < month - 1; i++)
//    {
//        time += monthsize[i];
//    }
//    time += day;
//    printf("%d", time);
//    return 0;
//}
