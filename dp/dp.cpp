/*
ͳ������
 
Problem Description
��һ���޴�Ķ�άƽ���У����������¼��裺
1��  ÿ��ֻ���ƶ�һ��
2��  ��������ߣ��������Ŀ�ĵ��ǡ����ϡ�����ô����������ߣ����������ߣ�Ҳ���������ߣ����ǲ����������ߣ���
3��  �߹��ĸ������������޷����ߵڶ��Σ�

����n����ͬ�ķ�������2���߷�ֻҪ��һ����һ����������Ϊ�ǲ�ͬ�ķ�������
 
Input
���ȸ���һ��������C����ʾ��C���������
��������C�У�ÿ�а���һ������n (n<=20)����ʾҪ��n����
 
Output
���������n���Ĳ�ͬ����������
ÿ������ռһ�С�
 
Sample Input
2
1
2
 
Sample Output
3
7
*/
#include <iostream>  
#include <sstream>  
#include <string.h>  
#include <cstdio>  
#include <string>  
#include <cctype>  
#include <algorithm>  
#include <vector>  
#include <stack>  
#include <queue>  
#include <set>  
#include <cmath>  
#define MV 1005  
#define ME 10005  
#define N 20005  
#define M 0x7fffffff  
using namespace std;  
typedef long long ll;  
int n;  
ll dp[N];  
/**< 
 
����n���ķ�����Ϊf(n)����n���ߵ������Ϸ�����Ϊa(n)����n���ߵ�����������ҷ�����Ϊb(n)�� 
��f(n)=a(n)+b(n)����Ϊ�߹��Ĳ��������ߣ����Ҳ������෴����(����Ĭ��һ�ַ����Ҽ������Ŀ������)�� 
���ԣ����ڵ�n��������û��ʲô����(���n-1���޹�)������a(n)=a(n-1)+b(n-1)�� 
���������Ҿ��������ˣ�����n-1����������ʱ����ʱ��һ�ж�û�߹��������������Ҷ����ԣ� 
����n-1�����������������ʱ����ʱֻ��һ����������ߣ�����b(n)=2*a(n-1)+b(n-1)�� 
����������Եõ�f(n)=2*f(n-1)+f(n-2)�� 
 */  
void init() {  
    dp[0] = 0;  
    dp[1] = 3;  
    dp[2] = 7;  
    for (int i = 3; i <= 20; i++) {  
        dp[i] = 2*dp[i-1] + dp[i-2];  
    }  
}  
  
int main()  
{  
    init();  
    int t;  
    cin >> t;  
    while (t--) {  
        int n;  
        cin >> n;  
        cout << dp[n] << endl;  
    }  
    return 0;  
}  