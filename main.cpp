#include <iostream>
using namespace std;

/* 
	Na matemática, a sucessão de Fibonacci (ou sequência de Fibonacci), é uma sequência de números inteiros, começando normalmente por 0 e 1, 
	na qual cada termo subsequente corresponde à soma dos dois anteriores. 
	A sequência recebeu o nome do matemático italiano Leonardo de Pisa ou Leonardo Fibonacci, mais conhecido por apenas Fibonacci, 
	que descreveu, no ano de 1202, o crescimento de uma população de coelhos, a partir desta.
	
	Esta sequência já era, no entanto, conhecida na antiguidade.
	Os números de Fibonacci são, portanto, os números que compõem a seguinte sequência;
	
		0,1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, ... 	
 */

int main(int argc, char** argv) 
{

    int t, f, Soma, ultimo=1, penultimo=0;
    
    cout << "Deseja exibir quantos termos ? Ex: 10 = 0, 1, 1, 2, 5, 8, 13, 21, e 34 ";

    cout << "Entre com a quantidade de termos: ";
    cin >> t;

    cout << penultimo << endl << ultimo << endl;

    for(f=3 ; f<=t ; f++){
        cout << (ultimo+penultimo) << endl;

        Soma = penultimo;
        penultimo = ultimo;
        ultimo = ultimo + Soma;
    }

    return 0;
}
