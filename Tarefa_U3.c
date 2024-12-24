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
    } while (escolha > 0);

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
    int opcao;
    float pot, resultado;

    do
    {
        printf("Escolha a conversão desejada:\n\t\tCV = Cavalo Vapor\t~=\tHP = Hourse Power\n");
        printf("1 - W para kW\n");
        printf("2 - W para CV\n");
        printf("3 - CV para w\n");
        printf("4 - CV para kW\n");
        printf("5 - kW para W\n");
        printf("6 - kW para CV\n");
        printf("0 - Voltar\n");
        printf("Digite sua escolha: ");
        scanf("%d", &opcao);

        if (opcao>6 || opcao<0)
            printf("\n\tOpção inválida!");
        else if (opcao==0)
        {
            printf("\tSaindo...\n\n");
            return;
        }
    } while (opcao>6 || opcao<0);
 
    printf("Digite a Potencia: ");
    scanf("%f", &pot);

    switch (opcao)
    {
    case 1:
        resultado = pot / 1000.0;
        printf("%.2f W equivalem a %.2f kW", pot, resultado);
        break;
    case 2:
        resultado = pot * 0.00135962;
        printf("%.2f W equivalem a %.2f CV", pot, resultado);
        break;   
    case 3:
        resultado = pot * 735.499;
        printf("%.2f CV equivalem a %.2f W", pot, resultado);
        break;  
    case 4:
        resultado = pot * 0.735499;
        printf("%.2f CV equivalem a %.2f kW", pot, resultado);
        break; 
    case 5:
        resultado = pot * 1000.0;
        printf("%.2f kW equivalem a %.2f W", pot, resultado);
        break; 
    case 6:
        resultado = pot * 1.35962;
        printf("%.2f kW equivalem a %.2f CV", pot, resultado);
        break;
    default:
        printf("\n\tOpção inválida!\n");
        break;
    }
    printf("\n\n");
}

void converterArea()
{
}