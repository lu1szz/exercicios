#include <iostream>
using namespace std;

int main() {
    // Questão 1
    float valorInstalacao = 300.00;
    float valorLimpeza = 150.00;
    float valorManutencao = 499.99;
    float totalPagamento = valorInstalacao + valorLimpeza + valorManutencao;
    cout << "O cliente devera pagar R$" << totalPagamento << " para a empresa." << endl;

    // Questão 2
    int horasTrabalhadasPorDia = 8;
    float valorPorHora = 35.00;
    float salarioJoaquim = horasTrabalhadasPorDia * valorPorHora;
    cout << "Joaquim deve receber R$" << salarioJoaquim << " ao final do dia." << endl;

    // Questão 3
    int unidadesPorCaixaBombom = 27;
    int unidadesCompradasBombom = 16;
    int totalBombons = unidadesPorCaixaBombom * unidadesCompradasBombom;
    cout << "Pamela tem " << totalBombons << " bombons." << endl;

    // Questão 4
    int totalGarrafasVendidas = 300;
    int garrafasPorCaixaAgua = 20;
    int totalCaixasAgua = totalGarrafasVendidas / garrafasPorCaixaAgua;
    cout << "A loja usou " << totalCaixasAgua << " caixas de agua." << endl;

    // Questão 5
    int camisetasInicial = 120;
    int camisetasVendidas = 80;
    int camisetasNovaCompra = 50;
    int camisetasSobrou = 40;
    int precoCamiseta = 30;
    
    float faturamento = 900.00;
    
    int camisetasRestantes = (camisetasNovaCompra + camisetasSobrou) ;

    cout << "A loja tem " << camisetasRestantes << " camisetas agora." << endl;
    cout << "O faturamento total foi de R$" << faturamento << "." << endl;

    return 0;
}
