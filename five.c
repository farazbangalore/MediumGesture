if ((distance_L >30 && distance_L<50) && (distance_R==50)) //Detect Left Hand
{
Serial.println("Rewind"); 
delay (500);
}
if ((distance_R>30 && distance_R<50) && (distance_L==50)) //Detect Right Hand
{
Serial.println("Forward"); 
delay (500);
}
