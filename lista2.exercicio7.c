#include <stdio.h>

int main()
{
    int workingHours, hourValue;
    float salaryBase, bonus = 0, salaryTotal;

    printf("Digite a quantidade de horas semanais trabalhadas: ");
    scanf("%d", &workingHours);
    
    printf("Digite o valor hora: ");
    scanf("%d", &hourValue);

    salaryBase = workingHours * hourValue;

    if (workingHours <= 40) {
        salaryTotal = salaryBase;
    }
    else if (workingHours <= 60) {
        bonus = 0.5 * salaryBase;
        salaryTotal = salaryBase + bonus;
    }
    else {
        bonus = salaryBase;
        salaryTotal = salaryBase + bonus;
    }

    printf("Salário total: R$ %.2f\n", salaryTotal);

    return 0;
}
