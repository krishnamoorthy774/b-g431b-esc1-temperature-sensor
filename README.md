# b-g431b-esc1-temperature-sensor
This repository contains the code for reading the temperature from the b-g431b-esc1 STM32 motor controller board

STM32 discovery **b-g431b-esc1** board has it's inbuilt temperature sensor.

![CaptureSTmanual](https://github.com/krishnamoorthy774/b-g431b-esc1-temperature-sensor/assets/133330566/93998b21-26e0-4104-b7bc-a9f47d77d250)

Install [VScode](https://code.visualstudio.com/) and [PlatfromIO](https://platformio.org/platformio-ide).

The **platformio.ini** file will install the required library for this project.

Download and import the folder into the VScode workspace.

Open" src> **main.cpp** "file. 

Connect you b-g431b-esc1 board.

Build and upload the code.

Now you can see the temperature reading from the board on the Serial monitor.

Took references from
1. https://community.st.com/t5/stm32-mcus-motor-control/hi-i-am-using-b-g431b-esc1-discovery-kit-with-stm32g431cb-mcu-i/td-p/100221
2. https://community.simplefoc.com/t/temperature-monitoring-on-b-g431b-esc1/2955
3. https://community.simplefoc.com/t/b-g431b-esc1-adc-reading-of-temp-pot-vbus-while-foc-current/1529
