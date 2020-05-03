int red = D2;
int green = D4;
int blue = D6;



void setup()
{

   pinMode(red, OUTPUT);
   pinMode(green, OUTPUT);
   pinMode(blue, OUTPUT);

   //Define Particle.function() to ledToggle() function 
   Particle.function("led", ledToggle);

   digitalWrite(red, LOW);
   digitalWrite(green, LOW);
   digitalWrite(blue, LOW);
}



int ledToggle(String command) {
    if (command == "red") {
        digitalWrite(red, HIGH);
        digitalWrite(green, LOW);
        digitalWrite(blue, LOW);
        return 1;
    }

    
    else if (command == "green") {
        digitalWrite(red, LOW);
        digitalWrite(green, HIGH);
        digitalWrite(blue, LOW);
        return 1;
    }

    else if (command == "blue") {
        digitalWrite(red, LOW);
        digitalWrite(green, LOW);
        digitalWrite(blue, HIGH);
        return 1;
    }
    
    //return -1 for invalid input
    else 
    {
       return -1;
    }
}