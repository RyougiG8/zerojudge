//c658
//Author:邱韋勛
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
long long power(long long base,long long time);
int main(int argc, char *argv[]) 
{
	char in[100];
	int num[100], len, R, Z;
	long long i, ans, max, min;
	int answer[100], j, div = 0, time1, time2, a[100000];
	for(i = 32; i < 100000; i++)
	{
		time2 = 0;
		ans = i * i;
		while(ans / power(10, div) != 0) div++;
		for(j = 0; j < div; j++)
		{
			answer[j] = ans / power(10, div - j - 1) % 10;
			if(answer[j] == 0)
			    Z = 1;
			if(Z == 1)
			    break;
			if(answer[j] == 1)
			    time2 = time2 + 1;
			else if(answer[j] == 2)
			    time2 = time2 + 10;
			else if(answer[j] == 3)
			    time2 = time2 + 100;
			else if(answer[j] == 4)
			    time2 = time2 + 1000;
			else if(answer[j] == 5)
			    time2 = time2 + 10000;
			else if(answer[j] == 6)
			    time2 = time2 + 100000;
			else if(answer[j] == 7)
			    time2 = time2 + 1000000;
			else if(answer[j] == 8)
			    time2 = time2 + 10000000;
			else if(answer[j] == 9)
			    time2 = time2 + 100000000;
		}
		a[i] = time2;
		if(Z == 1)
		{
			Z = 0;
			continue;
		}
	}
	while(gets(in))
	{
		R = 0; Z = 0; j = 0; time1 = 0; time2 = 0;
		len = strlen(in);
		for(i = 0; i < len; i++)
		{
			if(in[i] == '1')
			    time1 = time1 + 1;
			else if(in[i] == '2')
			    time1 = time1 + 10;
			else if(in[i] == '3')
			    time1 = time1 + 100;
			else if(in[i] == '4')
			    time1 = time1 + 1000;
			else if(in[i] == '5')
			    time1 = time1 + 10000;
			else if(in[i] =='6')
			    time1 = time1 + 100000;
			else if(in[i] == '7')
			    time1 = time1 + 1000000;
			else if(in[i] == '8')
			    time1 = time1 + 10000000;
			else if(in[i] == '9')
			    time1 = time1 + 100000000;
		}
		if(len == 4)
		{
			min = 32;
			max = 100;
		}
		else if(len == 5)
		{
			min = 100;
			max = 317;
		}
		else if(len == 6)
		{
			min = 317;
			max = 1000;
		}
		else if(len == 7)
		{
			min = 1000;
			max = 3163;
		}
		else if(len == 8)
		{
			min = 3163;
			max = 10000;
		}
		else if(len == 9)
		{
			min = 10000;
			max = 31623;
		}
		else if(len == 10)
		{
			min = 31623;
			max = 100000;
		}
		for(i = min; i < max; i++)
		{
			if(time1 == a[i])
			{
				R++;
				printf("%lld ", i * i);
			}

		}
		if(R == 0)
		printf("0");
		printf("\n");
	}
}
long long power(long long base,long long time)
{
	long long ii;
	long long ans = 1;
	for(ii = 0; ii < time; ii++)
	{
		ans = ans * base;
	}
	return ans;
}