const int led =2; // el led está conectado al D2
const int boton_pulsar =12; // el push_boton esta conectado al D11
int boton;  // // inicializa la variable boton para usar en la funcion loop()
void setup() { 
       pinMode(bpulsar,INPUT); // se declara el D12 como entrada
       pinMode(led, OUTPUT);   // se declara el D2 como salida
} 
void loop() {
       boton=digitalRead(bpulsar);  //la variable 'boton' recibe el valor de entrada de D12
       digitalWrite(led,boton);     // // el led se enciende o no de acuerdo al valor del push button 
}
/*
En este programa se pulsa un boton que enciende un led en cuanto 
este se encuentre presionado. Cuando se presiona el push_boton 
se interrumpe la ejecución para encender el LED.
        
*/