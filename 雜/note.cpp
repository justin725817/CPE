#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    std::string data = "Alice 23 95.5";
    std::stringstream ss(data);
    std::string name;
    int age;
    double score;
    ss >> name >> age >> score; // 按顺序读取
    std::cout << name << " (" << age << ") Score: " << score << std::endl;
    // 输出: Alice (23) Score: 95.5
    */
    /*
    std::string csv_line = "apple,banana,orange,grape";
    std::stringstream ss(csv_line);
    std::string item;
    // 第三参数传入 ',' 表示遇到逗号就切分
    while (std::getline(ss, item, ','))
    {
        std::cout << item << std::endl;
    }
    */
    /*
    输出：
    apple
    banana
    orange
    grape
    */
    /*
    int num = 123456;
    stringstream ss;
    ss << num;
    string strNum = ss.str();
    cout << strNum << endl;
    cout << typeid(strNum).name() << endl;
    */
    /*
    string num = "A";
    int ans = stoi(num, nullptr, 16);
    cout << ans << endl;

    string num1 = "A7xyz";
    size_t stopPos;
    int ans1 = stoi(num1, &stopPos, 16);
    cout << ans1 << endl;
    */
    return 0;
}