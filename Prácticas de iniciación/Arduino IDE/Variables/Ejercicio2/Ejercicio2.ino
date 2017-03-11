/**
 * Ejercicio 2
 * 
 * Realizar la siguiente operación matemática: 2 + 3  ( 5 x 2 )
 * 
 * @author Miguel Ángel Abellán
 * @company El Cable Amarillo
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0 (Se 
 * permite el uso comercial de la obra y de las posibles obras derivadas, 
 * la distribución de las cuales se debe hacer con una licencia igual a 
 * la que regula la obra original.)
 */

// Inicializamos las variables teniendo en cuenta su tipo de datos
int numero_1;
int numero_2;
int numero_3;
int numero_4;
int resultado;

void setup() {
  Serial.begin(9600);
  
  numero_1 = 2;
  numero_2 = 3;
  numero_3 = 5;
  numero_4 = 2;
  resultado = numero_1 + numero_2 * (numero_3 * numero_4);
  
  Serial.print("El resultado es: ");
  Serial.println(resultado);
}

void loop() {

}
