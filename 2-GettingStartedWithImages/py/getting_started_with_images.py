import cv2 as cv
import os
import sys


# 'OPENCV_DIR' refers to a vc++ build tool dir, such as 'C:\OpenCV\Build\x64\vc14'
sample_path = os.getenv('OPENCV_DIR') + "\\..\\..\\..\\sources\\samples\\data"
cv.samples.addSamplesDataSearchPath(sample_path)

img = cv.imread(cv.samples.findFile("starry_night.jpg"))

if (img is None):
    sys.exit("Could not read the image.")

cv.imshow("Display window", img)
k = cv.waitKey(0)

if (k == ord("s")):
    cv.imwrite("starry_night.png", img)