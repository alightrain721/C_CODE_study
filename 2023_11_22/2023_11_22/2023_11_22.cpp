#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;// c= 6   a = 6
//	b = ++c, c++, ++a, a++;//b = 7   c = 8,   a = 6 +1 =7	 a = 8
//	b += a++ + c; // b = b + (a++ + c)  7 + (8 + 8)= 23   b = 23   a = 9
////	printf("a = %d b = %d c = %d\n:", a, b, c);
////	return 0;                       //  a = 9  b = 23 c = 8
//}
//#include <stdio.h>
//int main()
//{
//    int a = 7;
//    int b = 2;
//    float c = 2.0f;
//    printf("%d\n", 3);// 3 
//    printf("%f\n", a / c);//  7 / 2.0  = 3.50000
//
//    return 0;
//}
//#include <stdio.h>

//int main() 
//{
//    int a;
//    while (scanf("%d", &a) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        if (a >= 140)
//        {
//            printf("Genius\n");
//       }
//    }
//    return 0;
//}
#include <stdio.h>

//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF)
//    { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        if (a > b)
//        {
//            printf("%d>%d\n", a, b);
//        }
//        else if (a < b)
//        {
//            printf("%d<%d\n", a, b);
//        }
//        else
//        {
//            printf("%d=%d\n", a, b);
//        }
//    }
//    return 0;
//}
#include <stdio.h>

int main() {
    int a;
    while (scanf("%d", &a) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to 
        for (int b = 1;b <= a;b++)
        {
            printf("*");
       }printf("\n");
    }
    return 0;
}