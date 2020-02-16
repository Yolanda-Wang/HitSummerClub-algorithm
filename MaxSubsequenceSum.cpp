#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n != 0){
        int a[100002];
        int i = 0;
        while(i < n){
            cin >> a[i];
            i++;
        }
        int currentSum = 0;
        int maxSum = -99999;
        int leftPos = 0;
        int rightPos = 0;                      //当前subsequence位置
        int leftMax = 0;
        int rightMax = 0;                      //当前最大subsequence位置
        for(int i = 0; i < n; i++){            //算法复杂度O（n）
            currentSum += a[i];
            if(currentSum > maxSum){           //如果加上新的值，和变大了，则更新maxSum
                maxSum = currentSum;
                leftMax = leftPos;
                rightMax = i;
            }
            if (currentSum < 0){          //如果加上新的值，和变为复数，则将当前和清零 注意：不是else if，是并列判断！！！
                currentSum = 0;
                leftPos = i + 1;
                rightPos = i + 1;
            }
        }
        int j;
        for(j = 0; j < n; j++){
            if(a[j] < 0)
                continue;
            else
                break;
        }
        if(j == n)
            cout << 0 << " " << a[0] << " " << a[n-1] << endl;
        else
            cout << maxSum <<" " << a[leftMax] << " " << a[rightMax] << endl;
    //cout << "the max subsequence sum is " << maxSum << endl;
    //cout << "the subsequence is from " << leftMax << " to " << rightMax << endl;
        cin >> n;
    };
    return 0;
}
