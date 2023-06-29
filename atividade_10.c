#include <stdio.h>

#define n_jogadores 4
#define n_times 2

int main()
{
    int idade, m_idade, jovem, m_idade_t;
    float peso, m_peso, gordo, m_peso_t;

    idade = 0;
    m_idade = 0;
    jovem = 200;
    peso = 0;
    m_peso = 0;
    gordo = 0;
    m_peso_t = 0;
    m_idade_t = 0;

    for (int t = 1; t <= n_times; t++)
    {
        for (int j = 1; j <= n_jogadores; j++)
        {

            printf("\nDigite sua idade: ");
            scanf("%d", &idade);

            printf("Digite seu peso");
            scanf("%f", &peso);

            m_peso_t = m_peso_t + peso;
            m_idade_t = m_idade_t + idade;

            if (gordo < peso)
            {
                gordo = peso;
            }

            if (jovem > idade)
            {
                jovem = idade;
            }
        }
        // a
        printf("\nO peso medio do time %d eh: %0.2f", t, m_peso_t / n_jogadores);
        printf("\nA idade media do time %d eh: %d", t, m_idade_t / n_jogadores);

        // b
        printf("\nO mais pesado do time %d pesa: %0.2f", t, gordo);

        // c
        printf("\nO mais jovem do time %d tem a idade de: %d", t, jovem);

        m_idade = m_idade + m_idade_t;
        m_peso = m_peso + m_peso_t;

        // RR variavel
        m_peso_t = 0;
        m_idade_t = 0;
        gordo = 0;
        jovem = 200;
    }
    // d
    m_peso = m_peso / (n_times * n_jogadores);
    m_idade = m_idade / (n_times * n_jogadores);
    printf("\nA media de idade dos times eh de: %d", m_idade);
    printf("\nA media do peso dos times eh de: %0.2f", m_peso);

    return 0;
}
