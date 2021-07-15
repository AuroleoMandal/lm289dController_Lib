# lm289dController_Lib
## Library to simplify control of motor functionalities with lm298d motor driver

-Auroleo Mandal
_____________________________________________
### Constructor(s)

1. `Motor(motorInPin1, motorInPin1)` 

//Will create an object of the `Motor` class allowing access to its methods, also sets up its pins so no need to use Arduino `pinMode` function. No speed control is available if this constructor is used.

2. `Motor(motorInPin1, motorInPin1, motorEnablePin)`

//Will create an object of the `Motor` class allowing access to its methods, also sets up its pins so no need to use Arduino `pinMode` function. Speed can be controlled using enable pin PWM input to driver.
__________________________________________
### Methods
1. `fwd(enableInput)`

//Will move the motor in one direction. Actual rotation will depend on the connections to the driver and arduino. Can only be fed a value of 0 to 255 as a parameter. Leave parameter empty for speed control using the jumper on the driver board.

2. `rev(enableInput)`

//Will move the motor in the other direction as `fwd()`. Actual rotation will depend on the connections to the driver and arduino. Can only be fed a value of 0 to 255 as a parameter. Leave parameter empty for speed control using the jumper on the driver board.

3.`off()`

//Will set both inputs to LOW, turning motor off.
__________________________________________
12/07/21 

Currently features basic motor control (3 methods to set motor state to forward, reverse and off)

15/07/21 

-Added constructor overloading for setting up the enable pin 

-Functions overloaded to use enable pin PWM input to control speed

-Specified keywords to be highlighted in keywords.txt
-added Ounga bunga