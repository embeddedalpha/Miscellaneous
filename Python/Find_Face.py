import cv2 as cv
import numpy as np


def find_face():
    face_harcascade_dir = "D:\Data\opencv-master\opencv-master\data\haarcascades\haarcascade_frontalface_default.xml"
    face_cascade = cv.CascadeClassifier(face_harcascade_dir)
    cap = cv.VideoCapture(0)
    while(True):
        ret, frame = cap.read()
        frame = cv.flip(frame, 1)
        faces = face_cascade.detectMultiScale(frame, 1.2, 4)
    
        for (x,y,w,h) in faces:
            image = cv.rectangle(frame, (x,y), (x+w, y+h), (255,255,255),2)
            roi_gray = frame[y:y+h, x:x+w]
        
    cv.imshow('frame', frame)
    #===========================================================================
    # k = cv.waitKey(1) & 0xFF
    # if k == 27:
    #     break
    #===========================================================================
    cap.release()
    cv.destroyAllWindows()
