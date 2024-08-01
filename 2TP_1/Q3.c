#include <stdio.h>
struct Data
{
    int dia;
    int mes;
    int ano;
};
int comparar_datas(struct Data data1, struct Data data2)
{
    if (data1.ano < data2.ano)
    {
        return 1;
    }
    else if (data1.ano > data2.ano)
    {
        return -1;
    }
    else
    {
        if (data1.mes < data2.mes)
        {
            return 1;
        }
        else if (data1.mes > data2.mes)
        {
            return -1;
        }
        else
        {
            if (data1.dia < data2.dia)
            {
                return 1;
            }
            else if (data1.dia > data2.dia)
            {
                return -1;
            }
            else
            {
                return 0;
            }
        }
    }
}
int main()
{
    struct Data d1, d2;

    printf("Digite a primeira data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &d1.dia, &d1.mes, &d1.ano);

    printf("Digite a segunda data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &d2.dia, &d2.mes, &d2.ano);

    int resultado = comparar_datas(d1, d2);

    if (resultado == 1)
    {
        printf("1\n");
    }
    else if (resultado == -1)
    {
        printf("-1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}