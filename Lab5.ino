#define LedC1_0 2                                                 //Definir pines
#define LedC1_1 3
#define LedC1_2 4
#define LedC1_3 5
#define LedC1_4 6
#define LedC1_5 7
#define LedC1_6 8
#define LedC1_7 9
#define LedC1_W 38

#define LedC2_0 23
#define LedC2_1 24
#define LedC2_2 25
#define LedC2_3 26
#define LedC2_4 27
#define LedC2_5 28
#define LedC2_6 29
#define LedC2_7 30
#define LedC2_W 37

int cont1;                                                        //Definir variables
int cont2;
int etapa;
int antir;

void setup() {
  cont1 = 0;                                                      //Iniciar en 0 variables
  cont2 = 0;
  etapa = 0;
  antir = 0;
  
  pinMode(LedC1_0, OUTPUT);                                       //Definir pines como salidas
  pinMode(LedC1_1, OUTPUT);
  pinMode(LedC1_2, OUTPUT);
  pinMode(LedC1_3, OUTPUT);
  pinMode(LedC1_4, OUTPUT);
  pinMode(LedC1_5, OUTPUT);
  pinMode(LedC1_6, OUTPUT);
  pinMode(LedC1_7, OUTPUT);
  pinMode(LedC1_W, OUTPUT);
  
  pinMode(LedC2_0, OUTPUT);
  pinMode(LedC2_1, OUTPUT);
  pinMode(LedC2_2, OUTPUT);
  pinMode(LedC2_3, OUTPUT);
  pinMode(LedC2_4, OUTPUT);
  pinMode(LedC2_5, OUTPUT);
  pinMode(LedC2_6, OUTPUT);
  pinMode(LedC2_7, OUTPUT);
  pinMode(LedC2_W, OUTPUT);
  
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  
  pinMode(PUSH1, INPUT_PULLUP);                                   //Definir botones con pullup
  pinMode(PUSH2, INPUT_PULLUP);
  
}

