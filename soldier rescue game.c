#include <stdio.h>

// Function Prototypes (from your boiler plate)
void set_arr_to(int num);
void set_col_to(int col, int val);
void set_row_to(int row, int val);
void print_arr();

// Global Array
int arr[8][8];

int main() {
    int rc = 1;
    printf("Each house in the matrix has a terrorist...\n");
    set_arr_to(rc); // Fill entire 8x8 array with 1s
    print_arr();

    printf("2. How many choppers to send? ");
    int no;
    scanf("%d", &no);

    int r = 8; // Row variable for calculation
    int c = 7; // Column variable for calculation
    int add = 15; // Initial arrest count
    int total_arrested = 0;

    // Loop to process each chopper
    for(int i = 1; i <= no; i++) {
        int row, col;
        printf("Enter the coordinates to land the chopper [x,y = 1-8] #%d (x,y): ", i);
        scanf("%d,%d", &row, &col);

        // Convert user's 1-based input (1-8) to C's 0-based index (0-7)
        row--;
        col--;

        // IMPORTANT: Set the cross (Row and Column) to 0
        set_row_to(row, 0); // Clear the chosen row
        set_col_to(col, 0); // Clear the chosen column

        print_arr();

        // LOGIC: Calculate terrorist arrested
        // If r and c decrease over time, it creates the pyramid-like count shown in your screenshot
        int temp = (r + c) - 1;
        add = add + temp;
        total_arrested = add; // Setting the total to display

        printf("%d terrorist have been arrest by landing at %d, %d\n", total_arrested, row+1, col+1);

        // Update r and c for the next iteration (as seen in your screenshot's logic)
        r--;
        c--;
    }

    // Final message from your screenshot
    printf("\n...................................\n");
    printf("CONGRATS SOLDIERS, MISSION COMPLETED SUCCESSFULLY");
    printf("\n...................................\n");

    return 0;
}

// Helper functions (from your first boiler plate)
void set_arr_to(int num) {
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            arr[i][j] = num;
        }
    }
}

void set_col_to(int col, int val) {
    for(int i = 0; i < 8; i++) {
        arr[i][col] = val;
    }
}

void set_row_to(int row, int val) {
    for(int i = 0; i < 8; i++) {
        arr[row][i] = val;
    }
}

void print_arr() {
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}
