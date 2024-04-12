/*
   Fundacion Kinal
   Centro educativo tecnico laboral kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Escritura en un pin digital (encender o apagar un pin digital)
   Dev: Diego Alejandro Felipe Chis
   Fecha: 12 de abril
*/

//Directivas de procesador
#define LedNaranja  4      //pin4 conectado a un led
#define tiempo_espera 500  // tiempo entre estaods del led

void setup(){
  pinMode(LedNaranja, OUTPUT);   //Pin4 conectado a un led
  digitalWrite(LedNaranja, LOW); //Led conectado al pin 13 inicia
}

void loop()
{
  digitalWrite(LedNaranja, HIGH); //Enciendo el led conectado al pin4
  delay(tiempo_espera); //espera de 500 milisegundos
  digitalWrite(LedNaranja, LOW); //Apago el led conectado al pin4
  delay(tiempo_espera); //espera de 500ms
}