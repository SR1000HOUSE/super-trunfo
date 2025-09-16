#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int TAMANHO = 5;
char tabuleiro[TAMANHO][TAMANHO];

void inicializarTabuleiro() {
    for (int i = 0; i < TAMANHO; i++)
        for (int j = 0; j < TAMANHO; j++)
            tabuleiro[i][j] = '~';
}

void mostrarTabuleiro() {
    cout << "  0 1 2 3 4\n";
    for (int i = 0; i < TAMANHO; i++) {
        cout << i << " ";
        for (int j = 0; j < TAMANHO; j++) {
            cout << tabuleiro[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    srand(time(0));
    int linhaNavio = rand() % TAMANHO;
    int colunaNavio = rand() % TAMANHO;

    inicializarTabuleiro();

    cout << "Bem-vindo ao Batalha Naval!\n";
    mostrarTabuleiro();

    int tentativas = 5;
    for (int t = 1; t <= tentativas; t++) {
        int linha, coluna;
        cout << "\nTentativa " << t << " de " << tentativas << endl;
        cout << "Digite a linha (0-4): ";
        cin >> linha;
        cout << "Digite a coluna (0-4): ";
        cin >> coluna;

        if (linha == linhaNavio && coluna == colunaNavio) {
            cout << "💥 Você acertou o navio! Vitória!\n";
            tabuleiro[linha][coluna] = 'X';
            break;
        } else if (linha >= 0 && linha < TAMANHO && coluna >= 0 && coluna < TAMANHO) {
            cout << "🌊 Água! Tente novamente.\n";
            tabuleiro[linha][coluna] = 'O';
        } else {
            cout << "Coordenadas inválidas. Use valores entre 0 e 4.\n";
            t--; // não conta tentativa inválida
        }

        mostrarTabuleiro();
    }

    if (tabuleiro[linhaNavio][colunaNavio] != 'X') {
        cout << "\n😢 Fim de jogo. O navio estava em (" << linhaNavio << ", " << colunaNavio << ")\n";
        tabuleiro[linhaNavio][colunaNavio] = 'N';
        mostrarTabuleiro();
    }

    return 0;
}