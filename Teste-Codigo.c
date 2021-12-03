#include <stdio.h>
#define LINHAS 22
#define COLUNAS 10
int main() {

    int op=0, con=0;
    float La=1.0, Sr=1.0, Ca=1.0, Li=1.0;
    float Na=0.9, Ba=0.9;
    float K=0.8, Rb=0.8;
    float Cs=0.7;
    float He=0, Ne=0, Ar=0, Kr=0, Xe=0, Rn=0;

        printf("Vizualizador de Eletronegatividade - Alpha 0.2\n\n");

        do {
            printf("Digite a sua opcao para vizualizar a eletronegatividade de um elemento:\n");
            printf("1) F\t2) O\t 3) N\t 4) Cl\t 5) Br\t 6) C\t 7) S\t 8) I\t\n\n");
            printf("9) Se\t10) Au\t11) Pd\t12) Rh\t13) Pt\t14) Ru\t15) Ir\t16) Os\n\n");
            printf("17) At\t18) Te\t19) P\t20) H\t21) As\t22) Po\t23) B\t24) At\n\n");
            printf("25) Te\t26) P\t27) H\t28) As\t29) Po\t30) B\t31) Sb\t32) Bi\n\n");
            printf("33) Pb\t34) Hg\t35) Re\t36) Cu\t37) Ni\t38) Co\t39) Ag\t40) Tc\n\n");
            printf("41) Si\t42) Ge\t43) Sn\t44) Tl\t45) Fe\t46) Mo\t47) In\t48) Cd\n\n");
            printf("49) W\t50) Ga\t51) Zn\t52) Cr\t53) V\t54) Nb\t55) Be\t56) Al\n\n");
            printf("57) Ta\t58) Ti\t59) Mn\t60) Zr\t61) Hf\t62) Sc\t63) Y\t64) Mg\n\n");
            printf("65) La\t66) Sr\t67) Ca\t68) Li\t69) Na\t70) 72) Ba\n\n");
            printf("0) Sair\n\n:");
            scanf("%d", &op);
        
        switch (op){
                   case 1:
                          printf("teste 1\n");
                          printf("Deseja Continuar?\n 1 - Sim\t2 - Nao");
                          scanf("%d",&con);
                          
                   break;
                   case 2: 
                          printf("teste 1");
                   break;
                   default:
                           printf("Programa Abortado");
                   break;
        }
        } while (con != 0);
    
        
    return 0;
}

