
#occurencies of a character
def char_occur(char,str):
	occurrencies = str.count(char)
	return occurrencies

str = input("Enter a string:" )

#tests
count = char_occur('p',str)
print("char p occured {} times in the string".format(count))

count = char_occur('n',str)
print("char n occured {} times in the string".format(count))

count = char_occur('z',str)
print("char z occured {} times in the string".format(count))