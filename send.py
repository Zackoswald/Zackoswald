# -*- coding:utf-8 -*-
import RPi.GPIO as GPIO
import serial

#if use half-auto, EN_485 = LOW is Receiver, EN_485 = HIGH is Send
MODE = 0 #mode = 0 is full-guto, mode = 1 is half-auto
if MODE == 1:
    EN_485 =  4
    GPIO.setmode(GPIO.BCM)
    GPIO.setup(EN_485,GPIO.OUT)
    GPIO.output(EN_485,GPIO.HIGH)

ser = serial.Serial("/dev/ttyS0",115200,timeout=1) 
print(ser.portstr)

command = "hello world"
print("send:"),command  
len = ser.write(command)    
print("len = "),len

print("You can always send data, press Ctrl + C to exit")
while 1:
    strInput = raw_input('enter some words:')  
    ser.write(strInput)

ser.flush()


