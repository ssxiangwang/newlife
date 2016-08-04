#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void getLISA(int *pArr, int len, int* pRes); //求最长上升子序列
void getLDSA(int *pArr, int len, int* pRes); //求最长下降子序列---或者说从后往前的上升序列

void main()
{
	int arr[500],Lis[500],Lds[500];
	int len, i, t = 0,index;
	scanf("%d", &len);
	for (i = 0; i < len; i++)
		scanf("%d",&arr[i]);
	getLISA(arr,len,Lis);
	getLDSA(arr, len, Lds);
	for (i = 0; i < len; i++)
		if (t < Lis[i] + Lds[i])
		{
			t = Lis[i] + Lds[i];
			index = i;
		}
		printf("%d\n", len - Lis[index] - Lds[index]+1);
		//  system("pause");
}
void getLISA(int *pArr, int len,int *pRes)
{
	int i, j, k;
	for (i = 0; i < len; i++)
	{
		pRes[i] = 1;
		for (j = 0; j < i; j++)
			if (pArr[i]>pArr[j] && pRes[i] < (pRes[j] + 1))
				pRes[i] = pRes[j] + 1;
	}
}
void getLDSA(int *pArr, int len, int *pRes)
{
	int i, j, k;
	for (i = len-1; i >=0; i--)
	{
		pRes[i] = 1;
		for (j = len-1; j >i;j--)
			if (pArr[i]>pArr[j] && pRes[i] < (pRes[j] + 1))
				pRes[i] = pRes[j] + 1;
	}
}