
import cv2 


def Automatic_Image_Capture(camera_index,number_of_images, image_directory): 
    camera = cv2.VideoCapture(camera_index)
    image_counter = 0
    
    while(image_counter < number_of_images ):
        ret, frame = camera.read()
        if not ret: 
            print("Failed to grab frame")
            break
        
        frame1 = cv2.flip(frame, 1)
        img_name = "{}frame_{}.png".format(image_directory,image_counter)
        cv2.imwrite(img_name, frame1)
        image_counter +=1
    
    camera.release()
    cv2.destroyAllWindows()    
    return 0
        

#i = "C:\\Users\\Kunal\\P-workspace\\Tutorial\\image\\"
#Capture_Images(0, 100, i) 
