#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;
string mul(string n1, string num){

}

string exp(string num, int n){
    if (n == 0)
        return string("1");
    if (num == "0")
        return string("0");
    if (n == 1)
        return num;
    if (n == 2)
        return mul(num, num);
    else if (n > 2){

    }
}

int main()
{
    string R;
    int n;
    while(cin >> R >> n)
    {
        int front_part_pos = 0;
        int dot_pos = 0;
        int back_part_pos = 5;
        while(R[front_part_pos] == '0')
            front_part_pos++;
        while(R[dot_pos] != '.')
            dot_pos++;
        while(R[back_part_pos] == '0')
            back_part_pos--;
        int front_len = dot_pos - front_part_pos;//整数部分有效长度
        int back_len = back_part_pos - dot_pos;//小数部分有效长度
        int realnum_len = front_len + back_len;//有效长度
        int res_dot_pos = back_len * n;//计算结果中小数部分长度

        string realnum;
        int k = 0;
        for(int i = front_part_pos; i < dot_pos; i++)
        {
            realnum += R[i];
            k++;
        }
        for(int j = dot_pos + 1; j <= back_part_pos; j++)
        {
            realnum += R[j];
            k++;
        }
        if (front_part_pos == back_part_pos)
            realnum = "0";
        cout << realnum << endl;
        string result = exp(realnum, n);
        for (int i = 0; i < result.length() - res_dot_pos; i++){
            cout << result[i];
        }
        cout << ".";
        for (int j = result.length() - res_dot_pos; j <= result.length(); j++){
            cout << result[j];
        }
        cout << endl;
    }
    return 0;
}

