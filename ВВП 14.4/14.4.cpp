#include <iostream>

int main()
{
    double proc;
    std::cout << "������� ������� �� ������(>0 <25) :";
    std::cin >> proc;
    if (proc < 0 || proc>25)
    {
        std::cout << "���������� ������� :)";
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

    std::cout << "�� ���������� ������ ������ �� ����� 1100�. �����������: " << count << " ������ " << "\n����� ������ ��������: " << deposit << " ���.";

    system("pause");
    return 0;
}