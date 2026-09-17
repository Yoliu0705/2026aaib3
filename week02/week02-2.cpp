/// week02-2.cpp 要使用命名空間
#include <iostream>
#include <string>
using namespace std; ///使用 std命名空間
int main()
{
    cout << "請問你叫甚麼名字?";
    string name; ///宣告字串 name
    cin >> name; ///上週教cin 原來長這樣
    cout << name << "你好,今天教命名空間喔";
}

