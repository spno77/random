#gets a random fox image from api and saves it as jpg

import requests
from PIL import Image
import PIL
from io import BytesIO
import random

num = str(random.randint(1,50))
print(num)

r = requests.get("https://randomfox.ca/images/" + num + ".jpg")

img = Image.open(BytesIO(r.content))
img.save("fox_ " + num + ".jpg")

