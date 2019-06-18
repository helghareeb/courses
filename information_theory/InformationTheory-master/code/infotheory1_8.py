"""Python (v2.7) code to accompany book:  Information Theory by JV Stone, 2015.
File: infotheory1_8.py.
Author: John De Pledge.
Copyright: 2015, JV Stone, Psychology Department, Sheffield University,
                    Sheffield, England.
This code can be downloaded from
    http://jim-stone.staff.shef.ac.uk/BookInfoTheory/InfoTheoryPython.html
Creative Commons License (http://creativecommons.org/licenses/by-nc/4.0/).
You are free to share and adapt for non-commercial purposes only.

Summary: The code reads in the same figure as 1.6a.  It then calculates
the convolved image and plots the frequencies of the grey level differencs
between adjacent pixels to reproduce fig 1.8b and calculates an entropy for
this convolved image"""

from matplotlib import pyplot
from PIL import Image
import information_theory as it

def main():
    """Main function for Figure 1.8b example"""

    # Open the image
    image = Image.open("code/__image1_6.jpg")

    # Prepare display window
    pyplot.figure("Example 1.8")

    # Plot the original image
    pyplot.subplot(2, 2, 1)
    pyplot.title("Original Image")
    pyplot.imshow(image, cmap='gray')
    pyplot.axis('off')

    # Get image size
    xsize, ysize = image.size

    # Zero our frequency list
    frequencies = [0] * 511

    # Load pixels
    pixels = image.load()

    # Loop over all pixels, incrementing the frequency for each greyscale
    # value found.
    # As we loop wwe will make the convolved image by updating the pixel
    # just visited with the greyscale difference
    for row in range(0, ysize):
        for col in range(0, xsize - 1):
            diff = pixels[col + 1, row] - pixels[col, row]
            frequencies[diff+255] += 1
            # Change the pixel held to be the difference
            pixels[col, row] = diff + 127
        pixels[xsize - 1, row] = 0

    # Plot the convolved image
    pyplot.subplot(2, 2, 2)
    pyplot.title("Convolved Image")
    pyplot.imshow(image, cmap='gray')
    pyplot.axis('off')

    # Use these frequencies to calculate an entropy
    HX = it.entropy_from_frequencies(frequencies)

    # Plot the grey level differences
    pyplot.subplot(2, 2, 3)

    # The greyscale differences can vary between -255 and 256.
    # Create a list of these numbers : -255, -254, ..., 255, 256
    diffs = range(-255, 256)

    pyplot.plot(diffs, frequencies)

    # Set title with rounded HX & axes labels
    pyplot.title("Entropy = " + it.strrounddp(HX, 3) + " bits")
    pyplot.xlabel("Grey-level difference")
    pyplot.ylabel("Frequency")

    # Truncate x axis at +/- 63
    pyplot.xlim([-63, 63])

    # Display the graphic
    pyplot.show()

if __name__ == "__main__":
    main()
