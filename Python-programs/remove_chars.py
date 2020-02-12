

#remove fisrt and last character from string
def remove(str):
	if(len(str) < 3):
		print("Error! - small string! ")
	else:
		print(str[1:len(str)-1])


#tests
while True:
	str = input("enter a string: ")
	remove(str)
