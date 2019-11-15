#include <iostream>
#include "Stack.h"

int main(){
	
	Stack<std::string> miPila;
	miPila.push("ESE PINCHE JOTO");
	miPila.push("el mamon");
	miPila.push("PRUEBA");
	std::cout << "tamaño de la Pila: " << miPila.size() << '\n';
	
	//std::cout << miPila.top() << ' '; 
	//miPila.pop();

	//std::cout << miPila.top() << ' '; 
	//miPila.pop();

	//std::cout << miPila.top() << ' '; 
	//miPila.pop();

	
	for(int i = miPila.size(); i > 0; i--){
		std::cout << miPila.top() << ' ' << miPila.size() << '\n'; 
		miPila.pop();
	}

//	std::cout << miPila.top() << ' ' << miPila.size() << '\n'; 
//	miPila.pop();

}

