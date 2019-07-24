import pyautogui
import serial
ArduinoSerial=serial.Serial('com5',9600)

while 1:
	incoming=str (ArduinoSerial.readline())
	print (incoming)
    
	if 'upArrow' in incoming:
		pyautogui.moveRel(0,-35,duration=0.2)
	if 'downArrow' in incoming:
		pyautogui.moveRel(0,35,duration=0.2)  
	if 'rightArrow' in incoming:
		pyautogui.moveRel(35,0,duration=0.2) 
	if 'leftArrow' in incoming:
		pyautogui.moveRel(-35,0,duration=0.2)
        
	if 'button1' in incoming:
		pyautogui.hotkey('win', 'd')
		pyautogui.click() 

	if 'button2' in incoming:
		pyautogui.press('up')
	if 'button4' in incoming:
		pyautogui.press('left')
	if 'button6' in incoming:
		pyautogui.press('right')
	if 'button8' in incoming:
		pyautogui.press('down')

	if 'button5' in incoming:
			pyautogui.press('enter')

	if 'volup' in incoming:
			pyautogui.press('volumeup')
	if 'voldown' in incoming:
			pyautogui.press('volumedown')
	if 'play' in incoming:
			pyautogui.press('space')
	if 'seekf' in incoming:
			pyautogui.hotkey('shift','right')
	if 'seekb' in incoming:
			pyautogui.hotkey('shift','left')

	if 'power' in incoming:
			pyautogui.keyDown('win')
			pyautogui.press('l')

	if 'input' in incoming:
			pyautogui.hotkey('ctrl','l')

	if 'tv' in incoming:
			pyautogui.press('f5')

	if 'list' in incoming:
			pyautogui.press('win')

	if 'pUp' in incoming:
			pyautogui.scroll(400)
	if 'pDown' in incoming:
			pyautogui.scroll(-400)

	if 'menu' in incoming:
			pyautogui.click()
	if 'qmenu' in incoming:
			pyautogui.rightClick()

	if 'exit' in incoming:
			pyautogui.hotkey('alt','f4')

	if 'av' in incoming:
			pyautogui.press('f')

	if 'back' in incoming:
			pyautogui.press('backspace')


	incoming = "";
