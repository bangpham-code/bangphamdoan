import speech_recognition
robot_ear = speech_recognition.Recognizer()
with speech_recognition.Microphone() as mic:
    print("Robot: I'm Listening")
    audio = robot_ear.record(mic, duration=3)

print("chua duoc")
try:   
    you = robot_ear.recognize_google(audio)
except:
    you ==" khong co gi"
print("You: "+ you)