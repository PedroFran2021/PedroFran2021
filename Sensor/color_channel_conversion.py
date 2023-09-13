import os
import cv2


img = cv2.imread(os.path.join('.', 'C:\Workspace\Sensor\download.jpg'))
img_rgb = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
img_gray = cv2.cvtColor (img, cv2.COLOR_BGR2GRAY)

cv2.imshow('img',img)
cv2.imshow('img_rgb', img_rgb)
cv2.imshow('img_gray', img_gray)

cv2.waitkey(0)
