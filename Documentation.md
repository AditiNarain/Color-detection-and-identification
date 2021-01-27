# Automatic Study Lamp
  ## Abstract:Our project is an automatic lamp which will keep glowing until there is any movement by the person. As you stops moving without manually switching off the lamp will go off. SO it will save energy if you slept while stuyding.


### Components:
1.	PIR Sessor
2.	Arduino UNO
3.	Relay

### About Component:
   • PIR Sessor:Passive Infrared is a piezoelectric Sensor which generates energy when exposed to heat. As Human body generates heat in the form of infrared radiation wich gets detected by PIR sensor. Its Fresnel Cover is specially designed to  focus the infrared signal which is detected to piezoelectric sensor. 
	It have Two Potentiometer:
	     1.Time Delay (0.3 to 5minutes)
	     2.Sensitivity (upto 7nm)

                 It have Two Triggers:
	    1. Non-Repeatable Trigger: When the object is detected thenthe output goes high and remain high till the delay time given.After that it will goto low state. 
     	    2. Repeatable Trigger: When the object is detected then the output goes high and remain high till the object is moving.After time delay if object stops moving it will send low signal. 

 
		  
  • Relay:Relays are the advance switch which is controlled by electronic signal using electromagnet and optocouplers (electromechanical relay). 
	>  In electromechanical relay, a flexible movable part connects (make) or disconnect (break) the circuit when it receives the  signal.  
	    High power devices are easily controlled by low power signal (220V devices are controlled by 5V). Relay handles the ac as well as dc current. 
                        The signal receives from on side controls the other side.

### Circuit Diagram:


### Working: 
	We are using PIR sensor for detecting the movement of the person. As the person is moving then the PIR sensor detects that movement.PIR is divided into two parts when the movement is detected it compares that with another part using comparator hence there will be a difference in receiving IR signal. Hence object is detected.
As the object is detected it sends the signal to the input of the arduino uno.As arduino receives high at pin2 it generated an high output to pin 9 which is connected to relay, which controlls the lamp on off.So high output is given to relay and lamp will glow.
When there is no one in the room then both side of piezo sensor senses same IR signal hence no one is detected and hence low signal will goto input of uno and gives low output at pin 9 lamp will go off. 


### Program Logic:
     if (val==1) //if senses any movement
         OUTPUT ->lamp will glow
    else if (val==0)
          OUTPUT ->lamp will be off if no movement




