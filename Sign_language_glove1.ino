int x1 = 0;

int x2 = 0;

int x3 = 0;

int x4 = 0;

int x5 = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);

  Serial.begin(9600);

}

void  loop()
{
  

  x1= analogRead(A0); 
  x2=analogRead(A1);
  x3=analogRead(A2);
  x4=analogRead(A3);
  x5=analogRead(A4);
  

  if((x1<=148) && (x2<=135) && (x3<=101) && (x4<=145) && (x5<=155)){
    Serial.println("Badrinath Sir");
  }

  else  if((x1<=148) && (x2<=135) && (x3<=101) && (x4<=145) && (x5>=158)){
    Serial.println("Hi");
  }
  else  if((x1<=148) && (x2<=135) && (x3<=101) && (x4>=146) && (x5<=155)) {
    Serial.println("Good Morning");
  }
  else  if((x1<=148) && (x2<=135) && (x3<=101) && (x4>=146) && (x5>=158)){
    Serial.println("Good Afternoon");
  }
  else  if((x1<=148) && (x2<=135) && (x3>=102) && (x4<=145) && (x5<=155)){
    Serial.println("Good evening");
  }
  else  if((x1<=148) && (x2<=135) && (x3>=102) && (x4<=145) && (x5>=158)){
    Serial.println("Yes");
  }
  else  if((x1<=148) && (x2<=135) && (x3>=102) && (x4>=146) && (x5<=155)){
    Serial.println("NO");
  }
  else  if((x1<=148) && (x2<=135) && (x3>=102) && (x4>=146) && (x5>=158)){
    Serial.println("Please");
  }
  else  if((x1<=148) && (x2>=136) && (x3<=101) && (x4<=145) && (x5<=155)){
    Serial.println("Thank you");
  }
  else  if((x1<=148) && (x2>=136) && (x3<=101) && (x4<=145) && (x5>=158)){
    Serial.println("Sorry");
  }
  else  if((x1<=148) && (x2>=136) && (x3<=101) && (x4>=146) && (x5<=155)){
    Serial.println("Excuse me");
  }
  else  if((x1<=148) && (x2>=136) && (x3<=101) && (x4>=146) && (x5>=158)){
    Serial.println("I");
  }
  else  if((x1<=148) && (x2>=136) && (x3>=102) && (x4<=145) && (x5<=155)){
    Serial.println("You");
  }
  else  if((x1<=148) && (x2>=136) && (x3>=102) && (x4<=145) && (x5>=158)){
    Serial.println("We");
  }
  else if((x1<=148) && (x2>=136) && (x3>=102) && (x4>=146) && (x5<=155)){
    Serial.println("They");
  }
  else if((x1<=148) && (x2>=136) && (x3>=102) && (x4>=146) && (x5>=158)){
    Serial.println("He");
  }

  else if((x1>=150) && (x2<=135) && (x3<=101) && (x4<=145) && (x5<=155)){
    Serial.println("She");
  }

  else if((x1>=150) && (x2<=136) && (x3<=101) && (x4<=145) && (x5>=158)){
    Serial.println("It");
  }

  else if((x1>=150) && (x2<=135) && (x3<=101) && (x4>=146) && (x5<=155)){
    Serial.println("What");
  }

  else if((x1>=150) && (x2<=135) && (x3<=101) && (x4>=146) && (x5>=158)){
    Serial.println("When");
  }

  else if((x1>=150) && (x2<=135) && (x3>=102) && (x4<=145) && (x5<=155)){
    Serial.println("Where");
  }

  else if((x1>=150) && (x2<=135) && (x3>=102) && (x4<=145) && (x5>=158)){
    Serial.println("Why");
  }

  else if((x1>=150) && (x2<=135) && (x3>=102) && (x4>=146) && (x5<=155)){
    Serial.println("How");
  }

  else if((x1>=150) && (x2<=135) && (x3>=102) && (x4>=146) && (x5>=158)){
    Serial.println("Who");
  }

  else if((x1>=150) && (x2>=136) && (x3<=101) && (x4<=145) && (x5<=155)){
    Serial.println("Are");
  }

  else if((x1>=150) && (x2>=136) && (x3<=101) && (x4<=145) && (x5>=158)){
    Serial.println("Is");
  }

  else if((x1>=150) && (x2>=136) && (x3<=101) && (x4>=146) && (x5<=155)){
    Serial.println("Have");
  }

  else if((x1>=150) && (x2>=136) && (x3<=101) && (x4>=146) && (x5>=158)){
    Serial.println("Do");
  }

  else if((x1>=150) && (x2>=136) && (x3>=102) && (x4<=145) && (x5<=155)){
    Serial.println("Like");
  }

  else if((x1>=150) && (x2>=136) && (x3>=102) && (x4<=145) && (x5>=158)){
    Serial.println("Want");
  }

  else if((x1>=150) && (x2>=136) && (x3>=102) && (x4>=146) && (x5<=155)){
    Serial.println("Need");
  }

  else if((x1>=150) && (x2>=136) && (x3>=102) && (x4>=146) && (x5>=158)){
    Serial.println("Can");
  }

 
  delay(1450); 
}









