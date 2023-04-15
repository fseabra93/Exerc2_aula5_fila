#include <iostream>
#include <vector>
using namespace std;

void imprime(vector<int>f);

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
        cout << "Digite o valor que deseja adicionar à fila: ";
        cin >> valor;
        fila.push_back(valor);
        imprime(fila);
        
      break;
      case 2:
        a = fila.empty();
        if (a){
          cout << "A fila está vazia. Não há elementos para remover" << endl << endl;
        } else {
          int primeiro = fila.front();
          fila.erase(fila.begin());
        cout << "O primeiro elemento da fila, que era o "<< primeiro<<", foi removido." << endl;
        imprime(fila);
        }
        
      break;
      case 3:
         a = fila.empty();
        if (a){
          cout << "A fila está vazia" << endl << endl;
        } else {
          cout << "O primeiro elemento da fila é o "<< fila.front() << endl << endl;
        }
        imprime(fila);
      break;

      case 4:
         a = fila.empty();
        if (a){
          cout << "A fila está vazia" << endl << endl;
        } else {
          cout << "O último elemento da fila é o "<< fila.back() << endl << endl;
        }
        imprime(fila);
      break;
      case 5:
        a = fila.empty();
        if (a){
          cout << "A fila está vazia" << endl << endl;
        } else {
          cout << "A fila não está vazia" << endl << endl;
        }
        imprime(fila);
      break;
      case 6:
        cout << "Há " << fila.size() << " elementos na fila" << endl << endl;
        imprime(fila);
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

void imprime(vector<int>f){
  cout << "fila = { ";
  for (auto i = f.begin(); i != f.end(); i++){
    cout << *i << " ";
  }
  cout << "}"<< endl << endl;

}