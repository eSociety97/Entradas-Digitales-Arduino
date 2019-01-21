/*********************************************Capitulo 2 - Entradas Digitales *****************************************************
*                                                                                                                                 *
*     En este segundo capitulo aprenderemos a hacer a utilizar los pines digitales de nuestra placa arduino Uno la                *
*  cual tiene disponibles 14 pines digitales y cada pin puede funcionar como entrada o como salida.                                                                                                                        *
*                                                                                                                                 *
*  Para lograr esto necesitaremos:                                                                                                *
*                                                                                                                                 *
*  -Placa arduino Uno                                                                                                             *
*  -1 LED                                                                                                                         *
*  -1 Resistencia de 1k ohm (Si no tienen de 1k pueden variar el valor entre 100 ohm a 2.2 K omh)                                 *
*  -1 Push Button                                                                                                                 *
*  -1 Resistencia de 10k ohm (En este caso si es necesario este valor)                                                            *
*  -Protoboard                                                                                                                    *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                              Facebook: ESociety *
*                                                                                                              GitHub: eSociety97 *
*                                                                                                                                 *
*                                                         #NuncaDejenDeCrear                                                      *
***********************************************************************************************************************************/   


int led = 3; // Declaramos nuestra variable que usaremos para el led
int boton = 2; //Declaramos nuestra variable que usaremos para el boton
int estado = 0; //Variable que almacenara el estado del boton 
void setup(){
  pinMode(led,OUTPUT); //Declaramos como pin de salida la variable led
  pinMode(boton,INPUT); //Declaramos como pin de entrada la varible led
  }
void loop(){
  estado = digitalRead(boton); //Almacenamos los valores recibidos en estado

  if(estado == HIGH){ //Comparamos si el estado recibe un valor alto
    digitalWrite(led,HIGH); //Escribimos un valor alto en la salida digital led    
  }  
  else{  //Si la condicion es falsa se ejecuta este bloque de codigo
  digitalWrite(led,LOW); //Escribimos un valor bajo en la salida digital led
  }
}  
