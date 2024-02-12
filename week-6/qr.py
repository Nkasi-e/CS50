# qr code
import os
import qrcode

img = qrcode.make("https://youtu.be.com/xvFZjo5PgG0")

# save the image
img.save("qr.png", "PNG") # PNG -> Portable Network Graphics

# Open
os.system("open qr.png")