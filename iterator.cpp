/*************************************************************************
	> File Name: iterator.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年09月12日 星期六 16时33分05秒
 ************************************************************************/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
using namespace std;
int main() {
    vector<int> v; //v是存放int类型变量的可变长数组 开始时没有元素
    for (int i = 0; i < 10; i++) {
        v.push_back(i);//在vector容器尾部添加一个元素
    }
    for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
        //定义一个迭代器
        cout << *iter << " ";
    }
    cout << endl;
    for (vector<int>::reverse_iterator iter = v.rbegin(); iter != v.rend(); iter++) {
        //反向迭代器 遍历容器
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}
