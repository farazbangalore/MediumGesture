//Lock Left -Control Mode
if (distance_L>=10&& distance_L<=20)
{
delay(100); //Hand Hold Time
calculate_distance(trigger1,echo1);
distance_L=dist;
if (distance_L>=10&& distance_L<=20)
{
Serial.println("Left Locked");
while(distance_L<=40){calculate_distance(trigger1,echo1);
distance_L=dist;
if (distance_L<10) //Hand pushed in 
{
Serial.println ("Vup"); 
delay (300);
}
if (distance_L>20) //Hand pulled out
{
Serial.println ("Vdown"); 
delay (300);\
}
}
}
}
