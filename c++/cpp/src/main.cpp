#include <iostream>
#include <array>
#include <string>
#include <format>

int input_year(){
    int year;
    while (true){
        std::cout << "Enter year: " << std::endl;
        std::cin >> year;
        if (year > 0 && year < 100000000)
        {
            break;
        }
        std::cout << "Invalid year, please enter a valid value" << std::endl;
    }
    return year;
}

int get_start_day(int month, int year){
    if (month <= 2)
    {
        month +=12;
        year --;
    }
    int a = year % 100;
    int b = year / 100;
    int start_day = (1 + ((13 * (month + 1)) / 5) + a + (a / 4) + (b / 4) - (2 * b)) % 7; 

    return start_day;
}

int get_number_days(int month, int year){
    static constexpr std::array<int, 12> days_in_month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30,31};
    if (month == 2 && year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        return 29;
    }
    return days_in_month[month - 1];
}


int main(int argc, char const *argv[])
{
    int year = input_year();
    
    int start_day = get_start_day(9, year);
    std::cout << "Start day: " << start_day << std::endl;
    return 0;
}

