//1. User Input: The program prompts the user to enter the number of rows.
//2. Loops: Two loops generate a right-angled triangle pattern using asterisks.
//3. Asterisk Printing: Inner loop prints asterisks, increasing in each row.
//4. Pattern Formation: Result is a triangular pattern with rows of ascending asterisks.
//5. Output:Completed pattern is displayed based on user's input.

int main()
{
    int rows;
    printf("Number of rows: ");
    scanf("%d", &rows);
 
    // first loop for printing rows
    for (int i = 1; i <= rows; i++) {
 
        // second loop for printing similar number in each
        // rows
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}