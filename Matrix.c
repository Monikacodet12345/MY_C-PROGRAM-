#include <stdio.h>
int main() {
int n, sum = 0;
printf("Enter the number of elements: "); 
printf("Enter the elements: ");
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
sum += arr[i];
}
printf("Sum = %d\n", sum);
return 0;
}
3.4 Program for Matrix Addition
#include <stdio.h>
int main() {
int rows, cols;
printf("Enter the number of rows and columns: ");
scanf("%d %d", &rows, &cols);
int a[rows][cols], b[rows][cols], sum[rows][cols];
printf("Enter elements of matrix A:\n");
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
scanf("%d", &a[i][j]);
}
}
