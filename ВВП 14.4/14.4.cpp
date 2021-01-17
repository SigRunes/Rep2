#include <iostream>

int main()
{
    double proc;
    std::cout << "Введите процент по вкладу(>0 <25) :";
    std::cin >> proc;
    if (proc < 0 || proc>25)
    {
        std::cout << "Нереальный процент :)";
        system("pause");
        return 1;
    }
    double deposit = 1000;
    int count = 0;
    while (deposit < 1100)
    {
        deposit += deposit / proc;
        count++;
    }

    std::cout << "До превышения лимита вклада на сумму 1100р. понадобится: " << count << " месяца " << "\nсумма вклада сомтавит: " << deposit << " руб.";

    system("pause");
    return 0;
}