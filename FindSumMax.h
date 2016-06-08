#ifndef __FINDSUMAX_H__
#define __FINDSUMAX_H__
#include<assert.h>

int FindSumMax(int* a, int size)
{
	assert(a);
	assert(size > 0);
	int max = 0x80000000;//���ȫΪ������������ÿ���max�ĳ�ֵ
	int cursum = 0;

	//����Ҫ��ʱ�临�Ӷ�ΪO(N)������ֻ�ܱ���һ������
	for (int i = 0; i < size; i++)
	{
		//�����ǰ�ĺͱ�0С����ô���¿�ʼ�ۼ�
		if (cursum <= 0)
			cursum = a[i];
		else
			cursum += a[i];
		//�����ǰ���ۼ�ֵ����max������ǰ�ۼӵĺͱ��浽max�С�
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