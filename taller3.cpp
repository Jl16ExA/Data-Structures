//Juan David Lopez Becerra - 1027150526

// 1 Hacer una funcion recursiva que reciba un entero como parametro y retorne el numero invertido

#include <iostream>
using namespace std;

//Esta funcion funcona de la siguente manera:
//Si n = 1234
//Entonces invertir(n, 0) = invertir(123, 4) = invertir(12, 43) = invertir(1, 432) = invertir(0, 4321) = 4321
int invertir(int n, int invertido){
    // Caso base
    if(n == 0){
        return invertido;
    }
    // Caso recursivo
    else{
        // Se multiplica por 10 para que el numero que se va a agregar este en la posicion correcta
        invertido = invertido * 10 + n % 10;
        // Se divide por 10 para eliminar el ultimo digito
        return invertir(n / 10, invertido);
    }
}

//2. Hacer una funcion recursiva que reciba un entero como parametro y retorne true 
//si el parametro recibido corresponde a un numero binario

//Esta funcion funcona de la siguente manera:
//Si n = 1011
//Entonces esBinario(n) = esBinario(101) = esBinario(10) = esBinario(1) = esBinario(0) = true
bool esBinario(int n){
    // Caso base
    if(n == 0){
        return true;
    }
    // Caso recursivo, utiliza la misma logica del ejercicio anterior para iterar por cada uno de los numeors.
    else{
        // Si el ultimo digito es 0 o 1 entonces se llama a la funcion con el numero sin el ultimo digito
        if(n % 10 == 0 || n % 10 == 1){
            return esBinario(n / 10);
        }
        // Si el ultimo digito es diferente de 0 o 1 entonces no es binario
        else{
            return false;
        }
    }
}


// 3. Hacer una funcion recursiva que reciba un arreglo de enteros su dimension y retorne el maximo


//La funcion maximo funciona de la siguiente manera:
//Si arreglo = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} y dimension = 10
//Entonces maximo(arreglo, dimension) = maximo(arreglo, 9) = maximo(arreglo, 8) = ... = maximo(arreglo, 1) = 10
int maximo(int arreglo[], int dimension){
    // Caso base
    if(dimension == 1){
         //Retorna el primer item del arreglo como el maximo
        return arreglo[0];
    }

    // Caso recursivo
    else{
        // Se llama a la funcion con el arreglo y la dimension sin el ultimo elemento
        int max = maximo(arreglo, dimension - 1);
        // Se compara el maximo de los elementos anteriores con el ultimo elemento
        if(max > arreglo[dimension - 1]){
            return max;
        }
        // Si el ultimo elemento es mayor que el maximo de los elementos anteriores entonces se retorna el ultimo elemento
        else{
            return arreglo[dimension - 1];
        }
    }
}

// 4. Hacer una funcion recusriva que reciba un arreglo de enteros su dimension e imprima los elementos del arreglo
// La funcion imprimirArreglo funciona de la siguiente manera:
// Si arreglo = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} y dimension = 10
// Entonces imprimirArreglo(arreglo, dimension) = imprimirArreglo(arreglo, 9) = imprimirArreglo(arreglo, 8) = ... = imprimirArreglo(arreglo, 1) = 1 2 3 4 5 6 7 8 9 10
void imprimirArreglo(int arreglo[], int dimension){
    // Caso base
    if(dimension == 1){
        cout << arreglo[0] << " ";
    }

    // Caso recursivo
    else{
        imprimirArreglo(arreglo, dimension - 1);
        cout << arreglo[dimension - 1] << " ";
    }
}

// Se implementa el uso de todas las funciones en el main
int main(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "El numero invertido es: " << invertir(n, 0) << endl;
    if(esBinario(n)){
        cout << "El numero es binario" << endl;
    }
    else{
        cout << "El numero no es binario" << endl;
    }
    int arreglo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int dimension = sizeof(arreglo) / sizeof(arreglo[0]);
    cout << "El maximo es: " << maximo(arreglo, dimension) << endl;
    imprimirArreglo(arreglo, dimension);
    cout << endl;
    return 0;
}
