import smtplib
from email.mime.text import MIMEText 
from email.mime.multipart import MIMEMultipart
from email.mime.base import MIMEBase
from email import encoders



def mail(email_receiver, filename):
    email_sender = "testrasp123@gmail.com"
    password = 
    subject = "Photo taken from camera. Intrusion Alert!!"

    msg = MIMEMultipart()
    msg['From'] = email_sender
    msg['To']   = email_receiver
    msg['Subject'] = subject
    #body = "<a href=""https://www.facebook.com""> LINK </a>"

    body ="Hi there!"

    msg.attach(MIMEText(body,"plain"))

    
    attachment = open(filename, 'rb')

    part = MIMEBase('application', 'octet-stream')
    part.set_payload((attachment).read())
    encoders.encode_base64(part)
    part.add_header('Content-Disposition', "attachement; filename ="+filename)
    msg.attach(part)

    text = msg.as_string()

    ser = smtplib.SMTP('smtp.gmail.com', 587)
    ser.starttls()
    ser.login(msg['From'], password)

    message = "This is the photo take at given time"
    ser.sendmail(msg['From'] , msg['To'], text)
    ser.quit()
    
    
    
