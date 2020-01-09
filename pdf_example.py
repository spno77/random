#writes the first page of a pdf file into a text file
import PyPDF2

pdfFileObj = open('BinaryTrees.pdf', 'rb')

pdfReader = PyPDF2.PdfFileReader(pdfFileObj)

#pdfReader.numPages

pageObj = pdfReader.getPage(0)
page = pageObj.extractText()


file = open("testfile.txt","w")
file.write(page)