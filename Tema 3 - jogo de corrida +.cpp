// Tema 3 - Jogo de Corrida.
#include <iostream>
#include <string>
using namespace std;

// Identificador da fun��o 'imprimir_espa�os'.
void imprimir_espacos(int total);


int main(int argc, char* args[])
{
	// Quantidade Total de Espa�os.
	int total_espacos = 50;
	// variveis para salvar o nome dso jogadores
	string nome_jog1 , nome_jog2;
	//armazernar o nome dos jogadores
	cout << "digite o nome do jogador 1:" << endl; 
    cin >> nome_jog1 ;
	cout << "digite o nome do jogador 2:" << endl; 
    cin >> nome_jog2 ;
	/*
	*	La�o para as rodadas do jogo. 
	*	A cada rodada o carro do jogador anda 1 (um) espa�o.
	*
	*	Rodada		Carro
	*	0			 s
	*   1			  s
	*   2			   s
	*   3			    s
	*	...			...
	*   9			          s
	*
	*/
	int rodada = 0;
	while (rodada < total_espacos)
	{
		//
	
		// Mostra em tela o Letreiro do Jogo.
		cout << "Jogo de Corrida" << endl;
		// Mostra em tela o cartaz de fim de pista. 
		imprimir_espacos(total_espacos);
		cout << "|CHEGADA|" << endl;

		// Jogador 1: 
		//	a) Coloca uma quantidade de espa�os dependendo da rodada.
		//  b) Mostra o carro.
		cout << nome_jog1 << endl;
		imprimir_espacos(rodada);
		cout << "  _  " << endl;
		imprimir_espacos(rodada);
		cout << "-o-o>" << endl;
        
        for (int cont = 0; cont < total_espacos; cont++) cout << "-";
        cout << endl;
        //carro do jogador 2 
        cout << nome_jog2 << endl; 
        imprimir_espacos(rodada);
		cout << "  _  " << endl;
		imprimir_espacos(rodada);
		cout << "-o-o>" << endl;

		// Limpa a tela para mostrar a pr�xima rodada.
		system("cls");
		
		// Passa para a pr�xima rodada do la�o.
		rodada++;
	}

	return 0;
}

/*
*	A fun��o serve pra mostrar espa�os em branco na tela.
*	
*	int total : Quantidade de espa�os que ser�o mostrados.
*
*/
void imprimir_espacos(int total)
{
	// Imprime espa�os de 'qntd_atual' at� 'total'.
	for (int qntd_atual = 0; qntd_atual < total; qntd_atual++)
	{
		cout << " ";
	}
}

