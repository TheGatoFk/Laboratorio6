import serial
import time

arduino = serial.Serial('/dev/ttyACM0', 9600)

while True:
    if arduino.readable():
        response = arduino.readline().decode().strip()
        if response == "BUTTON_PRESSED":
            print("Botón presionado. Encendiendo LEDs.")
            arduino.write(b'H')  # Envía el comando para encender los LEDs
        elif response == "BUTTON_RELEASED":
            print("Botón liberado. Apagando LEDs.")
            arduino.write(b'L')  # Envía el comando para apagar los LEDs
    time.sleep(0.1)
