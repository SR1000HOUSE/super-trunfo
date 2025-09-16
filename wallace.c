    printf("Digite o sexo do aluno (1 para masculino, 2 para feminino): ");
    scanf("%d", &sexo);

    printf("Digite a escolaridade do aluno (1 para ensino fundamental, 2 para ensino médio, 3 para ensino superior): ");
    scanf("%d", &escolaridade);

    printf("\n📋 Cadastro do Aluno:\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Matrícula: %d\n", matricula);
    printf("Sexo: %s\n", (sexo == 1) ? "Masculino" : "Feminino");

    printf("Escolaridade: ");
    switch (escolaridade) {
        case 1:
            printf("Ensino Fundamental\n");
            break;
        case 2:
            printf("Ensino Médio\n");
            break;
        case 3:
            printf("Ensino Superior\n");
            break;
        default:
            printf("Escolaridade inválida\n");
    }
printf("Digite a matrícula do aluno: ");
scanf("%d", &matricula);
return 0;
}
