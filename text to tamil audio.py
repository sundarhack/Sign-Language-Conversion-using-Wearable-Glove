import serial
import time
from gtts import gTTS
import pygame
from io import BytesIO
from googletrans import Translator

language = 'en'
target_language = 'ta'  # 'ta' represents Tamil
arduino_port = 'COM6'
baud_rate = 9600

ser = serial.Serial(arduino_port, baud_rate)
time.sleep(2)

pygame.mixer.init()

def translate_to_tamil(text):
    translator = Translator()
    translation = translator.translate(text, dest=target_language)
    return translation.text

while True:
    if ser.in_waiting > 0:
        arduino_data = ser.readline().decode('utf-8').rstrip()
        english_text = arduino_data

        # Translate to Tamil
        tamil_text = translate_to_tamil(english_text)
        print(english_text,tamil_text)

        # Generate TTS audio for Tamil text
        tts = gTTS(text=tamil_text, lang=target_language, slow=False)
        audio_bytes = BytesIO()
        tts.write_to_fp(audio_bytes)
        audio_bytes.seek(0)

        # Load and play the audio
        pygame.mixer.music.load(audio_bytes)
        pygame.mixer.music.play()

        # Calculate a fixed delay or adjust based on your preference
        delay_ms = 1  # Set a fixed delay of 1000 milliseconds (1 second)
        pygame.time.wait(delay_ms)
