#ifndef __FINDSUMAX_H__
#define __FINDSUMAX_H__
#include<assert.h>

int FindSumMax(int* a, int size)
{
	assert(a);
	assert(size > 0);
	int max = 0x80000000;//如果全为负数的情况，得考虑max的初值
	int cursum = 0;

	//由于要求时间复杂度为O(N)，所以只能遍历一次数组
	for (int i = 0; i < size; i++)
	{
		//如果当前的和比0小，那么重新开始累加
		if (cursum <= 0)
			cursum = a[i];
		else
			cursum += a[i];
		//如果当前的累加值大于max，将当前累加的和保存到max中。
		if (cursum > max)
		{
			max = cursum;
		}
		
	}

	return max;
}






void test1()
{
	int a[] = { -1, -2, -3, -10, -4, 7, 2, -5 };
	int ret = FindSumMax(a, 8);
	cout << ret << endl;
}

#endif  //__FINDSUMAX_H__