void loop() {
    while(etapa == 0){                                            //Cuenta regresiva
      digitalWrite(RED_LED, HIGH);                                //Rojo
      digitalWrite(GREEN_LED, LOW);
      digitalWrite(BLUE_LED, LOW);
      delay(1000);
      
      digitalWrite(RED_LED, HIGH);                                //Amarillo
      digitalWrite(GREEN_LED, HIGH);
      digitalWrite(BLUE_LED, LOW);
      delay(1000);
      
      digitalWrite(RED_LED, LOW);                                 //Verde
      digitalWrite(GREEN_LED, HIGH);
      digitalWrite(BLUE_LED, LOW);
      delay(1000);
      digitalWrite(GREEN_LED, LOW);
      etapa = 1;                                                  //Fin de etapa 0
    }
    
    while(etapa == 1){                                            //Carrera
      if(digitalRead(PUSH1) == LOW){                              //Si se presionó el botón
        delay(5);
        antir = 1;                                                //Activar anti rebote
        if(digitalRead(PUSH1) == HIGH && antir == 1){             //Si ya se soltó el botón
          if (cont1 == 0){                                        //Contador de década 
            digitalWrite(LedC1_0, HIGH);
            digitalWrite(LedC1_1, LOW);
            digitalWrite(LedC1_2, LOW);
            digitalWrite(LedC1_3, LOW);
            digitalWrite(LedC1_4, LOW);
            digitalWrite(LedC1_5, LOW);
            digitalWrite(LedC1_6, LOW);
            digitalWrite(LedC1_7, LOW);
            digitalWrite(LedC1_W, LOW);
            cont1 = 1;                                            //Aumentar contador
          }
          else if (cont1 == 1){
            digitalWrite(LedC1_0, LOW);
            digitalWrite(LedC1_1, HIGH);
            digitalWrite(LedC1_2, LOW);
            digitalWrite(LedC1_3, LOW);
            digitalWrite(LedC1_4, LOW);
            digitalWrite(LedC1_5, LOW);
            digitalWrite(LedC1_6, LOW);
            digitalWrite(LedC1_7, LOW);
            digitalWrite(LedC1_W, LOW);
            cont1 = 2;                                            //Aumentar contador
          }
          else if (cont1 == 2){
            digitalWrite(LedC1_0, LOW);
            digitalWrite(LedC1_1, LOW);
            digitalWrite(LedC1_2, HIGH);
            digitalWrite(LedC1_3, LOW);
            digitalWrite(LedC1_4, LOW);
            digitalWrite(LedC1_5, LOW);
            digitalWrite(LedC1_6, LOW);
            digitalWrite(LedC1_7, LOW);
            digitalWrite(LedC1_W, LOW);
            cont1 = 3;                                            //Aumentar contador
          }
          else if (cont1 == 3){
            digitalWrite(LedC1_0, LOW);
            digitalWrite(LedC1_1, LOW);
            digitalWrite(LedC1_2, LOW);
            digitalWrite(LedC1_3, HIGH);
            digitalWrite(LedC1_4, LOW);
            digitalWrite(LedC1_5, LOW);
            digitalWrite(LedC1_6, LOW);
            digitalWrite(LedC1_7, LOW);
            digitalWrite(LedC1_W, LOW);
            cont1 = 4;                                            //Aumentar contador
          }
          else if (cont1 == 4){
            digitalWrite(LedC1_0, LOW);
            digitalWrite(LedC1_1, LOW);
            digitalWrite(LedC1_2, LOW);
            digitalWrite(LedC1_3, LOW);
            digitalWrite(LedC1_4, HIGH);
            digitalWrite(LedC1_5, LOW);
            digitalWrite(LedC1_6, LOW);
            digitalWrite(LedC1_7, LOW);
            digitalWrite(LedC1_W, LOW);
            cont1 = 5;                                            //Aumentar contador
          }
          else if (cont1 == 5){
            digitalWrite(LedC1_0, LOW);
            digitalWrite(LedC1_1, LOW);
            digitalWrite(LedC1_2, LOW);
            digitalWrite(LedC1_3, LOW);
            digitalWrite(LedC1_4, LOW);
            digitalWrite(LedC1_5, HIGH);
            digitalWrite(LedC1_6, LOW);
            digitalWrite(LedC1_7, LOW);
            digitalWrite(LedC1_W, LOW);
            cont1 = 6;                                            //Aumentar contador
          }
          else if (cont1 == 6){
            digitalWrite(LedC1_0, LOW);
            digitalWrite(LedC1_1, LOW);
            digitalWrite(LedC1_2, LOW);
            digitalWrite(LedC1_3, LOW);
            digitalWrite(LedC1_4, LOW);
            digitalWrite(LedC1_5, LOW);
            digitalWrite(LedC1_6, HIGH);
            digitalWrite(LedC1_7, LOW);
            digitalWrite(LedC1_W, LOW);
            cont1 = 7;                                            //Aumentar contador
          }
          else if (cont1 == 7){
            digitalWrite(LedC1_0, LOW);
            digitalWrite(LedC1_1, LOW);
            digitalWrite(LedC1_2, LOW);
            digitalWrite(LedC1_3, LOW);
            digitalWrite(LedC1_4, LOW);
            digitalWrite(LedC1_5, LOW);
            digitalWrite(LedC1_6, LOW);
            digitalWrite(LedC1_7, HIGH);
            digitalWrite(LedC1_W, LOW);
            cont1 = 8;                                            //Aumentar contador
          }
          else if (cont1 == 8){
            digitalWrite(LedC1_0, LOW);
            digitalWrite(LedC1_1, LOW);
            digitalWrite(LedC1_2, LOW);
            digitalWrite(LedC1_3, LOW);
            digitalWrite(LedC1_4, LOW);
            digitalWrite(LedC1_5, LOW);
            digitalWrite(LedC1_6, LOW);
            digitalWrite(LedC1_7, LOW);
            digitalWrite(LedC1_W, HIGH);  
            etapa = 2;                                            //Ya hay ganador, cambiar de etapa
          }
        antir = 0;                                                //Reiniciar anti rebote
        }
      }

      if(digitalRead(PUSH2) == LOW){                              //Si se presionó el botón
        delay(5);
        antir = 2;                                                //Activar anti rebote
        if(digitalRead(PUSH2) == HIGH && antir == 2){             //Si ya se soltó el botón
          if (cont2 == 0){                                        //Contador de década
            digitalWrite(LedC2_0, HIGH);
            digitalWrite(LedC2_1, LOW);
            digitalWrite(LedC2_2, LOW);
            digitalWrite(LedC2_3, LOW);
            digitalWrite(LedC2_4, LOW);
            digitalWrite(LedC2_5, LOW);
            digitalWrite(LedC2_6, LOW);
            digitalWrite(LedC2_7, LOW);
            digitalWrite(LedC2_W, LOW);
            cont2 = 1;                                            //Aumentar contador
          }
          else if (cont2 == 1){
            digitalWrite(LedC2_0, LOW);
            digitalWrite(LedC2_1, HIGH);
            digitalWrite(LedC2_2, LOW);
            digitalWrite(LedC2_3, LOW);
            digitalWrite(LedC2_4, LOW);
            digitalWrite(LedC2_5, LOW);
            digitalWrite(LedC2_6, LOW);
            digitalWrite(LedC2_7, LOW);
            digitalWrite(LedC2_W, LOW);
            cont2 = 2;                                            //Aumentar contador
          }
          else if (cont2 == 2){
            digitalWrite(LedC2_0, LOW);
            digitalWrite(LedC2_1, LOW);
            digitalWrite(LedC2_2, HIGH);
            digitalWrite(LedC2_3, LOW);
            digitalWrite(LedC2_4, LOW);
            digitalWrite(LedC2_5, LOW);
            digitalWrite(LedC2_6, LOW);
            digitalWrite(LedC2_7, LOW);
            digitalWrite(LedC2_W, LOW);
            cont2 = 3;                                            //Aumentar contador
          }
          else if (cont2 == 3){
            digitalWrite(LedC2_0, LOW);
            digitalWrite(LedC2_1, LOW);
            digitalWrite(LedC2_2, LOW);
            digitalWrite(LedC2_3, HIGH);
            digitalWrite(LedC2_4, LOW);
            digitalWrite(LedC2_5, LOW);
            digitalWrite(LedC2_6, LOW);
            digitalWrite(LedC2_7, LOW);
            digitalWrite(LedC2_W, LOW);
            cont2 = 4;                                            //Aumentar contador
          }
          else if (cont2 == 4){
            digitalWrite(LedC2_0, LOW);
            digitalWrite(LedC2_1, LOW);
            digitalWrite(LedC2_2, LOW);
            digitalWrite(LedC2_3, LOW);
            digitalWrite(LedC2_4, HIGH);
            digitalWrite(LedC2_5, LOW);
            digitalWrite(LedC2_6, LOW);
            digitalWrite(LedC2_7, LOW);
            digitalWrite(LedC2_W, LOW);
            cont2 = 5;                                            //Aumentar contador
          }
          else if (cont2 == 5){
            digitalWrite(LedC2_0, LOW);
            digitalWrite(LedC2_1, LOW);
            digitalWrite(LedC2_2, LOW);
            digitalWrite(LedC2_3, LOW);
            digitalWrite(LedC2_4, LOW);
            digitalWrite(LedC2_5, HIGH);
            digitalWrite(LedC2_6, LOW);
            digitalWrite(LedC2_7, LOW);
            digitalWrite(LedC2_W, LOW);
            cont2 = 6;                                            //Aumentar contador
          }
          else if (cont2 == 6){
            digitalWrite(LedC2_0, LOW);
            digitalWrite(LedC2_1, LOW);
            digitalWrite(LedC2_2, LOW);
            digitalWrite(LedC2_3, LOW);
            digitalWrite(LedC2_4, LOW);
            digitalWrite(LedC2_5, LOW);
            digitalWrite(LedC2_6, HIGH);
            digitalWrite(LedC2_7, LOW);
            digitalWrite(LedC2_W, LOW);
            cont2 = 7;                                            //Aumentar contador
          }
          else if (cont2 == 7){
            digitalWrite(LedC2_0, LOW);
            digitalWrite(LedC2_1, LOW);
            digitalWrite(LedC2_2, LOW);
            digitalWrite(LedC2_3, LOW);
            digitalWrite(LedC2_4, LOW);
            digitalWrite(LedC2_5, LOW);
            digitalWrite(LedC2_6, LOW);
            digitalWrite(LedC2_7, HIGH);
            digitalWrite(LedC2_W, LOW);
            cont2 = 8;                                            //Aumentar contador
          }
          else if (cont2 == 8){
            digitalWrite(LedC2_0, LOW);
            digitalWrite(LedC2_1, LOW);
            digitalWrite(LedC2_2, LOW);
            digitalWrite(LedC2_3, LOW);
            digitalWrite(LedC2_4, LOW);
            digitalWrite(LedC2_5, LOW);
            digitalWrite(LedC2_6, LOW);
            digitalWrite(LedC2_7, LOW);
            digitalWrite(LedC2_W, HIGH);  
            etapa = 2;                                            //Ya hay ganador, cambiar de etapa
          }
        antir = 0;                                                //Reiniciar anti rebote
        }
      }
    }

    while(etapa == 2){                                            //Ganador
      digitalWrite(LedC1_0, LOW);                                 //Apagar todas las leds
      digitalWrite(LedC1_1, LOW);
      digitalWrite(LedC1_2, LOW);
      digitalWrite(LedC1_3, LOW);
      digitalWrite(LedC1_4, LOW);
      digitalWrite(LedC1_5, LOW);
      digitalWrite(LedC1_6, LOW);
      digitalWrite(LedC1_7, LOW);
      
      digitalWrite(LedC2_0, LOW);
      digitalWrite(LedC2_1, LOW);
      digitalWrite(LedC2_2, LOW);
      digitalWrite(LedC2_3, LOW);
      digitalWrite(LedC2_4, LOW);
      digitalWrite(LedC2_5, LOW);
      digitalWrite(LedC2_6, LOW);
      digitalWrite(LedC2_7, LOW);
      
      digitalWrite(GREEN_LED, HIGH);                              //Led que indica que hay un ganador
    }
}
