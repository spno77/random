#count the number of lowercase,uppercase and numbers in a string

def count_letters(str):
	lowercase = 0
	uppercase = 0
	numbers   = 0
	for i in range(len(str)):
		if str[i] >= 'A' and str[i] <= 'Z':
			lowercase+=1
		elif str[i] >= 'a' and str[i] <= 'z':
			uppercase+=1
		elif str[i] >= '0' and str[i] <= '9': 
			numbers += 1
	return lowercase,uppercase,numbers

#tests
while True:
	str = input("enter a string: ")

	count = count_letters(str)

	print("{} uppercase {} lowercase and {} numbers".format(count[0],count[1],count[2]))


