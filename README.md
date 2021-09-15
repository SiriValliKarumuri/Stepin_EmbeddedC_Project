# Stepin_EmbeddedC_Project
## Seat Heater

# Activities Description

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

Case 1: When Both Switches are OFF

Case 2: When Switch 1 is OFF and Switch 2 is ON

Case 3: When Both Switch 1 is ON and Switch 2 is ON

Case 4: When Both Switches are ON

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

|Case1: 20 DEGREES| Case2: 25 DEGREES|
|:--:|:--:|
|![20](https://user-images.githubusercontent.com/80662569/116462498-20d7d880-a887-11eb-827d-3c4601f65f82.PNG) |![25](https://user-images.githubusercontent.com/80662569/116462506-22a19c00-a887-11eb-9f96-e03d69035c7e.PNG)|
|Case3: 29 DEGREES|Case4: 33 DEGREES|
|![29](https://user-images.githubusercontent.com/80662569/116462509-233a3280-a887-11eb-9b8f-c925bc36cdcd.PNG)|![33](https://user-images.githubusercontent.com/80662569/116462511-233a3280-a887-11eb-91a9-a11098dc7529.PNG)|

### CI and Code Quality

[![Cppcheck](https://github.com/SiriValliKarumuri/Stepin_EmbeddedC_Project/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/SiriValliKarumuri/Stepin_EmbeddedC_Project/actions/workflows/c-cpp.yml)[![Codacy Badge](https://app.codacy.com/project/badge/Grade/f603a44bd58c424fbb3889e94c2a95eb)](https://www.codacy.com/gh/SiriValliKarumuri/Stepin_EmbeddedC_Project/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=SiriValliKarumuri/Stepin_EmbeddedC_Project&amp;utm_campaign=Badge_Grade)<a href="https://frontend.code-inspector.com/public/user/github/SiriValliKarumuri"><img src="https://www.code-inspector.com/project/28652/score/svg"/><img src="https://www.code-inspector.com/project/28652/status/svg"/></a>[![Compile-Linux](https://github.com/SiriValliKarumuri/Stepin_EmbeddedC_Project/actions/workflows/cmake.yml/badge.svg)](https://github.com/SiriValliKarumuri/Stepin_EmbeddedC_Project/actions/workflows/cmake.yml)






















# Embedded C Mini Project

# Activities Description

|Activity|Description|
|:--:|:--:|
|Activity 1| Blink the LED when the passenger is in the seat and the heater is pressed|
|Activity 2| Convert the analog signal from the temperature sensor to the digital value|
|Activity 3| Generate the PWM signal according to the converted digital value|
|Activity 4| Send the temperature value to the serial monitor using UART protocol|

# Assumptions
* Switches are used to the realize the passenger in the seat and the press of the heater
* The temperature sensor is realized using the potentiometer

# Activity 1

## In Action

|Case 1: When Both Switches are OFF|Case 2: When Switch 1 is OFF and Switch 2 is ON|
|:--:|:--:|
|![image](https://user-images.githubusercontent.com/61261829/115930043-6de23600-a4a6-11eb-9b26-7124facd5505.png)|![image](https://user-images.githubusercontent.com/61261829/115930127-92d6a900-a4a6-11eb-8543-bde89173b492.png)|

|Case 3: When Both Switch 1 is ON and Switch 2 is ON|Case 4: When Both Switches are ON|
|:--:|:--:|
|![image](https://user-images.githubusercontent.com/61261829/115930263-c6b1ce80-a4a6-11eb-9849-93b9a62fab5c.png)|![image](https://user-images.githubusercontent.com/61261829/115930289-d16c6380-a4a6-11eb-82f5-6a4c09a9c281.png)| ![image](https://user-images.githubusercontent.com/61261829/116689761-16782480-a9d6-11eb-886a-bb9877016e00.png)


# Activity 2 

## In Action

![image](https://user-images.githubusercontent.com/61261829/116450392-e0715e00-a878-11eb-81a1-1e15dda5220c.png)

# Activity 3

## In Action

|Case 1: Duty Ratio = 0.2 |
|:--:|
|![image](https://user-images.githubusercontent.com/61261829/116689398-b1243380-a9d5-11eb-9564-c2cd473cc5e9.png)|

|Case 2: Duty Ratio = 0.4|
|:--:|
|![image](https://user-images.githubusercontent.com/61261829/116689499-d5801000-a9d5-11eb-97b9-6c23e14f08a3.png)|


|Case 3: Duty Ratio = 0.7 |
|:--:|
|![image](https://user-images.githubusercontent.com/61261829/116689834-30196c00-a9d6-11eb-907d-9586ce5f3912.png)|

|Case 4: Duty Ratio = 0.95|
|:--:|
|![image](https://user-images.githubusercontent.com/61261829/116689962-5dfeb080-a9d6-11eb-80c5-823ee46b98d4.png)|

# Activity 4

## In Action

|Case 1: Temperature = 20 |
|:--:|
|![image](https://user-images.githubusercontent.com/61261829/116717561-a4640780-a9f6-11eb-9114-3ec2c38a5a29.png)|

|Case 2: Temperature = 25|
|:--:|
|![image](https://user-images.githubusercontent.com/61261829/116717605-b2b22380-a9f6-11eb-8ffb-f0cbf3f3dc31.png)|


|Case 3: Temperature = 29 |
|:--:|
|![image](https://user-images.githubusercontent.com/61261829/116717632-bd6cb880-a9f6-11eb-9003-9dfeba660830.png)

|Case 4: Temperature = 33|
|:--:|
|![image](https://user-images.githubusercontent.com/61261829/116717672-c6f62080-a9f6-11eb-8aff-de9657a348da.png)|


# Final Working
![image](https://user-images.githubusercontent.com/61261829/116717716-d1b0b580-a9f6-11eb-9eab-cd533d796e10.png)


#### CI and Code Quality

|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Build](https://github.com/Manikanta489/EmbeddedC_stepin256240/actions/workflows/build.yml/badge.svg)](https://github.com/Manikanta489/EmbeddedC_stepin256240/actions/workflows/build.yml)|[![Cpp_Check](https://github.com/Manikanta489/EmbeddedC_stepin256240/actions/workflows/cpp_check.yml/badge.svg)](https://github.com/Manikanta489/EmbeddedC_stepin256240/actions/workflows/cpp_check.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/e5facfbcad3a46f283b859d701dbe235)](https://www.codacy.com/gh/Manikanta489/EmbeddedC_stepin256240/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Manikanta489/EmbeddedC_stepin256240&amp;utm_campaign=Badge_Grade)
