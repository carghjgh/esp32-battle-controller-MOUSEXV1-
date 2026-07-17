esp32-battle-controller-MOUSEXV1-
a esp32 wroom controlled, controller two joysticks and one button, this is for my battle bot, named MOUSEX. you can use esp32 now for it wand the design plain, but you are able to connect the pieces super easy. this is what it looks like <img width="4320" height="3240" alt="DSCN2482" src="https://github.com/user-attachments/assets/a83b2113-bfeb-4010-806e-b9facb3a39ae" />All wire is on the bottom layers. 

MORE IN DETAIL: 
secs: esp32 wroom, Shillehtek KY-023 Dual Axis PS2 Analog Joystick, tatictal button assortment, im using solid core wire. SIDE NOTE(I sodered the joystic header pins on the opposite side so it can plug in the controller)

_________________________SETUP_____________________
                        
                        -esp32 wroom-
you can use the arduino ide or vs code with platform IO to deploy the code on the esp32. 
I would do this first so your able tyo test the wiring in the next steps
                        
                        -bottom layers-
First you need to print the two bottom layers from /3d models folder (bottom right.stl / bottom right.stl / 3 CLIPS.STL)
After printing them, press the noches together, then you wire it up.

It should look somting like this:<img width="3060" height="4080" alt="20260715_094451" src="https://github.com/user-attachments/assets/70b561cb-dcf6-482d-86bf-1fe6f82e5ce4" />

Wireing diagram<img width="1574" height="748" alt="wire" src="https://github.com/user-attachments/assets/007ef513-0d72-47c8-832d-9226788d54c0" />

NOTE: After laying down the wire I recomend you test to see that all wire is touching esp32 pins, also the button should be on the right side of the controller
                        
                        -top layers-
print out all of the rest of the files in 3d models folder(3 CLIPS.STL / TOP left.stl / Top Right.stl)
lay the top right model on the bottom right model and use the clips.stl and press them in the holes so it looks like this: <img width="3060" height="4080" alt="20260715_094451" src="https://github.com/user-attachments/assets/c7c885fb-68a4-45fe-bb4b-ff4acddf5411" />
then do the exact same for the top left and bottom left sides sp that it looks like this: <img width="3060" height="4080" alt="20260715_160301" src="https://github.com/user-attachments/assets/40966a51-98fa-41a4-9285-6c8df187587c" />
                        
                        -components-
after maing the board you can now plug in every thing

joysticks-

for the joysticks, as long as the header pins are facing downward tyhen your able to plug them in just like so:<img width="4080" height="3060" alt="20260715_161149" src="https://github.com/user-attachments/assets/c3072211-1ef6-4d28-9823-97a89896ed7d" />

button-

for the button I just bent off the two back pins <img width="3060" height="4080" alt="20260715_161420" src="https://github.com/user-attachments/assets/60b32a5c-4b5b-4efb-98b3-0b3573d3476b" />
  after that your able to just plug it in like the joysticks so that it looks just like this:<img width="3060" height="4080" alt="20260715_161743" src="https://github.com/user-attachments/assets/92538721-3f6c-47c6-ac5d-df06ecee8830" />

esp32 wroom-

now for the last step to plug in the esp32 first make sure that the antenna is on the top(near the button), and the PWR connector is on the bottom. NOTE: pluging it in upside down WILL cause it to not work properly!
Here is what it will lokk like after following all of the setup:<img width="3060" height="4080" alt="20260715_162407" src="https://github.com/user-attachments/assets/32e88bd0-e823-4753-91c8-9b58d0bc91e9" />

test- if you would like to test it then you can use the serial moitor in vs code, this is also in arduino IDE.










