


long mills = 0;
long autoTime = 500;

float moisture = 0;
float temperature = 0;
float light = 0;
bool modeAuto = true;

/////////////////////////////////////////////////////




void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10); // 10 to 15 times faster than a human blink

  Serial.println(currentState);
  mills = millis();
  
  
  modeControl();

  if (modeAuto)
  {
    if ((long)(mills - autoTime) < 0)
    {
      autoTime = mills + 500;
      //slow loop
      automatic();
    }

  }
  else {
    manual();
  }

}


void modeControl()
{
  
}

moistureTime = 60000;

void automatic()
{

  if ((long)(mills - moistureTime) < 0)
  {
    moistureTime = mills + 60000;

  }

  if (moisture < 1 + light - temperature)
  {
    
    

  }



}

autoSentor()
{
  //mesure things
  moisture = 0;
  light = 0;
  temperature = 0;

}

waterDelay = 0;
waterplant()
{
  if ((long)(mills - waterDelay) < 0)
  {
    waterdelay = mills + 10000;

    // do motor
  }
}




void manual()
{
  //huilen
}



