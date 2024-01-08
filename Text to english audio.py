import serial
import time
from gtts import gTTS
import pygame
from io import BytesIO

language = 'en'
arduino_port = 'COM6'
baud_rate = 9600

ser = serial.Serial(arduino_port, baud_rate)
time.sleep(2)

pygame.mixer.init()

while True:
    if ser.in_waiting > 0:
        arduino_data = ser.readline().decode('utf-8').rstrip()
        text = arduino_data

        # Generate TTS audio
        tts = gTTS(text=text, lang=language, slow=False)
        audio_bytes = BytesIO()
        tts.write_to_fp(audio_bytes)
        audio_bytes.seek(0)

        # Load and play the audio
        pygame.mixer.music.load(audio_bytes)
        pygame.mixer.music.play()

        # Calculate a fixed delay or adjust based on your preference
        delay_ms = 0  # Set a fixed delay of 1000 milliseconds (1 second)3
        pygame.time.wait(delay_ms)