# remouse
Control mouse and keyboard shortcuts using IR Remote

An IR receiver is connected to the Arduino and it receives IR signals from a remote. We have already stored the decoded value in hexadecimal corresponding to different buttons on our remote. The Arduino code compares the IR signal received with that list of values to find out which button was pressed and correspondingly sends the result to our Python script.

The python script, which runs in the background, produces the corresponding output using the python library PyAutoGUI. 
