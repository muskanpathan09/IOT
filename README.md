# IOT
This Arduino code is designed for a home automation system using a Light-Dependent Resistor (LDR) to detect the intensity of light in the environment. Based on the light intensity readings from the LDR, the code controls the activation of different colored lights (Red, Green, and Blue). Here's a description of the code:

1. **Variable Declaration:**
   - `int v;`: This variable will be used to store the analog reading from the LDR, which represents the intensity of light.

2. **`setup()` Function:**
   - In the `setup()` function, the code sets up the pin modes for various components:
     - Pin 7, 4, 2, and 10 are set as OUTPUT pins to control the Red, Green, Blue, and an additional output (perhaps for another device) respectively.
     - Pin A5 is set as an INPUT pin to read the analog signal from the LDR.
   - Serial communication is initialized at a baud rate of 9600 to allow communication with a computer for debugging purposes.
   - A message is printed to the Serial Monitor to indicate that the "HOME AUTOMATION using LDR" program has started.

3. **`loop()` Function:**
   - The `loop()` function continuously executes the following steps:
     - Read the analog value from the LDR and store it in the variable `v`.
     - Print the intensity of light to the Serial Monitor.
     - Pause for 1 second (1000 milliseconds) using `delay(1000)`.

4. **Light Control Based on Light Intensity:**
   - The code then checks the value of `v` (light intensity) and controls the lights accordingly:
     - If the light intensity is less than 350 (indicating low light), it turns on the Red light (pin 7) and the additional output (pin 10) while turning off the Green (pin 2) and Blue (pin 4) lights. It also prints a message indicating that the "RED Light gets ON."
     - If the light intensity is between 350 and 850 (indicating moderate light), it turns on the Green light (pin 2) and turns off the other lights. It prints a message indicating that the "GREEN Light gets ON."
     - If the light intensity is greater than 850 (indicating high light), it turns on the Blue light (pin 4) and turns off the other lights. It prints a message indicating that the "BLUE Light gets ON."

The code essentially automates the control of these colored lights based on the detected light intensity, creating a simple home automation system that adjusts lighting according to the ambient light conditions. The light intensity thresholds and pin assignments can be adjusted as needed for specific use cases.
