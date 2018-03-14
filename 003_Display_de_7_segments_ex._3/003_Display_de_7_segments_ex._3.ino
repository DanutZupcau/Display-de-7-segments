/**************************************************************
**                                                           **
**                TÍTOL: Display de 7 segments               **
**          Un display que mostri el nostre nom              **
**                                                           **
**  NOM: Danut Zupcau                   DATA: 15/03/2018     **
**************************************************************/

//******************* VARIABLE *************************
const int A = 5;          // donar nom al pin 5 de l’Arduino
const int B = 6;          // donar nom al pin 6 de l’Arduino
const int C = 7;          // donar nom al pin 7 de l’Arduino
const int D = 8;          // donar nom al pin 8 de l’Arduino
const int E = 9;          // donar nom al pin 9 de l’Arduino
const int F = 10;         // donar nom al pin 10 de l’Arduino
const int G = 11;         // donar nom al pin 11 de l’Arduino
int a = 1000;


//******************* SETUP ****************************
void setup()
{
  pinMode(A, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(B, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(C, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(D, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(E, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(F, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(G, OUTPUT);     // definir el pin 11 com una sortida


  // definir el pin 12 com una sortida
}


//******************* LOOP *****************************
void loop()
{
  //segment D
  
   digitalWrite(A, LOW);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, HIGH);    // posar a 5V el pin 8
  digitalWrite(E, HIGH);    // posar a 5V el pin 9
  digitalWrite(F, LOW);    // posar a 5V el pin 10
  digitalWrite(G, HIGH);    // posar a 5V el pin 11

  //segment A
  delay(a);                  // es queden leds 1000ms apagats
  
  digitalWrite(A, HIGH);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, LOW);    // posar a 5V el pin 8
  digitalWrite(E, HIGH);    // posar a 5V el pin 9
  digitalWrite(F, HIGH);    // posar a 5V el pin 10
  digitalWrite(G, HIGH);    // posar a 5V el pin 11

  //segment N
  delay(a);                  // es queden leds 1000ms apagats
    
  digitalWrite(A, LOW);    // posar a 5V el pin 5
  digitalWrite(B, LOW);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, LOW);    // posar a 5V el pin 8
  digitalWrite(E, HIGH);    // posar a 5V el pin 9
  digitalWrite(F, LOW);    // posar a 5V el pin 10
  digitalWrite(G, HIGH);    // posar a 5V el pin 11

  //segment U
  delay(a);                  // es queden leds 1000ms apagats
    
  digitalWrite(A, LOW);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, HIGH);    // posar a 5V el pin 8
  digitalWrite(E, HIGH);    // posar a 5V el pin 9
  digitalWrite(F, HIGH);    // posar a 5V el pin 10
  digitalWrite(G, LOW);    // posar a 5V el pin 11

  //segment T
  delay(a);                  // es queden leds 1000ms apagats
    
  digitalWrite(A, LOW);    // posar a 5V el pin 5
  digitalWrite(B, LOW);    // posar a 5V el pin 6
  digitalWrite(C, LOW);    // posar a 5V el pin 7
  digitalWrite(D, HIGH);    // posar a 5V el pin 8
  digitalWrite(E, HIGH);    // posar a 5V el pin 9
  digitalWrite(F, HIGH);    // posar a 5V el pin 10
  digitalWrite(G, HIGH);    // posar a 5V el pin 11
  
  //segment Z
  delay(a);                  // es queden leds 1000ms apagats
    
  digitalWrite(A, HIGH);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, LOW);    // posar a 5V el pin 7
  digitalWrite(D, HIGH);    // posar a 5V el pin 8
  digitalWrite(E, HIGH);    // posar a 5V el pin 9
  digitalWrite(F, LOW);    // posar a 5V el pin 10
  digitalWrite(G, HIGH);    // posar a 5V el pin 11
  
  //segment U
  delay(a);                  // es queden leds 1000ms apagats
    
  digitalWrite(A, LOW);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, HIGH);    // posar a 5V el pin 8
  digitalWrite(E, HIGH);    // posar a 5V el pin 9
  digitalWrite(F, HIGH);    // posar a 5V el pin 10
  digitalWrite(G, LOW);    // posar a 5V el pin 11

    //segment P
  delay(a);                  // es queden leds 1000ms apagats
    
  digitalWrite(A, HIGH);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, LOW);    // posar a 5V el pin 7
  digitalWrite(D, LOW);    // posar a 5V el pin 8
  digitalWrite(E, HIGH);    // posar a 5V el pin 9
  digitalWrite(F, HIGH);    // posar a 5V el pin 10
  digitalWrite(G, HIGH);    // posar a 5V el pin 11
  
    //segment C
  delay(a);                  // es queden leds 1000ms apagats
    
  digitalWrite(A, HIGH);    // posar a 5V el pin 5
  digitalWrite(B, LOW);    // posar a 5V el pin 6
  digitalWrite(C, LOW);    // posar a 5V el pin 7
  digitalWrite(D, HIGH);    // posar a 5V el pin 8
  digitalWrite(E, HIGH);    // posar a 5V el pin 9
  digitalWrite(F, HIGH);    // posar a 5V el pin 10
  digitalWrite(G, LOW);    // posar a 5V el pin 11

    //segment A
  delay(a);                  // es queden leds 1000ms apagats
  
  digitalWrite(A, HIGH);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, LOW);    // posar a 5V el pin 8
  digitalWrite(E, HIGH);    // posar a 5V el pin 9
  digitalWrite(F, HIGH);    // posar a 5V el pin 10
  digitalWrite(G, HIGH);    // posar a 5V el pin 11

   //segment U
  delay(a);                  // es queden leds 1000ms apagats
    
  digitalWrite(A, LOW);    // posar a 5V el pin 5
  digitalWrite(B, HIGH);    // posar a 5V el pin 6
  digitalWrite(C, HIGH);    // posar a 5V el pin 7
  digitalWrite(D, HIGH);    // posar a 5V el pin 8
  digitalWrite(E, HIGH);    // posar a 5V el pin 9
  digitalWrite(F, HIGH);    // posar a 5V el pin 10
  digitalWrite(G, LOW);    // posar a 5V el pin 11

  delay(a);
}
