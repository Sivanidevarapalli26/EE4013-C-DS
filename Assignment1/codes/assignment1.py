# -*- coding: utf-8 -*-
"""Assignment1.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1yFST6azSow8iKL57V0RuFKjjktoMvDzZ
"""

import numpy as np

rows, cols = (4, 5)
arr = [[0 for i in range(cols)] for j in range(rows)]
print(arr)

for i in range(rows):
  for j in range(cols):
    arr[i][j]=10*i+j

for i in range(4):
    for j in range(5):
        print(id(arr[i][j]),end=' ')  #printing address of each element in the array
    print("")

'Required element address should be = first element in second row address+ 8*4*8 bits + 192'
for i in range(4):
  for j in range(5):
    if(id(arr[i][j])==(id(arr[1][0])+448)):
            print(arr[i][j])

#This element is nothing but 
#print(arr[2][4])