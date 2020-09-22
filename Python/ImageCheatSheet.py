import cv2

def Image_Resize(filename,scale_percent,newfilename):
    image_original = cv2.imread(filename, cv2.IMREAD_UNCHANGED)
    width = int(image_original.shape[1] * scale_percent /100)
    height = int(image_original.shape[0] * scale_percent /100)
    dim = (width, height)
    image_resized =  cv2.resize(image_original, dim, interpolation = cv2.INTER_AREA)
    cv2.imwrite(newfilename,image_resized)
    return None


