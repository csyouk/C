//#include <stdio.h>
//
////
////int cal(int b)
////{
////
////	if (b == 1) return 0;
////	else if (b == 2) return 31 + cal(1);
////	else if (b == 3) return 28 + cal(2);
////	else if (b == 4) return 31 + cal(3);
////	else if (b == 5) return 30 + cal(4);
////	else if (b == 6) return 31 + cal(5);
////	else if (b == 7) return 30 + cal(6);
////	else if (b == 8) return 31 + cal(7);
////	else if (b == 9) return 31 + cal(8);
////	else if (b == 10) return 30 + cal(9);
////	else if (b == 11) return 31 + cal(10);
////	else if (b == 12) return 30 + cal(11);
////}
//
//
//int cal(int b)
//{
//	     if (b == 1 ) return 0;
//	else if (b == 2 ) return 31 + cal(--b);
//	else if (b == 3 ) return 28 + cal(--b);
//	else if (b == 4 ) return 31 + cal(--b);
//	else if (b == 5 ) return 30 + cal(--b);
//	else if (b == 6 ) return 31 + cal(--b);
//	else if (b == 7 ) return 30 + cal(--b);
//	else if (b == 8 ) return 31 + cal(--b);
//	else if (b == 9 ) return 31 + cal(--b);
//	else if (b == 10) return 30 + cal(--b);
//	else if (b == 11) return 31 + cal(--b);
//	else if (b == 12) return 30 + cal(--b);
//}
//
//
//void main(void)
//{
//
//	int a, b, c, i, j, yoon;
//	
//	scanf("%d %d %d", &a, &b, &c);
//
//	yoon = ((a % 400 == 0) || ((a % 4 == 0) && (a % 100 != 0))) ? 1 : 0;
//
//	printf("%d", cal(b) + c + yoon);
//
//	//if ((a % 400 == 0) || ((a % 4 == 0) && (a % 100 != 0)))
//
//	//{
//	//	printf("%d", cal(b) + c + 1);
//
//	//}
//	//else    printf("%d", cal(b) + c);
//
//
//}
