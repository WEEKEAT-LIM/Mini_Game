#include <iostream>
#include <ctime> //time系统时间头文件包含

int main()
{
    int num, num1, times = 1;
    int chance = 10;                 //机会次数
    srand((unsigned int)time(NULL)); //添加随机数种子 作用利用当前系统时间生成随机数，防止每次随机数都一样
    num = rand() % 100 + 1;          //随机生成1~100随机一个号码；%100是0~99
    std::cout << "Please Enter A Number 1~100 :";
    std::cin >> num1;
    std::cout << "You Have " << chance - times << " Chances" << std::endl;

    if (num != num1)
    {
        while (((num != num1) && (times < chance)))
        {
            if (num > num1){std::cout << "Your Number IS Smaller\n"<< std::endl;}
            else{std::cout << "Your Number IS Bigger\n"<< std::endl;}
            std::cout << "Please Enter A Number 1~100 :";
            std::cin >> num1;
            times += 1;
            std::cout << "You Have " << chance - times << " Chances" << std::endl;
        }
        if (num == num1){std::cout << "Your Number Is Correct : " << num << std::endl;}
        else{std::cout << "\nYOU LOSE, The CORRECT NUMBER IS " << num << std::endl;}
    }
    else{std::cout << "Your Number Is Correct ::" << num << std::endl;}

    return 0;
}