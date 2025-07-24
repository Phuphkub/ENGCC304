
```c++
#include <stdio.h>

int main() {
    char emp_id[11];
    float workinghrs , salary_perhrs , allsalary;

    printf("Input the Employee ID(Max. 10 chars): ");
    scanf("%10s", emp_id);

    printf("Input the working hrs: ");
    scanf("%f", &workinghrs);

    printf("Salary amount/hr: ");
    scanf("%f", &salary_perhrs);

    allsalary = workinghrs*salary_perhrs;

    printf("Employee ID = %s\n", emp_id);
    printf("Salary = $%.2f\n", allsalary);

    return 0;
}