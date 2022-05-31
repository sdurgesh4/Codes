import smtplib, ssl
import random  
 
otp = str( random.randrange(1000, 9999, 97) ) 

port = 465  # For SSL
smtp_server = "smtp.gmail.com"
sender_email = "email.com"  # Enter your address
receiver_email = "email.com"  # Enter receiver address
password = "password here"
message = """\
Subject: Hi there

otp is """+otp+"""

This message is sent from Python."""

context = ssl.create_default_context()
with smtplib.SMTP_SSL(smtp_server, port, context=context) as server:
    server.login(sender_email, password)
    server.sendmail(sender_email, receiver_email, message)
    
uotp = input("Enter OTP send to your mail: ")
if uotp == otp:
    print("successfull")
else:
    print("unsuccessful")