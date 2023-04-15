#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int>fila;
  int valor;
  bool a;
  int op;

  do{
    cout << "Que operação deseja fazer na fila?" << endl;
    cout << "1- Para adiconar um elemento na fila;" << endl
         << "2- Para remover um elemento da fila;" << endl
         << "3- Para retornar uma referência ao primeiro elemento da fila" << endl
         << "4- Para retornar uma referência ao último elemento da fila" << endl
         << "5- Para saber se a fila está vazia" << endl
         << "6- Para retornar o tamanho da fila" << endl
         << "7- Para sair" << endl;
    cin >> op;

    switch(op){
      case 1:
        cout << "Digite o valor que deseja adicionar à pilha: ";
        cin >> valor;
        pilha.push_back(valor);
        imprime(pilha);
        
      break;
      case 2:
        a = pilha.empty();
        if (a){
          cout << "A pilha está vazia. Não há elementos para remover" << endl << endl;
        } else {
          int ultimo = pilha.back();
          pilha.pop_back();
        cout << "O último elemento da pilha, que era o "<< ultimo<<", foi removido." << endl;
        imprime(pilha);
        }
        
      break;
      case 3:
         a = pilha.empty();
        if (a){
          cout << "A pilha está vazia" << endl << endl;
        } else {
          cout << "O último elemento da pilha é o "<< pilha.back() << endl << endl;
        }
        
      break;
      case 4:
        a = pilha.empty();
        if (a){
          cout << "A pilha está vazia" << endl << endl;
        } else {
          cout << "A pilha não está vazia" << endl << endl;
        }
      break;
      case 5:
        cout << "Há " << pilha.size() << " elementos na pilha" << endl << endl;
      break;
      default:
        cout << "Sair do programa\n";
      break;
    }

    
  }while(op >= 1 && op <7);

  cout << "fila = { ";
  for (auto i = fila.begin(); i != fila.end(); i++){
    cout << *i << " ";
  }
  cout << "}"<< endl << endl;
  
}