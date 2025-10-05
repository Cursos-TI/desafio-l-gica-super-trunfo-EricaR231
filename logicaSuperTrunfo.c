#include <stdio.h>
#include <string.h>

int main()
{

    printf("Bem-vindo ao Jogo!\n");

    // Variavéis da carta 01
    char letra_pais_1;         // Letra representando o País (de A a H)
    char codigo_pais_1[3];         // Código do País (2 dígitos + '\0')
    char nome_pais_1[50];          // Nome do País
    unsigned long int populacao_1; // Número de habitantes
    float area_km2_1;              // Área do País em km²
    float pib_1;                   // Produto Interno Bruto do País
    int numero_ponto_turistico_1;  // Quantidade de pontos turísticos
    float densidade_demografica_1; // Representa o número de habitantes por km²
    float pib_per_capta_1;         //  Representa o PIB dividido pela população
    float super_poder_1;           // Representa o super poder

    // Variavéis da carta 2.
    char letra_pais_2;             // Letra representando o País (de A a H)
    char codigo_pais_2[3];         // Código do País (2 dígitos + '\0')
    char nome_pais_2[50];          // Nome do País
    unsigned long int populacao_2; // Número de habitantes
    float area_km2_2;              // Área do País em km²
    float pib_2;                   // Produto Interno Bruto do País
    int numero_ponto_turistico_2;  // Quantidade de pontos turísticos
    float densidade_demografica_2; // Representa o número de habitantes por km²
    float pib_per_capta_2;         //  Representa o PIB dividido pela população
    float super_poder_2;           // representa o super poder

    printf("Insira os dados da carta 01\n");
    printf("Digite uma letra de A a H: ");
    scanf(" %c", &letra_pais_1); // Espaço antes do %c ignora espaços em branco e quebras de linha

    printf("Digite o número do código do País de 01 a 04: ");
    scanf("%s", &codigo_pais_1); // Lê no máximo 2 caracteres (ex: "01", "02")

    int c;
    while ((c = getchar()) != '\n' && c != EOF);                              // Limpa o buffer
    printf("Digite o nome do País: "); // Lê o nome do País (suporta nomes compostos)
    fgets(nome_pais_1, sizeof(nome_pais_1), stdin);

    // Leitura de dados numéricos
    printf("Digite o número de habitantes do País: ");
    scanf("%d", &populacao_1);

    printf("Digite a área do País em quilômetros quadrados: ");
    scanf("%f", &area_km2_1);

    printf("Digite o Produto Interno Bruto do País: ");
    scanf("%f", &pib_1);

    printf("Digite o número de pontos turísticos no País: ");
    scanf("%d", &numero_ponto_turistico_1);

    densidade_demografica_1 = populacao_1 / area_km2_1;
    pib_per_capta_1 = pib_1 / populacao_1;
    super_poder_1 = (float)populacao_1 + area_km2_1 + pib_1 + (float)numero_ponto_turistico_1 + pib_per_capta_1 - densidade_demografica_1;
    printf("\n");

    printf("Insira os dados da Carta 2!\n");
    printf("Digite uma letra de A a H: ");
    scanf(" %c", &letra_pais_2); // Espaço antes do %c ignora espaços em branco e quebras de linha

    printf("Digite o número do código do País de 01 a 04: ");
    scanf("%s", &codigo_pais_2); // Lê no máximo 2 caracteres (ex: "01", "02")

    int c_2;
    while ((c_2 = getchar()) != '\n' && c_2 != EOF)
        ;                              // Limpa o buffer
    printf("Digite o nome do País: "); // Lê o nome do País (suporta nomes compostos)
    fgets(nome_pais_2, sizeof(nome_pais_2), stdin);

    // Leitura de dados numéricos
    printf("Digite o número de habitantes do País: ");
    scanf("%d", &populacao_2);

    printf("Digite a área do País em quilômetros quadrados: ");
    scanf("%f", &area_km2_2);

    printf("Digite o Produto Interno Bruto do País: ");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turísticos no País: ");
    scanf("%d", &numero_ponto_turistico_2);

    printf("\n");

    // Exibindo os dados da carta 1
    printf("Carta 01!\n");
    printf("\n");

    printf("Letra do País: %c\n", letra_pais_1);                               // Letra do País
    printf("Código da Carta: %c%s\n", letra_pais_1, codigo_pais_1);            // Letra e código formam a identificação da carta
    printf("Nome do País: %s\n", nome_pais_1);                                 // Nome do País
    printf("População: %d\n", populacao_1);                                    // Número de população do País
    printf("Área: %.2fkm²\n", area_km2_1);                                     // 2 casas decimais
    printf("PIB: %.2f\n", pib_1);                                              // 2 casas decimais
    printf("Pontos turísticos: %d\n", numero_ponto_turistico_1);               // Número de Ponto Turístico do País
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_demografica_1); // População dividida pela área
    printf("PIB Per Capta: %.2f reais\n", pib_per_capta_1);                    // PIB dividido pela população
    printf("\n");

    // Exibindo os dados da carta 2
    printf("CARTA 02\n");
    printf("\n");

    printf("Letra do País: %c\n", letra_pais_2);                               // Letra do País
    printf("Código da Carta: %c%s\n", letra_pais_1, codigo_pais_2);            // Letra e código formam a identificação da carta
    printf("Nome do País: %s\n", nome_pais_2);                                 // Nome do País
    printf("População: %d\n", populacao_2);                                    // Número inteiro
    printf("Área: %.2fkm²\n", area_km2_2);                                     // 2 casas decimais
    printf("PIB: %.2f\n", pib_2);                                              // 2 casas decimais
    printf("Pontos turísticos: %d\n", numero_ponto_turistico_2);               // Número de Ponto Turístico do País
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_demografica_2); // População dividida pela área
    printf("PIB Per Capta: %.2f reais\n", pib_per_capta_2);                    // PIB dividido pela população
    printf("\n");

    // Exibição do menu
    printf("Escolha uma opção para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite o número da opção que deseja comparar: ");

    int resultado_comparacao_1;
    int resultado_comparacao_2;
    char nome_atributo_1[50];
    char nome_atributo_2[50];
    int valor_atributo_1;
    int valor_atributo_2;
    int valor_atributo_3;
    int valor_atributo_4;
    int numero_opcao_1;
    int numero_opcao_2;
    char carta_vencedora_1[50] = "";
    char carta_vencedora_2[50] = "";
    scanf("%d", &numero_opcao_1);

    // Determinação dos parametros para comparação das cartas
    switch (numero_opcao_1)
    {
    case 1:
        if (populacao_1 == populacao_2)
        {
            resultado_comparacao_1 = 3;
        }
        else
        {
            resultado_comparacao_1 = populacao_1 > populacao_2;
        }
        strcpy(nome_atributo_1, "População");
        valor_atributo_1 = populacao_1;
        valor_atributo_2 = populacao_2;
        break;
    case 2:
        if (area_km2_1 == area_km2_2)
        {
            resultado_comparacao_1 = 3;
        }
        else
        {
            resultado_comparacao_1 = area_km2_1 > area_km2_2;
        }
        strcpy(nome_atributo_1, "Área");
        valor_atributo_1 = area_km2_1;
        valor_atributo_2 = area_km2_2;
        break;
    case 3:
        if (pib_1 == pib_2)
        {
            resultado_comparacao_1 = 3;
        }
        else
        {
            resultado_comparacao_1 = pib_1 > pib_2;
        }
        strcpy(nome_atributo_1, "PIB");
        valor_atributo_1 = pib_1;
        valor_atributo_2 = pib_2;
        break;
    case 4:
        if (numero_ponto_turistico_1 == numero_ponto_turistico_2)
        {
            resultado_comparacao_1 = 3;
        }
        else
        {
            resultado_comparacao_1 = numero_ponto_turistico_1 > numero_ponto_turistico_2;
        }
        strcpy(nome_atributo_1, "Número de pontos túristicos");
        valor_atributo_1 = numero_ponto_turistico_1;
        valor_atributo_2 = numero_ponto_turistico_2;
        break;
    case 5:
        if (densidade_demografica_1 = densidade_demografica_2)
        {
            resultado_comparacao_1 = 3;
        }
        else
        {
            resultado_comparacao_1 = densidade_demografica_1 < densidade_demografica_2;
        }
        strcpy(nome_atributo_1, "Densidade demográfica");
        valor_atributo_1 = densidade_demografica_1;
        valor_atributo_2 = densidade_demografica_2;
        break;

    default:
        printf("Opção selecionada inválida, escolha uma opção de 1 à 5.\n");
        break;
    }

    if (resultado_comparacao_1 == 1)
    {
        strcpy(carta_vencedora_1, "** Carta 1 venceu! **\n");
    }
    else if (resultado_comparacao_1 == 0)
    {
        strcpy(carta_vencedora_1, "** Carta 2 venceu! **\n");
    }
    else
    {
        strcpy(carta_vencedora_2, "## Empate! ##\n");
    }

    printf("Escolha a segunda opção para comparar:\n");
    if (numero_opcao_1 != 1)
    {
        printf("1. População\n");
    }
    if (numero_opcao_1 != 2)
    {
        printf("2. Área\n");
    }
    if (numero_opcao_1 != 3)
    {
        printf("3. PIB\n");
    }
    if (numero_opcao_1 != 4)
    {
        printf("4. Número de pontos turísticos\n");
    }
    if (numero_opcao_1 != 5)
    {
        printf("5. Densidade Demográfica\n");
    }

    printf("Digite o número da opção que deseja comparar: ");
    scanf("%d", &numero_opcao_2);

    switch (numero_opcao_2)
    {
    case 1:
        if (populacao_1 == populacao_2)
        {
            resultado_comparacao_2 = 3;
        }
        else
        {
            resultado_comparacao_2 = populacao_1 > populacao_2;
        }
        strcpy(nome_atributo_2, "População");
        valor_atributo_3 = populacao_1;
        valor_atributo_4 = populacao_2;
        break;
    case 2:
        if (area_km2_1 == area_km2_2)
        {
            resultado_comparacao_2 = 3;
        }
        else
        {
            resultado_comparacao_2 = area_km2_1 > area_km2_2;
        }
        strcpy(nome_atributo_2, "Área");
        valor_atributo_3 = area_km2_1;
        valor_atributo_4 = area_km2_2;
        break;
    case 3:
        if (pib_1 == pib_2)
        {
            resultado_comparacao_2 = 3;
        }
        else
        {
            resultado_comparacao_2 = pib_1 > pib_2;
        }
        strcpy(nome_atributo_2, "PIB");
        valor_atributo_3 = pib_1;
        valor_atributo_4 = pib_2;
        break;
    case 4:
        if (numero_ponto_turistico_1 == numero_ponto_turistico_2)
        {
            resultado_comparacao_2 = 3;
        }
        else
        {
            resultado_comparacao_2 = numero_ponto_turistico_1 > numero_ponto_turistico_2;
        }
        strcpy(nome_atributo_2, "Número de pontos túristicos");
        valor_atributo_3 = numero_ponto_turistico_1;
        valor_atributo_4 = numero_ponto_turistico_2;
        break;
    case 5:
        if (densidade_demografica_1 = densidade_demografica_2)
        {
            resultado_comparacao_2 = 3;
        }
        else
        {
            resultado_comparacao_2 = densidade_demografica_1 < densidade_demografica_2;
        }
        strcpy(nome_atributo_2, "Densidade demográfica");
        valor_atributo_3 = densidade_demografica_1;
        valor_atributo_4 = densidade_demografica_2;
        break;

    default:
        printf("Opção selecionada inválida, escolha uma opção de 1 à 5.\n");
        break;
    }

     if (resultado_comparacao_2 == 1)
    {
        strcpy(carta_vencedora_2, "** Carta 1 venceu! **\n");
    }
    else if (resultado_comparacao_2 == 0)
    {
        strcpy(carta_vencedora_2, "** Carta 2 venceu! **\n");
    }
    else
    {
        strcpy(carta_vencedora_2, "## Empate! ##\n");
    }

    float valor_soma_atributo_carta_1 = (float)valor_atributo_1 + (float)valor_atributo_3;
    float valor_soma_atributo_carta_2 = (float)valor_atributo_2 + (float)valor_atributo_4;
   

    printf("\n");
    printf("Nome do País (1): %s\n", nome_pais_1); // Lê o nome do País
    printf("Nome do País (2): %s\n", nome_pais_2); // Lê o nome do País
    printf("Nome do atributo comparado: %s:%d\n", nome_atributo_1, valor_atributo_1); // Lê o atributo escolhido e o valor do atributo
    printf(carta_vencedora_1); // Lê a carta vencedora
    printf("Nome do atributo comparado: %s:%d\n", nome_atributo_2, valor_atributo_2); // Lê o atributo escolhido e o valor do atributo
    printf(carta_vencedora_2); // Lê a carta vencedora
    printf("Soma dos Atributos Carta 1: %.2f\n", valor_soma_atributo_carta_1); // Soma dos atributos comparados
    printf("Soma dos Atributos Carta 2: %.2f\n", valor_soma_atributo_carta_2); // Soma dos atributos comparados
    printf("\n");

    // Determina qual carta venceu
    printf("A carta com a maior soma dos atributos vence!\n");
    if (valor_soma_atributo_carta_1 > valor_soma_atributo_carta_2) {
        printf("** CARTA 1 VENCEU!! **\n");

    } else if (valor_soma_atributo_carta_1 == valor_soma_atributo_carta_2) {
        printf(" ## EMPATE!! ##\n");
    } else {
        printf("** CARTA 2 VENCEU!! ** ");
    }
    
    return 0;
}