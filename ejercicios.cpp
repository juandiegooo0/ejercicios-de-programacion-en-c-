#include <iostream>
#include <cmath>

using namespace std;

//ejercicio 24
int mcd(int a, int b){
    	while (b != 0){
        	int temp = b;
       		b = a % b;
        	a = temp;
    	}
    	return a;
	}

//ejercicio 25
// funcion recursiva para calcular el factorial de un numero
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// funcion recursiva de Ackermann
int ackermann(int x, int y) {
    if (x == 0)
        return y + 1;
    if (y == 0)
        return ackermann(x - 1, 1);
    return ackermann(x - 1, ackermann(x, y - 1));
}
int main(){
	
	
	//ejercicio 1
	cout << "Hola, ya se imprimir frases" << endl;
	
	
	//ejercicio 2
	cout << "273" << endl;
	
	
	//ejercicio 3
	cout << "5,3" << endl;
	
	
	//ejercicio 4
	cout << (1234+532) << endl;
	
	
	//ejercicio 5
	cout << (1234-532) << endl;
	
	
	//ejercicio 6
	cout << (1234*532) << endl;
	
	
	//ejercicio 7
	cout << (1234/532) << endl;
	
	
	//ejercicio 8
	for (int i = 1; i < 4; i++){
		cout << i << " ";
	}
	cout << endl;
	
	//ejercicio 9
	for (int i = 1; i < 10; i++){
		cout << i << " ";
	}
	cout << endl;
	
	//ejercicio 10
	for (int i = 1; i <= 10000; i++){
		cout << i << " ";
	}
	cout << endl;
	
	//ejercicio 11
	for (int i = 5; i < 11; i++){
		cout << i << " ";
	}
	cout <<endl;
	
	//ejercicio 12
	for (int i = 5; i < 16; i++){
		cout << i << " ";
	}
	cout << endl;
	
	//ejercicio 13
	for (int i = 5; i <= 15000; i++){
		cout << i << " ";
	}
	cout << endl;
	
	//ejercicio 14
	for (int i = 1; i <= 200; i++){
		cout << "hola" << " ";
	}
	cout <<endl;
	
	//ejercicio 15
	for (int i = 1; i <= 30; ++i) {
        cout << "el cuadrado de " << i << " es " << (i * i) << endl;
    }
    cout << endl;
    
	//ejercicio 16
	long long n=1;
	for (int i = 1; i <= 20; ++i) {
        n*=i;
    }
    cout << "el producto de los 20 numeros naturales es = " << n << endl;
    
	//ejercicio 17
	long long p = 0;
	for (int i = 1; i <= 100; ++i) {
        p += i * i;
    }
    cout << "la suma del cuadrado de los primeros 100 numeros es = " << p << endl;
	
	//ejercicio 18
	int num, sum = 0;
	cout << "ingresa un numero: ";
	cin >> num;
	for(int i = 1; i <=100; ++i){
		sum += num + i;
	}
	cout << endl << "la suma de los 100 numeros siguientes de " << num << " es: " << sum << endl;
	
	//ejercicio 19
	double euro, cambio = 1.09, dolar;
	cout << "ingresa la cantidad en euros: ";
	cin >> euro;
	dolar = euro * cambio;
	cout << euro << " euros equivale a " << dolar << " dolares." << endl;
	
	
	//ejercicio 20
	int altura, ancho, area;
	cout << "ingresa la altura y luego el ancho del cuadrado: ";
	cin >> altura >> ancho;
	area = altura * ancho;
	cout << " el area del cuadrado es de " << area << endl;
	
	//ejercicio 21
	int x, z;
	cout << "ingresa un numero y luego otro para verificar cual es mayor o menor: ";
	cin >> x >> z;
	if(x > z){
		cout << x << " es el numero mayor y " << z << " el numero menor" << endl;
	} else {
		cout << z << " es el numero mayor y " << x << " el numero menor" << endl;
	}
	
	//ejercicio 22
	int numero;
    
    cout << "ingresa un numero entero: ";
    cin >> numero;
    
    cout << "numeros impares menores que " << numero << ": ";
    for (int i = 1; i < numero; i += 2) {
        cout << i << " ";
    }
    
	//ejercicio 23
    int num1, num2;
    
    cout << "ingrese dos numeros enteros: ";
    cin >> num1 >> num2;
    
    int resultado = mcd(num1, num2);
    
    cout << "el maximo comun divisor de " << num1 << " y " << num2 << " es: " << resultado << endl;
    
	//ejercicio 24
	double a, b, c;
    
    cout << "ingresa los coeficientes a, b y c de la ecuacion cuadratica: ";
    cin >> a >> b >> c;
    
    double discriminante = b * b - 4 * a * c;
    
    if (discriminante > 0) {
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "las soluciones son: " << x1 << " y " << x2 << endl;
    } else if (discriminante == 0) {
        double x = -b / (2 * a);
        cout << "la ecuacion tiene una unica solucion: " << x << endl;
    } else {
        cout << "la ecuacion no tiene soluciones reales." << endl;
    }
    
	//ejercicio 25
	int num23, f, y;
    
    //calculo del factorial
    cout << "ingrese un numero para calcular su factorial: ";
    cin >> num23;
    cout << "el factorial de " << num23 << " es: " << factorial(num23) << endl;
    
    //calculo de la funcion de ackermann
    cout << "ingrese los valores de x e y para la funcion de ackermann: ";
    cin >> f >> y;
    cout << "ackermann(" << f << ", " << y << ") = " << ackermann(f, y) << endl;
    
	//ejercicio 26
	int num11, num22, num33;
    
    cout << "ingrese tres numeros enteros positivos: ";
    cin >> num11 >> num22 >> num33;
    
    int menor = min(num11, min(num22, num33));
    int mayor = max(num11, max(num22, num33));
    
    cout << "el numero menor es: " << menor << endl;
    cout << "el numero mayor es: " << mayor << endl;
    
	//ejercicio 27
	double fahrenheit;
    
    cout << "ingrese temperaturas en grados Fahrenheit (999 para salir): " << endl;
    
    while (true) {
        cout << "temperatura en Fahrenheit: ";
        cin >> fahrenheit;
        
        if (fahrenheit == 999) {
            cout << "programa finalizado." << endl;
            break;
        }
        
        double celsius = (5.0 / 9.0) * (fahrenheit - 32);
        cout << "equivalente en celsius: " << celsius << "°c" << endl;
    }
    
	//ejercicio 28
	
	//ejercicio 29
	//ejercicio 30
	int limite;
    
    cout << "ingrese el limite superior para encontrar numeros primos: ";
    cin >> limite;
    
    cout << "numeros primos hasta " << limite << ": ";
    
    for (int num111 = 2; num <= limite; num111++) {
        bool esPrimo = true;
        
        for (int i = 2; i * i <= num111; i++) {
            if (num % i == 0) {
                esPrimo = false;
                break;
            }
        }
        
        if (esPrimo) {
            cout << num111 << " ";
        }
    }
}
