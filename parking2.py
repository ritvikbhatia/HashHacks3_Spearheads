
import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
GPIO.setup(12,GPIO.IN, pull_up_down = GPIO.PUD_DOWN)
GPIO.setup(20,GPIO.IN, pull_up_down = GPIO.PUD_DOWN)
GPIO.setup(21,GPIO.IN, pull_up_down = GPIO.PUD_DOWN)
GPIO.setmode(GPIO.BCM)
GPIO.setup(4,GPIO.IN, pull_up_down = GPIO.PUD_DOWN)
GPIO.setmode(GPIO.BCM)
GPIO.setup(26,GPIO.OUT)
while True:
    print" Welcome to the parking lot"
    if GPIO.input(12) and GPIO.input(20) and GPIO.input(21):
        print"parking is full"
        pwm = GPIO.PWM(26,50)
        pwm.start(0)
        GPIO.output(26,True)
        pwm.ChangeDutyCycle(9)
        time.sleep(2)
    
    
    elif GPIO.input(12):
            
        print" Slot 2 and 3 available"
        pwm = GPIO.PWM(26,50)
        pwm.start(0)
        GPIO.output(26,True)
        pwm.ChangeDutyCycle(3)

        time.sleep(2)    

    elif GPIO.input(20):
            
        print" Slot 1 and 3 available"
        pwm = GPIO.PWM(26,50)
        pwm.start(0)
        GPIO.output(26,True)
        pwm.ChangeDutyCycle(3)
             
        time.sleep(2)
    elif GPIO.input(21):
            
        print" Slot 1 and 2 available"
        pwm = GPIO.PWM(26,50)
        pwm.start(0)
        GPIO.output(26,True)
        pwm.ChangeDutyCycle(3)
    
        time.sleep(2)    
    elif GPIO.input(12) and GPIO.input(20):
        print" Slot 3 available"
        pwm = GPIO.PWM(26,50)
        pwm.start(0)
        GPIO.output(26,True)
        pwm.ChangeDutyCycle(3)
            

    elif GPIO.input(20) and GPIO.input(21):
        print"Slot 2 available"
        pwm = GPIO.PWM(26,50)
        pwm.start(0)
        GPIO.output(26,True)
        pwm.ChangeDutyCycle(3)
    
            

    elif GPIO.input(12) and GPIO.input(21):
        print"Slot 1 available"
        pwm = GPIO.PWM(26,50)
        pwm.start(0)
        GPIO.output(26,True)
        pwm.ChangeDutyCycle(3)
        time.sleep(2)

    else:
        print"All Slots available"
        pwm = GPIO.PWM(26,50)
        pwm.start(0)
        GPIO.output(26,True)
        pwm.ChangeDutyCycle(3)
        time.sleep(2)




            
            

            
            
        



    





    
