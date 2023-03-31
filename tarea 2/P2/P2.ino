/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico:EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: maquina de comida.
   Dev: Kevin Audiel Solano Torres
   Fecha: 31 de marzo
*/

#define botton  2 //boton 1 conectado al pin 2+
#define botton1 3 //boton 2 conecado al pin 3-
struct producto {
  char nombre [20];
  int  stock;
  int precio;  
};

int A=0;// para while 
int B; 
producto producto_1={"cocacola", 11,5};//NOMBRE DEL PRODUCTO,STOCK,PRECIO
producto producto_2={"chocolates", 10,2};//NOMBRE DEL PRODUCTO,STOCK,PRECIO
producto producto_3={"tortrix", 13,2};//NOMBRE DEL PRODUCTO,STOCK,PRECIO
producto producto_4={"Doritos", 11,4};//NOMBRE DEL PRODUCTO,STOCK,PRECIO

void setup() {
 Serial.begin(9600);//INICIO LA COMUNICACION SERIAL A 9600.
 Serial.println("Maquina Expendedora de comida");
 pinMode(2,INPUT);//ENTRADA PIN 2
 pinMode(3,INPUT);// ENTRADA PIN 3

}

void loop() {
if(digitalRead(botton)==HIGH){;
 A = A+1;
 B = 1;
delay(500);
}


if (digitalRead(botton1)==HIGH){;
 A = A-1;
 B = 1;
delay(500);
}

if(A>4){
  A=1;
}

if (A<1)
 A=4;
 

while (B==1) {

switch(A){

case (1): {
Serial.println("Producto 1");
Serial.print("Nombre del Producto: ");
Serial.println(producto_1.nombre);
Serial.print("Precio: Q.");
Serial.println(producto_1.precio);
Serial.print("Stock ");
Serial.println(producto_1.stock);
Serial.println("");
B= 0;
break;
}
 case (2): {
Serial.println("Producto 2");
Serial.print("Nombre del Producto: ");
Serial.println(producto_2.nombre);
Serial.print("Precio: Q.");
Serial.println(producto_2.precio);
Serial.print("Stock ");
Serial.println(producto_2.stock);
Serial.println("");
B= 0;
break;
}
 case (3): {
Serial.println("Producto 3");
Serial.print("Nombre del Producto: ");
Serial.println(producto_3.nombre);
Serial.print("Precio: Q.");
Serial.println(producto_3.precio);
Serial.print("Stock ");
Serial.println(producto_3.stock);
Serial.println("");
B= 0;
break;
}

 case (4): {
Serial.println("Producto 4");
Serial.print("Nombre del Producto: ");
Serial.println(producto_4.nombre);
Serial.print("Precio: Q.");
Serial.println(producto_4.precio);
Serial.print("Stock ");
Serial.println(producto_4.stock);
Serial.println("");
B= 0;
break;
}


}
}
}
