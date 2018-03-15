#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include "D:\GitHub\CEN_Library\Palin.h"

int main()
{

	int num, cnt = 0;
	for (int i = 0;i<5;i++)
	{
		num = getNum();
		if (palindrome(num))
			cnt++;
	}


	showResult(cnt);
	return 0;
}