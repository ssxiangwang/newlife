#include <stdlib.h>
#include "oj.h"
// ���ܣ���������������¥�ݵĳ���
// ���룺 ��
// �������
// ���أ� ��

unsigned int  GetStairNum ()
{
	unsigned int i;
	unsigned int m;
	for(i=0; ;i++ )
	{
		m = 7*i+1;
		if((0==(m%2)) && (0==(m%3)) && (0==(m%5)) && (0==(m%6)))
		{
			break;
		}
	}
	return (m-1);
}