#include <stdio.h>


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

int main()
{
    display_calendar(2024, 6, 5, 30); // Example: Display calendar for June 2024 starting on Friday (5) with 30 days
    return 0;
}
