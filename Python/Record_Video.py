import cv2 as cv
import numpy as np
from datetime import datetime as dt

def Start_Recording(file_name):
    cam0 = cv.VideoCapture(0)
   

    
    if not cam0.isOpened():
        print("Cannot open camera")
        exit()

    fourcc_xvid = cv.VideoWriter_fourcc(*'XVID')
    out_xvid = cv.VideoWriter(file_name, fourcc_xvid, 30, (640, 480))
    
    
    while cam0.isOpened():
        ret, frame = cam0.read()
        if not ret:
            print("Cannot capture frame, restart")
            break
        frame = cv.flip(frame, 1)
        now = dt.now()
        font = cv.FONT_HERSHEY_SIMPLEX
        date_time = now.strftime("%d/%m/%Y | %H:%M:%S" )
        #time = now.strftime("%H:%M:%S") 
        cv.putText(frame, 
                   date_time,
                   (100,400),
                   font,
                   1,
                   (255,255,255),
                   2,
                   cv.FILLED)

        
        out_xvid.write(frame)
        cv.imshow('frame_xvid', frame)
    
        k = cv.waitKey(1) & 0xFF
        if k == 27:
            break
    
    cam0.release()
    cv.destroyAllWindows()
    

def get_date():
    new_date = dt.now()
    date_name = new_date.strftime("%d%m%Y_%H %M %S")
    return date_name
    

Start_Recording(get_date() + '.avi')
