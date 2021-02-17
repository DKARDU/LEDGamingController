<a href="https://youtu.be/LT175BrAHAw">
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/frontimageytb.jpg" /> 
</a></br></br>

Hi guys, today we made a very coooooool Joystick Gamepad. Any button will let the WS2812 RGB LEDs light which have different lighting effect.</br></br>


► Code in GitHub (scheme and sketch): https://github.com/DKARDU/LEDGamingController</br></br>

► Components</br>
The following parts were used in this project:</br>
Arduino Leonardo, https://amzn.to/3ihYFBl</br>
2 x 15pcs ws2812 RGB Leds, https://amzn.to/3g1v5za</br>
12 x Buttons, https://amzn.to/3hKNL7N</br>
2 x Joysticks, https://amzn.to/3hKNL7N</br>
Jumper wires, https://amzn.to/3jCHhZd</br>
Breadboard, https://amzn.to/33yEavN</br>
</br>
❤Subscribe It's Free https://bit.ly/2C6HdAg </br></br>

Thanks for watching, Stay home and Be safe...Have a great day!</br>
#Arduinoproject #Arduinogamepad #Howto #COVID19 #gamingcontroller #joystickgamepad #ArduinoLed</br></br>
</br>

<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/%E7%94%B5%E8%B7%AF%E5%9B%BE.jpg" /></br>
</br>
Setting in Arduino,</br>
1.	install the Library file: Open "Tools"-"Library Manager" in the Arduino development software, then search for “Adafruit NeoPixel”, and install it.</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/%E7%AE%A1%E7%90%86%E5%BA%93.jpg" /></br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/Adafruit_NeoPixel%E5%BA%93.jpg" /></br>
2.	Install the Library file: Open "Sketch"-"Include Library"-"Add .ZIP Library" in the Arduino development software, Import ArduinoJoystickLibrary-master.zip</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/%E5%8A%A0%E5%85%A5zip%E5%BA%93.jpg" /></br>
Code compilation and upload:</br>
1.	Choose the development board as Arduino Leonardo.</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/%E9%80%89%E6%8B%A9%E5%BC%80%E5%8F%91%E6%9D%BF.jpg" /></br>
2.	Select the port, you can burn the code into the development board.</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/%E4%B8%B2%E5%8F%A3.jpg" /></br>
</br>
Calibration and setting of gamepad:</br>
</br>
1.	Search in your computer to set up USB game controller.</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/usb.jpg" /></br>
2. Connect the arduino leonardo to the USB port of the computer, and the Arduino leonardo controller will appear. Click Properties.</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/propeties.jpg" /></br>
3. In setting, click Calibrate to calibrate the joystick.</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/calibrate.jpg" /></br>
4.	After calibration, it will probably look like the picture below. Click OK.</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/test.jpg" /></br>
5.	Download steam and enter the big icon mode.</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/big%20picture.jpg" /></br>
6.	Click the settings icon in the upper right corner.</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/setup.jpg" /></br>
7.	Click controller settings.</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/controller%20settings.jpg" /></br>
8. Check xbox configuration support, then enter the detected controller.</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/xbox.jpg" /></br>
9. Set according to the button you want, for example, if you want button 1 to be the return key, then you click the return item in the figure, and then click the button 1 connected to arduino leonardo . After setting the button connected to the development board , Just click save at the bottom of the screen. </br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/shezhicanshu.jpg" /></br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/shezhicanshu2.jpg" /></br>
10. In the installed game interface, click Manage Game, and then enter the controller configuration </br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/game%20controller%20configuration.jpg" /></br>
11. Click on BROWSE CONFIGS at the bottom</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/browse%20configs.jpg" /></br>
12. Enter the community to find the most suitable handle template and apply</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/community.jpg" /></br>
</br>
Note:</br>
As shown in the figure below, my left and right joystick modules are symmetrically placed, so there will be one joystick that needs to be reversed. My right stick needs to be reversed.</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/1.jpg" /></br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/2.jpg" /></br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/3.jpg" /></br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/4.jpg" /></br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/5.jpg" /></br>
13. After entering the game, click on the settings in the game. Make the game's default game button settings consistent with the buttons configured on the gamepad.</br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/7.jpg" /></br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/8.jpg" /></br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/9.jpg" /></br>
<img src="https://dkardu.oss-cn-hongkong.aliyuncs.com/LEDgamingcontroller/10.jpg" /></br>
</br>
Tips:</br>
Reference link：</br>
https://www.howtogeek.com/234427/how-to-remap-buttons-on-your-steam-controller/

