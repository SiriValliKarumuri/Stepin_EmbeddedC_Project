# Stepin_EmbeddedC_Project
## Seat Heater

### Activities Description

|Activity|Description|
|:--:|:--:|
|Activity 1| Blink the LED when the passenger is in the seat and the heater is pressed|
|Activity 2| Convert the analog signal from the temperature sensor to the digital value|
|Activity 3| Generate the PWM signal according to the converted digital value|
|Activity 4| Send the temperature value to the serial monitor using UART protocol|

# Assumptions
  * Switches are used to the realize the passenger in the seat and the press of the heater
  * The temperature sensor is realized using the potentiometer
  
## Activity-1 In Action

|OFF|OFF|OFF|ON|
|:--:|:--:|:--:|:--:|
|![OFF](https://user-images.githubusercontent.com/80662569/116460814-1e747f00-a885-11eb-9361-7d70ba90e82d.PNG) |![OFF](https://user-images.githubusercontent.com/80662569/116460808-1c122500-a885-11eb-8023-4ab0ec876fa6.PNG)|![OFF](https://user-images.githubusercontent.com/80662569/116460810-1ddbe880-a885-11eb-9460-5a43f89de00e.PNG)|![ON](https://user-images.githubusercontent.com/80662569/116460813-1ddbe880-a885-11eb-90f1-d0da5705cd19.PNG)|

## Activity-2 In Action

|ADC_00|ADC_11|
|:--:|:--:|
|![ADC_00](https://user-images.githubusercontent.com/80662569/116461383-d0ac4680-a885-11eb-84b5-dc8d17cff3dc.PNG) |![ADC_11](https://user-images.githubusercontent.com/80662569/116461375-cdb15600-a885-11eb-805c-2dc73d198a3d.PNG)|

## Activity-3 In Action

|PWM_20%|PWM_40%|
|:--:|:--:|
|![PWM_20%](https://user-images.githubusercontent.com/80662569/116461901-72cc2e80-a886-11eb-8525-42061d74f693.PNG) |![PWM_40%](https://user-images.githubusercontent.com/80662569/116461893-7069d480-a886-11eb-859b-1ec11c368164.PNG)|
|PWM_70%|PWM_95%|
|![PWM_70%](https://user-images.githubusercontent.com/80662569/116461897-72339800-a886-11eb-9006-369b7be40d44.PNG)|![PWM_95%](https://user-images.githubusercontent.com/80662569/116461900-72339800-a886-11eb-8eea-43aeae327bea.PNG)|

## Activity-4 In Action

|20 DEGREES|25 DEGREES|
|:--:|:--:|
|![20](https://user-images.githubusercontent.com/80662569/116462498-20d7d880-a887-11eb-827d-3c4601f65f82.PNG) |![25](https://user-images.githubusercontent.com/80662569/116462506-22a19c00-a887-11eb-9f96-e03d69035c7e.PNG)|
|29 DEGREES|33 DEGREES|
|![29](https://user-images.githubusercontent.com/80662569/116462509-233a3280-a887-11eb-9b8f-c925bc36cdcd.PNG)|![33](https://user-images.githubusercontent.com/80662569/116462511-233a3280-a887-11eb-91a9-a11098dc7529.PNG)|

## STRUCTURE:

<img src="https://user-images.githubusercontent.com/80762665/116671875-17ea2280-a9bf-11eb-9309-fca94b6fa618.png"/>

## CI and Code Quality
<a href="https://frontend.code-inspector.com/public/user/github/SiriValliKarumuri"><img src="https://www.code-inspector.com/project/28652/score/svg"/><img src="https://www.code-inspector.com/project/28652/status/svg"/>[![Codacy Badge](https://app.codacy.com/project/badge/Grade/f603a44bd58c424fbb3889e94c2a95eb)](https://www.codacy.com/gh/SiriValliKarumuri/Stepin_EmbeddedC_Project/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=SiriValliKarumuri/Stepin_EmbeddedC_Project&amp;utm_campaign=Badge_Grade)
 [![Cppcheck](https://github.com/SiriValliKarumuri/Stepin_EmbeddedC_Project/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/SiriValliKarumuri/Stepin_EmbeddedC_Project/actions/workflows/c-cpp.yml)
 [![Compile-Linux](https://github.com/SiriValliKarumuri/Stepin_EmbeddedC_Project/actions/workflows/cmake.yml/badge.svg)](https://github.com/SiriValliKarumuri/Stepin_EmbeddedC_Project/actions/workflows/cmake.yml)



















