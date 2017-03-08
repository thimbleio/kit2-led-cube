## Troubleshooting
Tips and tricks for debugging your hardware and code.

### First checkpoint

If your board is not lighting up after the first checkpoint, first test to make sure you are able to program the Arduino by disconnecting the headers and uploading the Blink example.

File > Examples -> 01.Basics -> Blink
```
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
```

Ensure the LED on your UNO board is blinking.

If that works, inspect your solder joints and double check your connections to the LED cube board.

If you are still having trouble, post a photo to the forums and we or a community member will be eager to assist you.

### Second checkpoint

For the second checkpoint (IMU code), make sure that you have an IMU and it is plugged in. Next, inspect your solder joints and double check your connections to the LED cube board.

If you are still having trouble, post a photo to the forums and we or a community member will be eager to assist you.
