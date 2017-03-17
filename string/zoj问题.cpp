#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <queue>
#include <cmath>
#include <map>
#include <string.h>
#define N 200005

using namespace std;

/*
�Ը������ַ���(ֻ����'z','o','j'�����ַ�),�ж����Ƿ���AC��

�Ƿ�AC�Ĺ������£�
1. zoj��AC��
2. ���ַ�����ʽΪxzojx����Ҳ��AC������x������N��'o' ����Ϊ�գ�
3. ��azbjc ��AC����azbojacҲ��AC������a,b,cΪN��'o'����Ϊ�գ�
*/

bool test1(string s) {
    int t1 = 0;
    int t2 = 0;
    int i;
    for (i = 0; i < s.size(); i++) {
        if (s[i] == 'o') {
            t1++;
        } else {
            break;
        }
    }
    i;
    if (!(s[i] == 'z' && s[i+1] == 'o' && s[i+2] == 'j')) {
        return false;
    }
    i += 3;
    for (; i < s.size(); i++) {
        if (s[i] == 'o') {
            t2++;
        } else {
            break;
        }
    }
    if (i == s.size() && t1 == t2) {
        return true;
    } else {
        return false;
    }
}

bool test2(string s) {
    int posz = s.find("z");
    int posj = s.find("j");
    int x1 = 0;
    int x2 = 0;
    int x3 = 0;
    for (int i = 0; i < posz; i++) {
        if (s[i] == 'o') {
            x1++;
        } else {
            return false;
        }
    }
    for (int i = posz+1; i < posj; i++) {
        if (s[i] == 'o') {
            x2++;
        } else {
            return false;
        }
    }
    for (int i = posj+1; i < s.size(); i++) {
        if (s[i] == 'o') {
            x3++;
        } else {
            return false;
        }
    }
    if (x2 >= 1 && x1 * x2 == x3) {
        return true;
    } else {
        return false;
    }
}

int main(){
   // freopen("in.txt", "r", stdin);
    string str;
    while (cin >> str) {
        if (str.find("z") == -1 || str.find("o") == -1 || str.find("j") == -1) {
            cout << "Wrong Answer" << endl;
            continue;
        }
        if (test1(str) || test2(str)) {
            cout << "Accepted" << endl;
        } else {
            cout << "Wrong Answer" << endl;
        }
    }
    return 0;
}
