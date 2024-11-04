#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int classe, decisao, caminho, troll = 25, hp = 500, dado_e, dado, rol_c; 
    char nome[21];
    srand(time(NULL));

    char des_cler[] = "Um campeao sacerdotal que empunha magia divina\n a servico de um poder maior";
    char des_guer[] = "Um mestre do combate, perito em uma \nvasta gama de armas e armaduras";
    char des_lad[] = "Um trapaceiro que utiliza de furtividade \ne astucia para sobrepujar os obstaculos e inimigos";
    char des_mago[] = "Um usuario de magia escolado,\n capaz de manipular as estruturas da realidade";
    char des_pat[] = "Um guerreiro que utiliza de poderio marcial\n e magia natural para combater ameacas nos limites da civilizacao";

    printf("Saudacoes nobre aventureiro, diga-me qual eh o seu nome?\n(Max. 20 caracteres) \n\n");
    scanf("%s", &nome);

    do
    {
        printf("\nEntao, %s, qual seria a sua classe?\n1. Clerigo\n'%s' \n\n2.Guerreiro\n'%s' \n\n3. Ladino\n'%s' \n\n4.Mago\n'%s' \n\n5.Patrulheiro\n'%s'\n\n", nome, des_cler, des_guer, des_lad, des_mago, des_pat);
        scanf("%d", &classe);
            switch(classe)
            {
                case 1:
                dado = rand () % 5 + 1;
                rol_c = rand () % 20 + 1;
                printf("Escolheste um Clerigo\nQue tem estas caracteristicas:\nForca: 14\nDestreza: 08\nConstituicao: 15\nInteligencia: 10\nSabedoria: 16\nCarisma: 12\n");
                break;
                case 2:
                dado = rand () % 7 + 1;
                rol_c = rand () % 20 + 2;
                printf("Escolheste o Guerreiro\nQue tem estas caracteristicas:\nForca: 16\nDestreza: 09\nConstituicao: 15\nInteligencia: 11\nSabedoria: 13\nCarisma: 14\n");
                break;
                case 3:
                dado = rand () % 5 + 1;
                rol_c = rand () % 20 + 3;
                printf("Escolheste um Ladino\nQue tem estas caracteristicas:\nForca: 08\nDestreza: 16\nConstituicao: 12\nInteligencia: 13\nSabedoria: 10\nCarisma: 16\n");
                break;
                case 4:
                dado = rand () % 3 + 1;
                rol_c = rand () % 20 - 1;
                printf("Escolheste um Mago\nQue tem estas caracteristicas:\nForca: 10\nDestreza: 15\nConstituicao: 14\nInteligencia: 16\nSabedoria: 12\nCarisma: 08\n");
                break;
                case 5:
                dado = rand () % 5 + 1;
                rol_c = rand () % 20;
                printf("Escolheste um Patrulheiro\nQue tem estas caracteristicas:\nForca: 14\nDestreza: 16\nConstituicao: 15\nInteligencia: 11\nSabedoria: 13\nCarisma: 10\n");
                break;
                default:
                printf("Escolha uma classe valida");
                
        }
        printf("\nEscolher novamente?\n1. Sim\n2. Nao\n\n");
        scanf("%d", &decisao);

    } while (decisao == 1);

    printf("\n---------------------");
    printf("\nvoce chega numa bifurcacao\n");
    printf("Escolha um caminho\n1.Esquerda\n2.Direita\n");
    scanf("%d", &caminho);

    if (caminho == 1)
    {
        printf("\nVoce encontra um Troll e antes que pudesse fazer qualquer coisa ele ataca\n\n");
        while (troll > 0 && hp > 0)
        {
            dado_e = rand() % 5 + 1;
            printf("Troll ataca! \nVoce recebe %d de dano!\n", dado_e);
            hp = hp - dado_e;

            printf("Voce ataca! \nO troll recebe %d de dano!\n", dado);
            troll = troll - dado;
            printf("O hp dele eh %d\n\n",troll);            
        }

        if (hp <= 0)
        {
            printf("Tu morreu");

            return 0;
        } else
        {
            printf("Voce encontra uma bolsa de ouro\n");
            printf("Voce segue seu caminho ate que nao consegue mais aguentar o cansaso\nVoce procura o lugar mais seco, acende uma fogueira e se prepara para dormir.");

            return 0;

        }
        return 0;

    } else
    {
        printf("Pela direita, voce encontra uma figura curvada se apoiando em uma bengala.\n");
        printf("Atacar?\n1.Sim\n2.Nao\n");
        scanf("%d", &decisao);
        if (decisao == 1)
        {
            printf("Voce, friamemte e cruelmente, ataca a pobre velha que apenas queria conversar.\n");
            printf("Voce segue seu caminho tendo em mente que nunca sabera o que aquela velhinha iria dizer.");
            return 0;
        } else
        {
            printf("A senhora esta na frente do que parece ser uma casa tao velha quanto o proprio tempo.\nEla fala com uma voz cansada\n\n");
            printf("--Saudacoes, jovem. Meu nome eh Isolde.\n--Eu vivo neste pantano ha muito tempo e posso dizer com certeza que muitos perigos o esperam por aqui, tenha cuidado.\n");
            printf("--Eu tenho visto muitos goblins por aqui ultimamente, aquelas criaturinhas verdes sabe?\n--Devo lhe informar sobre gases toxicos que o pantano solta no caminho mais proximo da saida.");
        } 
        
        if (rol_c > 13)
        {
            printf("--Pegue, este eh um colar que vai te protejer contra esses gases.\n--Espero que sua aventura lhe traga muitos tesouros.\n\n");
            printf("Voce pega um colar de prata com um pingente verde das maos tremulas de Isolde e segue seu caminho.");
            return 0;
        } else
        {
            printf("\n\nSem mais nada a dizer, Isolde se despede de voce que segue seu caminho.");
            return 0;
        }
        
        
    }
    
}
