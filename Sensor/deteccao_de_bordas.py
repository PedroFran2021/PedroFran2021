import os
import cv2
import numpy as np

img = cv2.imread(os.path.join('.', 'download.jpg'))

img_edge = cv2.Canny(img, 10, 50)


cv2.imshow('img', img)
cv2.imshow('img_edge', img_edge)

cv2.waitKey(0)

