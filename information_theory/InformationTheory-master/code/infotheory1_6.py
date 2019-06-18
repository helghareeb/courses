"""Python (v2.7) code to accompany book:  Information Theory by JV Stone, 2015.
File: infotheory1_6.py.
Author: John De Pledge.
Copyright: 2015, JV Stone, Psychology Department, Sheffield University,
                    Sheffield, England.
This code can be downloaded from
    http://jim-stone.staff.shef.ac.uk/BookInfoTheory/InfoTheoryPython.html
Creative Commons License (http://creativecommons.org/licenses/by-nc/4.0/).
You are free to share and adapt for non-commercial purposes only.

Summary: Calculates entropy for histogram in Figure 1.6b, which is based on
greyscale values from Figure 1.6a. This image is read in and the number of pixels with each greyscale
are counted.  These frequencies are used to plot a histogram and calculate the entropy.

Produces a graphic with title ending Entropy 7.788 bits
"""
from matplotlib import pyplot
from PIL import Image
import information_theory as it

def main():
    """Main function for Figure 1.6b example"""

    # Open the image
    image = Image.open("code/__image1_6.jpg")

    # Make a plot of the original
    pyplot.figure("Example 1.6b")
    pyplot.subplot(2, 2, 1)
    pyplot.imshow(image, cmap='gray')
    pyplot.axis('off')

    # Load all pixels as an iterable list
    pixels = image.getdata()

    # Zero our frequency list
    frequencies = [0] * 256

    # Loop over all pixels, incrementing the frequency for each greyscale
    # value found
    for pixel in pixels:
        frequencies[pixel] += 1

    # Use these frequencies to calculate an entropy
    HX = it.entropy_from_frequencies(frequencies)

    # plot all the points
    pyplot.subplot(2, 2, 2)
    # make vector of 256 grey-level values
    x = range(256)
    pyplot.plot(x, frequencies)

    # Set title with entropy rounded to 3 sigfigs & label the axes
    pyplot.title("Entropy = " + it.strrounddp(HX, 3) + " bits")
    pyplot.xlabel("Grey-level")
    pyplot.ylabel("Frequency")

    # Truncate x axis at max value of greyscale
    pyplot.xlim([0, len(frequencies)])

    # Display the image & graph
    pyplot.show()

if __name__ == "__main__":
    main()
