# Color-detection-and-identification
  ## Abstract:
  Our project is an automatic RGB color detector which will detect colour of the any object which are red green and blue in color .Here we mainly focus on the interfacing of colour sensor with the controller. Color Detection can help to check the diabetic person as there blood absorbs red colour if sugar increases in their blood.
 Ny frequency of of colors we determine the color of the object.

## Components:
1.	Color Sessor
2.	Arduino UNO

## About Component:
  ### • Color Sessor:
  Light will fall on photodiode array which is S2 and S3 by different combinations of S2 and S3 we recognize colors.
   1. Red      (0,0)
   2. Blue     (0,1)
   3. No color (1,0)
   4. Green    (1,1) 
   
Then current go to S0 and S1 where current is converted to frequency.

We have 4 frequency scaling by setting different combinations of S0 and S1 which are :
1.  power down (0,0)
2.  2%, (0,1)
3.  20% (1,0)
4.  100%(1,1) 


## Circuit Diagram:

![Circuit](https://user-images.githubusercontent.com/73650233/106101664-347a8280-6164-11eb-9872-535d7a7164dc.png)

## Working: 
For detecting Colour we have used TCS3200 for detecting RGB which have different wavelengths.

Normally we human sees color when a light falls on an object and some light are absorbed and some get reflected.Ex- if we sees a green color then white light(consist of all colors) falling on it absorbs all the colors except green colour, it reflected back green colur. Hence we detect the object is of green color.

In the same way when object placed near the sensor, then it absorbs all the color wavelength except the color of object.
Then the reflected light from the object falls on the sensor and photodiode gets activated.
Then the  current flowing gets converted to frequency which is read by the controller(Arduino Uno).
Reading the frequency and according to the program the uno detects the color.
Hence we detect the color.

## Program Logic:
### Frequency-scaling

  	// Setting frequency-scaling to 20%
  	// For frequency scaling we use S0 S1, S0=1 s1=0
  	digitalWrite(S0,HIGH);
  	digitalWrite(S1,LOW);
### Frequency Reading	
For Red Leds S2=0 S3=0 and reading its frequency



 	 // Setting red filtered photodiodes to be read
 	 digitalWrite(S2,LOW);
 	 digitalWrite(S3,LOW);
  	// Reading the output frequency
  	 red_freq = pulseIn(Sensor, LOW);
	 
For Blue Leds S2=0 S3=1 and reading its frequency



 	 // Setting red filtered photodiodes to be read
 	 digitalWrite(S2,LOW);
 	 digitalWrite(S3,HIGH);
  	// Reading the output frequency
  	 blue_freq = pulseIn(Sensor, LOW);
	 
For Green Leds S2=1 S3=1 and reading its frequency


 	 // Setting red filtered photodiodes to be read
 	 digitalWrite(S2,HIGH);
 	 digitalWrite(S3,HIGH);
  	// Reading the output frequency
  	 green_freq = pulseIn(Sensor, LOW);
	 
### After reading frequency, detecting the colour, range is (0 to 255)

 	if (red_freq>25 && red_freq< 77) 
  		println("RED COLOUR")
	
  	else if (blue_freq>25 && blue_freq< 77) 
 		println("BLUE COLOUR")
  		
  	else if (green_freq>25 && green_freq< 77)
  		println("GREEN COLOUR")
		
 	else
 	 	println("NO COLOUR DETECTION")
		
Application:
1. For blind Color detection: We know that all the colors are mixture of RGB colors.So a product which determines the color.
2. In Medicals :For eyes, Glucose meter for diabetes person or for skin diseases
