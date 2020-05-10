//Single Traffic Signal with WALK/DONT WALK
void setup() {
  // initialize digital pins as output.
  pinMode(2, OUTPUT); //WALK
  pinMode(3, OUTPUT); //DONT WALK
  pinMode(4, OUTPUT); //RED
  pinMode(5, OUTPUT); //YELLOW
  pinMode(6, OUTPUT); //GREEN
}

// the loop function runs over and over again forever
void loop() {
 //################# ALL RED PHASE #################
  digitalWrite(3, HIGH);   // DONT WALK TURNS ON
  digitalWrite(4, HIGH);   // RED TURNS ON
  delay(8000);             // Wait for 8 seconds

//############### WALK WITH GREEN SIGNAL ###########  
  
  digitalWrite(3, LOW);    // DONT WALK TURNS OFF
  digitalWrite(4, LOW);    // RED TURNS OFF
  digitalWrite(6, HIGH);   //GREEN TURNS ON
  digitalWrite(2, HIGH);   //WALK TURNS ON
  delay(10000);            //Wait for 10 seconds

//################# PED CLEAR/COUNTDOWN TIMER #################
/* we are going to turn off the Walk and start flashing DONT WALK
 this will also start the PED counting down from our setting in
 in the "for loop" in this example it is set at 10
*/  
    digitalWrite(2, LOW);    //WALK TURNS OFF and will stay off during this cycle 
for (int j=1; j<=10; j=j+1) {     // Start our for loop to flash the PED's DONT WALK
    digitalWrite(3,HIGH);  //DONT WALK TURNS ON
    delay(500);            //WAIT FOR A HALF SECOND WITH DONT WALK ON
    digitalWrite(3,LOW);   //DONT WALK TURNS OFF
    delay(500);            //WAIT FOR A HALF SECOND WITH DONT WALK OFF
} 

//############## YELLOW PHASE WITH DONT WALK ON ######################  
  digitalWrite(6, LOW);   // GREEN TURNS OFF
  digitalWrite(3,HIGH);   // DONT WALK
  digitalWrite(5, HIGH);   //YELLOW
  delay(3000);
  digitalWrite(5, LOW);   //YELLOW 

// AT THIS POINT THE PROGRAM RETURNS TO THE START OF THE VOID LOOP
  

}
