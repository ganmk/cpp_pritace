
/*
题目描述
输出自然数1到n所有不重复的排列，即n的全排列，要求所产生的任一数字序列中不允许出现重复的数字。

输入
输入 n(1≤n≤9)

输出
由1～n组成的所有不重复的数字序列，每行一个序列。每个数字占5列。

样例输入
3
样例输出
    1    2    3
    1    3    2
    2    1    3
    2    3    1
    3    1    2
    3    2    1
*/

#include <iostream>
using namespace std;
void dfs(int i);
int n, m;
 int a[10];
 int b[10]={1,2,3,4,5,6,7,8,9};

int main(int argc, char const *argv[])
{
    /* code */
    cin>>n;
    
    dfs(0);
    return 0;
}



void dfs(int i){
    if(n==i){
        for(int j=0;j<n;j++)
            printf("%5d",a[j]);
        printf("\n");
 
    }
    else
        for(int j=0;j<n;j++)
            if(b[j]!=0){
                b[j]=0;
                a[i]=j+1;
                dfs(i+1);
                b[j]=j+1;
            }
 
 
    
 
}

