#!/usr/bin/env python3

'''
    Geneates passwords and stores them in ods file.
'''

import string
from random import randint
from pyexcel_ods import save_data

numbers = list(string.digits)
letters = list(string.ascii_lowercase) + list(string.ascii_uppercase)
symbols = ['&','^','!','*','$','%','@','-']

dict_lists = {}

dict_lists[1] = numbers
dict_lists[2] = letters
dict_lists[3] = symbols

def pass_gen(pass_len):
    '''
        Returns password(str) with length equal to pass_len
    '''
    password = ''
    for i in range(pass_len):
        # num variable determines the list from which the char will be selected
        num         = randint(1,3)
  
        list_len    = len(dict_lists[num]) - 1
        randomChar  = randint(0,list_len) 

        i = dict_lists[num][randomChar]
        password += str(i)

    return password

data = []

if __name__ == "__main__":

    for i in range(31):
        data.append([pass_gen(16)])

    save_data("passwords.ods",data)


