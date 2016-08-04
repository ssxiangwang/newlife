#include <stdlib.h>
#include "oj.h"
// 功能：计算满足条件的楼梯的长度
// 输入： 无
// 输出：无
// 返回： 无

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