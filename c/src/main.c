#include <stdio.h>

int get_start_day(int year, int month)
{
    if (month < 3)
    {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int start_day = (1 +(12 * (month + 1)/5 + k +(k/4) +j/4+5 +j ) % 7);
    return (start_day + 5) % 7; // Adjusting to make Monday = 0, Sunday = 6
    
}

int get_num_days(int year, int month)
{
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
    {
        return 29;
    }
    return days_in_month[month - 1];
}


void fill_calendar(char *cal[7][7], char buffers[31][3],   int start_day, int num_days)
{
    // function to fill the calendar with the days of the month
    int day = 1;
    for (int row = 1; row < 7; row++)
    {
        for (int col = 0; col < 7; col++ ){
            if (row == 1 && col < start_day){
                cal[row][col] = "  "; // Empty cell for days before the start day or after the last day

            } else if (day > num_days)
            {
                cal[row][col] = "  "; 
                
            }
            
            else{
                sprintf(buffers[day - 1], "%2d", day);
                cal[row][col] = buffers[day - 1];
                day++;
            }
        }
    }
}


void display_calendar(int year, int month, int start_day, int num_days)
{
    // Function to display the calendar for a given month and year
    char buffers[31][3]; // Buffer to hold day strings
    char *cal [7][7] = {
        {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"},
        {"  ", "  ", "  ", "  ", "  ", "  ", "  "},
        {"  ", "  ", "  ", "  ", "  ", "  ", "  "},
        {"  ", "  ", "  ", "  ", "  ", "  ", "  "},
        {"  ", "  ", "  ", "  ", "  ", "  ", "  "},
        {"  ", "  ", "  ", "  ", "  ", "  ", "  "}
    };
    fill_calendar(cal, buffers, start_day, num_days);

    for (int i = 0; i < 7; i++)
    {
        for (int d = 0; d < 7; d++)
        {
            printf("%4s ", cal[i][d]);
        }
        printf("\n");
        if (i == 0)
        {
            printf("-------------------------------------\n");
        }
        
    }
    
}

int input_year()
{
    int year;
    while (1)
    {
        printf("Enter year: ");
        scanf("%d", &year);
        if (year > 0 && year < 10000)
        {
            break;

        }
        printf("Invalid year, please enter a valid value \n");

    }
    return year;
}

int input_month()
{
    int month;
    while (1)
    {
        printf("Enter month ");
        scanf("%d", &month);
        if (month >= 1 && month <= 12)
        {
            break;
        }
        printf("Invalid month. Please enter a valid value.\n");
    }
    return month;   
}

int main()
{
    int year = input_year(); // Function to get user input for year
    int month = input_month(); // Function to get user input for month
    int start_day = get_start_day(year, month);
    int num_days = get_num_days(year, month);
    
    display_calendar(year, month, start_day, num_days);
    return 0;
}
