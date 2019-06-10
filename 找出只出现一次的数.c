/*位操作基本概念
按位与运算符（&）：

仅当两个操作数都为1时，结果为1，否则为0。参与运算的数以补码方式出现。

【特殊用法】：

清零。如果想将一个单元清零，即使其全部二进制位为0，只要与一个各位都为零的数值相与，结果为零。
取一个数中指定位。找一个数，对应X要取的位，该数的对应位为1，其余位为零，此数与X进行“与运算”可以得到X中的指定位。
按位或运算符（|）：

仅当两个操作数都为0时，结果为0，否则为1。

【特殊用法】：

常用来对一个数据的某些位置1。找到一个数，对应X要置1的位，该数的对应位为1，其余位为零。此数与X相或可使X中的某些位置1。
异或运算符（^）：

参加运算的两个对象，如果两个相应位为“异”（值不同），则该位结果为1，否则为0。

【特殊用法】：

使特定位翻转 。找一个数，对应X要翻转的各位，该数的对应位为1，其余位为零，此数与X对应位异或即可。
与0相异或，保留原值。
取反运算符（~）：

对一个二进制数按位取反，即将0变1，1变0。

左移运算符（<<）：

将一个运算对象的各二进制位全部左移若干位（左边的二进制位丢弃，右边补0）。

若左移时舍弃的高位不包含1，则每左移一位，相当于该数乘以2。

右移运算符（>>）：

将一个数的各二进制位全部右移若干位，正数左补0，负数左补1，右边丢弃。

操作数每右移一位，相当于该数除以2。
*/













//找出只出现一次的2个数，其余数均出现2次
#include<stdio.h>
#include<Windows.h>
#include<assert.h>

#if 1
void find_data(int arr[], int size) {
	assert(arr);
	assert(size > 0);

	int res = arr[0];
	int i = 1;
	int flag = 1;
	int x = 0, y = 0;

	//tep 1
	for (; i < size; i++) {
		res ^= arr[i];
	}

	//tep 2
	for (i = 0; i < 32; i++) {
		if (res & (flag <<= i))
			break;
	}

	//tep 3
	for (i = 0; i < size; i++) {
		if (flag & arr[i])
			x ^= arr[i];
		else
			y ^= arr[i];
	}

	printf("%d , %d \n", x, y);
}
#endif


int main() {
	int arr[] = { 1, 2, 4, 3, 1, 5, 2, 3 };
	int len = 0;
	len = sizeof(arr) / sizeof(arr[0]);
	find_data(arr, len);
	system("pause");
	return 0;
}

