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

    int escolhaVolume;
    printf("Selecione uma unidade de volume para converter:\n");
    printf("1. Litro para Mililitro\n");
    printf("2. Mililitro para Litro\n");
    printf("3. Litro para Metro Cúbico\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolhaVolume);

    float ml = 0;
    float litro = 0;
    float metroCubico = 0;
    switch (escolhaVolume)
    {
    case 1:
        printf("Digite o valor em litros: ");
        scanf("%f", &litro);
        ml = litro * 1000;
        printf("O valor em mililitros é: %.2f\n", ml);
        break;

    case 2:
        printf("Digite o valor em mililitros: ");
        scanf("%f", &ml);
        litro = ml / 1000;
        printf("O valor em litros é: %.2f\n", litro);
        break;

    case 3:
        printf("Digite o valor em litros: ");
        scanf("%f", &litro);
        metroCubico = litro / 1000;
        printf("O valor em metros cúbicos é: %.2f\n", metroCubico);
        break;

    default:
        printf("Opção inválida. Tente novamente.\n");
        break;
        break;
    }
}

void converterTemperatura()
{
}

void converterVelocidade()
{
    int opcao;
    float velocidade, resultado;

    printf("Escolha a conversão desejada:\n");
    printf("1 - km/h para m/s\n");
    printf("2 - km/h para mph\n");
    printf("3 - m/s para km/h\n");
    printf("4 - m/s para mph\n");
    printf("5 - mph para km/h\n");
    printf("6 - mph para m/s\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("Digite a velocidade: ");
    scanf("%f", &velocidade);

    switch (opcao)
    {
    case 1: // km/h para m/s
        resultado = velocidade / 3.6;
        printf("%.2f km/h equivalem a %.2f m/s\n", velocidade, resultado);
        break;
    case 2: // km/h para mph
        resultado = velocidade / 1.609;
        printf("%.2f km/h equivalem a %.2f mph\n", velocidade, resultado);
        break;
    case 3: // m/s para km/h
        resultado = velocidade * 3.6;
        printf("%.2f m/s equivalem a %.2f km/h\n", velocidade, resultado);
        break;
    case 4: // m/s para mph
        resultado = velocidade * 2.237;
        printf("%.2f m/s equivalem a %.2f mph\n", velocidade, resultado);
        break;
    case 5: // mph para km/h
        resultado = velocidade * 1.609;
        printf("%.2f mph equivalem a %.2f km/h\n", velocidade, resultado);
        break;
    case 6: // mph para m/s
        resultado = velocidade / 2.237;
        printf("%.2f mph equivalem a %.2f m/s\n", velocidade, resultado);
        break;
    default:
        printf("Opção inválida!\n");
    }
}
void converterPotencia()
{
}

void converterArea()
{
}