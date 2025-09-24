#include <stdio.h>
int main() {
    char e1, e2, c1[4], c2[4], n1[50], n2[50];
    unsigned long p1, p2;
    float a1, a2, pb1, pb2;
    int pt1, pt2;
    
    // Entrada de dados
    printf("CARTA 1 - Estado Codigo Nome Pop Area PIB Pontos: ");
    scanf(" %c %s %[^\n] %lu %f %f %d", &e1, c1, n1, &p1, &a1, &pb1, &pt1);
    
    printf("CARTA 2 - Estado Codigo Nome Pop Area PIB Pontos: ");
    scanf(" %c %s %[^\n] %lu %f %f %d", &e2, c2, n2, &p2, &a2, &pb2, &pt2);
    
    // Cálculos dos 3 níveis
    float d1 = p1 / a1, d2 = p2 / a2;
    float pc1 = (pb1 * 1000) / p1, pc2 = (pb2 * 1000) / p2;
    float sp1 = p1 + a1 + pb1 + pt1 + pc1 + (1/d1);
    float sp2 = p2 + a2 + pb2 + pt2 + pc2 + (1/d2);
    
    // Exibição completa
    printf("\nCARTA 1: %s | Pop:%lu Area:%.2f PIB:%.2f Pontos:%d", n1, p1, a1, pb1, pt1);
    printf(" | Dens:%.2f PIBpc:%.2f SP:%.2f\n", d1, pc1, sp1);
    
    printf("CARTA 2: %s | Pop:%lu Area:%.2f PIB:%.2f Pontos:%d", n2, p2, a2, pb2, pt2);
    printf(" | Dens:%.2f PIBpc:%.2f SP:%.2f\n", d2, pc2, sp2);
    
    // Comparações
    printf("\nCOMPARACAO:\n");
    printf("Populacao: Carta %d (%d)\n", p1>p2?1:2, p1>p2);
    printf("Area: Carta %d (%d)\n", a1>a2?1:2, a1>a2);
    printf("PIB: Carta %d (%d)\n", pb1>pb2?1:2, pb1>pb2);
    printf("Pontos: Carta %d (%d)\n", pt1>pt2?1:2, pt1>pt2);
    printf("Densidade: Carta %d (%d)\n", d1<d2?1:2, d1<d2);
    printf("PIBpc: Carta %d (%d)\n", pc1>pc2?1:2, pc1>pc2);
    printf("SuperPoder: Carta %d (%d)\n", sp1>sp2?1:2, sp1>sp2);
    
    return 0;
}
