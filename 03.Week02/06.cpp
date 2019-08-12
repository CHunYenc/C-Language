/*
06.xx涮涮鍋想要一個能兌換金額的程式，請寫一個程式讓使用者輸入準備兌換的金額共4位數
，並依照一千元、五百元、一百元，及50元、10元、5元及1元硬幣的順序，先兌換成千元大鈔，
剩下的金額才兌換五百元、一百元等貨幣，最後再將剩餘的錢兌換成50元、10元、5元及1元等其他貨幣，
最後螢幕畫面需顯示依照面額由大到小依序兌換的數量。 
    例如: 
請輸入想要兌換的金額:2763  (此數字由使用者自己隨意輸入)
1000元 2個
500元 1個
100元 2個
50元 1個
10元 1個
5元 0個
1元 3個
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c, d, e;
	printf("請輸入想要兌換的金額: ");
	scanf("%d", &a);
	fflush(stdin);

	printf("1000元 \t%d個\n", a / 1000);
	printf("500元 \t%d個\n", a % 1000 / 500);
	printf("100元 \t%d個\n", a % 1000 % 500 / 100);
	printf("50元 \t%d個\n", a % 1000 % 500 % 100 / 50);
	printf("10元 \t%d個\n", a % 1000 % 500 % 100 % 50 / 10);
	printf("5元 \t%d個 \n", a % 1000 % 500 % 100 % 50 % 10 / 5);
	printf("1元 \t%d個 \n", a % 1000 % 500 % 100 % 50 % 10 % 5 / 1);

	system("pause");
	return 0;
}
