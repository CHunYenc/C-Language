/*
HW8-2.請試寫一個遞迴函數int sum(int n)，
讓使用者從主程式選單中選擇本題後，
會先讓使用者在主程式中輸入一個介於10~20的數字n，
如果超過此範圍會產生錯誤訊息，若符合10~20的數字，
則主程式會呼叫sum(n)，然後sum()函數會利用遞迴函數(函數自己呼叫自己的方式)，
計算出1*2 + 2*3 + 3*4 + 4*5 + ....+(n-1)* n 的結果，
並將結果回傳至主程式中顯示。執行完成後，使用者按任意健會返回主選單，
讓使用者繼續選擇要執行的其它題目。[學號最後一碼為偶數的同學請作答]
*/

#include <stdio.h>
#include <stdlib.h>
int sum(int n);
int main()
{
	int n=0,i=0;	//宣告變數 n ,i 
	printf("請輸入10~20的數字：");	//輸出  請輸入10~20的數字：
	scanf("%d",&n);	//使用者輸入數值至n 
	fflush(stdin);	//清空暫存 
	
	if(n<10 || n>20)	//如果 10 ~ 20 以內 
		printf("輸入的值不在範圍內，請重新輸入。\n");	//輸出 輸入的值不在範圍內，請重新輸入。
	else	//否則 
		printf("1*2 + 2*3 + 3*4 + 4*5 + ....+(n-1)* n = %d\n",sum(n));	//印出 1*2 + 2*3 + 3*4 + 4*5 + ....+(n-1)* n 的結果
	
	system("pause");
	return 0;
}

int sum(int n)	//自訂函數sum
{
	if(n==2)	//如果 n=2 
	{	
		return 2;	//回傳 2 
	}	
	return sum(n-1)+(n-1)*n;	//回傳 自訂函數 + (n-1) *n  遞迴 
}



