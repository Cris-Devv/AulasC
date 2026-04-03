//Criação de CRUD em C para cadastro de pessoas

#include <stdio.h> // entrada e saída de dados (printf, scanf, etc...)
#include <stdlib.h> //alocação de memória (malloc, free, etc...)
#include <string.h> //manipulação de strings (strcmp, strcpy, etc...)
#define MAX 100 //define número máximo de caractéres
#define STR 50 //define número de caractéres para strings

//estrutura para agrupar dados de alguma coisa. Basicamente tamo criando um objeto.
typedef struct { 
    int id;
    char nome[STR];
    int idade;
    char email[STR];
} Caboco; //typedef struct cria um tipo Caboco

//banco de dados em memória (vetor + contador)
Caboco banco[MAX]; //basicamente uma lista e o max é o número de indices que pode ter
int total = 0;

//função CREATE
void criar(int id, const char *nome, int idade, const char *email) {
    if (total >= MAX) {
        printf("Banco de dados cheio!\n");
        return;
    }

    banco[total].id = id;
    strncpy(banco[total].nome, nome, STR - 1); //strnpy copia o dado para o banco com limite seguro, evitando buffer overflow que pode acontecer ao usar strcpy
    strncpy(banco[total].email, email, STR - 1); //STR - 1 garante espaço para o \0 de terminação da string
    banco[total].idade = idade;
    total++; //avança o índice do vetor (lista?)

    printf("Caboco cadastrado com sucesso nessa desgraca!\n");
}

//função READ
void listar () {
    if (total == 0) { 
        printf("Caboco nenhum por aqui ainda.\n"); 
        return; 
    }

    printf("\n%-5s %-20s %-5s %-30s\n", "ID", "Nome", "Idade", "Email"); //esses %-5d e %-20d servem para formatação da saída no terminal e fazem com que tudo fique em coluna. o - é para alinhar na esquerda e o número é a largura mínima do campo. o d é para inteiros e o s para strings
    printf("%-5s %-20s %-5s %-30s\n", "---", "----", "-----", "-----"); //linha de separação entre o cabeçalho e os dados

    //vai passar por cada registro no banco e imprimir os dados formatados
    for (int i = 0; i < total; i++) {
        printf("%-5d %-20s %-5d %-30s\n",
        banco[i].id,
        banco[i].nome,
        banco[i].idade,
        banco[i].email);
    }
}

//procura por ID e retorna o índice ou -1 se não encontrado
int procurar(int id) {
    for (int i = 0; i < total; i++){
        if (banco[i].id == id) return i;
    }
    return -1; //o procurar retorna o índice na lista/vetor, não o id. Isso é usado pelo update e o delete depois para acessar o registro correto
}

//função UPDATE
void atualizar(int id, const char *novoNome, int novaIdade, const char *novoEmail) {
    int idx = procurar(id); //armazena o indice do ID encontrado com a função procurar.

    //se o procurar retornar -1, significa que o id não foi encontrado no banco
    if (idx == -1){ 
        printf("Caboco não achado.\n");
        return;
    }

    //se o id foi encontrado, atualiza os dados do caboco no índice encontrado
    strncpy(banco[idx].nome, novoNome, STR - 1);
    strncpy(banco[idx].email, novoEmail, STR - 1);
    banco[idx].idade = novaIdade;

    printf("Caboco atualizado com sucesso!\n");
}

//função DELETE
void deletar(int id) {
    int idx = procurar(id);

    if (idx == -1){
        printf("Caboco nao achado.\n");
        return;
    }

    for (int i = idx; i < total - 1; i++){ 
        banco[i] = banco[i + 1]; //isso faz com que os itens do banco/lista sejam deslocados uma posição para trás, assim substituindo o espaço anterior deixado pelo registro deletado. O total - 1 é para evitar acessar um índice que não existe mais, já que o que foi deletado ainda existe, mas está vazio.
    }

    total--; //decrementa o total para refletir a remoção do registro
    printf("Caboco deletado com sucesso!\n");
    
}

//menu interativo no terminal
int main() {
    int opcao, id, idade;
    char nome[STR], email[STR];

    //exemplinho de uns dados
    // criar(1, "Zé do Mato", 30, "zemato@gmail.com"); //chamando a função criar
    // criar(2, "Maria da Penha", 25, "mariapenha@gmail.com");
    // criar(3, "João que faz Campos", 40, "joaodopovo@gmail.com");

    do {
        printf("\n === Cadastro de Cabocos === \n");
        printf("1. Cadastrar\n2. Listar\n3. Buscar por ID\n4. Atualizar dados\n5. Deletar cadastro\n0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); //Limpa o \n deixado pelo scanf

        switch (opcao) {
            case 1: //CREATE
                printf("Digite seu ID: "); scanf("%d", &id); getchar();
                printf("Digite seu nome: "); fgets(nome, STR, stdin); nome[strcspn(nome, "\n")] = 0; //fgets serve para ler a string com os dados e strcspn é para remover o \n que o fgets deixa no final da string
                printf("Digite sua idade: "); scanf("%d", &idade); getchar();
                printf("Digite seu email: "); fgets(email, STR, stdin); email[strcspn(email, "\n")] = 0;
                criar(id, nome, idade, email);
                break;

            case 2: //READ
                listar();
                break;

            case 3: //READ por ID
                printf("Digite o seu ID: "); scanf("%d", &id);
                int i = procurar(id);
                if (i == -1){
                    printf("Caboco nao achado.\n");
                } else {
                    printf("ID: %d | Nome: %s | Idade: %d | Email: %s\n", banco[i].id, banco[i].nome, banco[i].idade, banco[i].email);
                }
                break;
            
                case 4: //UPDATE
                    printf("Digite o ID do caboco a ser atualizado: "); scanf("%d", &id); getchar();
                    if (procurar(id) == -1){
                        printf("Caboco nao achado.\n");
                        break;
                    }
                    printf("Digite o novo nome: "); fgets(nome, STR, stdin); nome[strcspn(nome, "\n")] = 0;
                    printf("Digite a nova idade: "); scanf("%d", &idade); getchar();
                    printf("Digite o novo email: "); fgets(email, STR, stdin); email[strcspn(email, "\n")] = 0;
                    atualizar(id, nome, idade, email);
                    break;
                
                case 5: //DELETE
                    printf("Digite o ID do caboco a ser deletado: "); scanf("%d", &id);
                    deletar(id);
                    break;
        }
    } while (opcao != 0);

    return 0;
}