#!/usr/bin/env python3

x = int(input("Enter the length of fibonacci sequence: "))

def fibo(n):
	if(n <= 0):
		return 0
	elif(n==1):
		return 1
	else:
		return fibo(n-2) + fibo(n-1)

fibo_list = []

if __name__ == "__main__": 

	for i in range(x):
		fibo_list.append(fibo(i))

	print(fibo_list)
