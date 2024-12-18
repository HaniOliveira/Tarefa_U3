#include <stdio.h>

// Protótipos das funções
void converterComprimento();
void converterMassa();
void converterVolume();
void converterTemperatura();
void converterVelocidade();
void converterPotencia();
void converterArea();

int main()
{
    int escolha;

    do
    {
        printf("Selecione uma categoria para converter:\n");
        printf("1. Comprimento\n");
        printf("2. Massa\n");
        printf("3. Volume\n");
        printf("4. Temperatura\n");
        printf("5. Velocidade\n");
        printf("6. Potência\n");
        printf("7. Área\n");
        printf("0. Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            converterComprimento();
            break;
        case 2:
            converterMassa();
            break;
        case 3:
            converterVolume();
            break;
        case 4:
            converterTemperatura();
            break;
        case 5:
            converterVelocidade();
            break;
        case 6:
            converterPotencia();
            break;
        case 7:
            converterArea();
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Escolha inválida. Tente novamente.\n");
        }
    } while (escolha != 0);

    return 0;
}

void converterComprimento()
{
}

void converterMassa()
{
}

void converterVolume()
{
}

// Procedimento para receber, converter e exibir unidades de temperatura
void converterTemperatura()
{

    // Declaração das variáveis (tipo double)
    double celsius, fahrenheit, kelvin;

    // Solicitando a entrada da temperatura em Celsius
    printf("Informe a temperatura em Graus Celsius: ");
    scanf("%lf", &celsius);

    // Convertendo Celsius para Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Convertendo Celsius para Kelvin
    kelvin = celsius + 273.15;

    // Exibindo os resultados
    printf("A temperatura %.2lf ºC equivale a %.2lf ºF\n", celsius, fahrenheit);
    printf("A temperatura %.2lf ºC equivale a %.2lf K\n", celsius, kelvin);
}

void converterVelocidade()
{
}

void converterPotencia()
{
}

void converterArea()
{
}