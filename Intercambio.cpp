#include <iostream>
#include <vector>


//Coste O(n²)
void intercambiar ( int &x, int &y);
void intercambio(std::vector<int> &a, int n);



int main()
{
	
	//Inicializacion de variable
	std::vector<int> a = {5,3,7,2,1,4};
	
	//Llamada a la funcion
	intercambio(a,(int) a.size());
	
	//Mostrar resultado
	for(int i=0; i < (int) a.size() ; i++) std::cout << a[i] << ' ';
	
	return 0;
}

void intercambiar(int &x, int &y){
	
	int aux;
	aux = x;
	x = y;
	y = aux;
}

//Algoritmo de ordenacion por intercambio
void intercambio(std::vector<int> &a, int n){
	
	for(int i =0; i < n-1;i++)
		for(int j=i+1; j < n; j++)
			if(a[j] < a[i])
				intercambiar(a[i],a[j]);
}
