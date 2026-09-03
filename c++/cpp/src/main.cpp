#include <iostream>
#include <array>
#include <string>
#include <format>

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


int main(int argc, char const *argv[])
{
    
    int start_day = get_start_day(9, 2026);
    std::cout << "Start day: " << start_day << std::endl;
    return 0;
}

