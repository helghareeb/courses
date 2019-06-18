"""Python (v2.7) code to accompany book:  Information Theory by JV Stone, 2015.
File: itheory.py, renamed information_theory_using_efficient_python.py.
Author: John De Pledge.
Copyright: 2015, JV Stone, Psychology Department, Sheffield University,
                    Sheffield, England.
This code can be downloaded from
    http://jim-stone.staff.shef.ac.uk/BookInfoTheory/InfoTheoryPython.html
Creative Commons License (http://creativecommons.org/licenses/by-nc/4.0/).
You are free to share and adapt for non-commercial purposes only.

Summary: A honed down, pythonic, version of information_theory.py

Loop Like a Native
https://www.youtube.com/watch?v=EnSu9hHGq5o

"""


from collections import Counter
import math


def entropy_from_probabilities(probabilities):
    """Returns the entropy of the passed probability distribution"""

    if round(sum(probabilities), 2) != 1.0:
        raise ValueError('Probabilities do not sum to 1 to 2 d.p.')

    if min(probabilities) < 0:
        raise ValueError('Negative probability')

    # Eq 2.52 P37
    return sum([px * log2(1.0/px) for px in probabilities if px > 0])


def entropy_from_frequencies(frequencies):
    """Returns the entropy of the passed frequency distribution"""

    # Transform the frequencies to probabilities. The probability of
    # an event is its frequency divided by the total of all frequencies.

    total = sum(frequencies)

    return entropy_from_probabilities([f / float(total) for f in frequencies])


def entropy_from_sample(distribution):
    """Returns the entropy of the passed distribution
            distribution:  iterable, a sample distribution
        e.g     [1,2,5,2,2,1,4,4,2,2,2,2]
                ["A","B","C","B","B","A","D","D","B","B","B","B"]
                ["H","T","H","T",,"H","H","H","H","H"]"""

    return entropy_from_frequencies(Counter(distribution).values())


def diff_entropy_from_frequencies(distribution, binsize):
    """Returns the differential entropy of the passed distribution and
    binsize"""

    # Eq. 5.18 P 116
    return entropy_from_frequencies(distribution) - log2(1.0 / binsize)


def row_totals(distribution):
    """Returns the row totals of the passed distributizon"""

    return [sum(row) for row in distribution]


def col_totals(distribution):
    """Returns the column totals of the passed distribution"""

    return [sum(col) for col in zip(*distribution)]


def flatten(distribution):
    """Returns a flat (1D concatenation) of the passed 2D array"""

    return [col for row in distribution for col in row]


def log2(posval):
    """Returns the base 2 log of posval"""

    result = math.log(posval, 2)

    return result


def strrounddp(num, decimal_p):
    """Returns a string version of num rounded to decimal_p decimal places"""

    if num == "":
        result = "0." + "0" * decimal_p
    else:
        fmt = "%." + str(decimal_p) + "f"
        result = fmt % round(float(num), decimal_p)

    return result


def cumulative_gaussian(x, mu=0.0, sigma=1.0):
    """The cumulative Gaussian at x, for the distribution with mean mu and
    standard deviation sigma.
    Parameters
    ----------
    x : float or array
       The values of x over which to evaluate the cumulative Gaussian function
    mu : float
       The mean parameter. Determines the x value at which the y value is 0.5
    sigma : float
       The variance parameter. Determines the slope of the curve at
       the point of Deflection
    Returns
    -------
    Notes
    -----
    Based on:
    http://en.wikipedia.org/wiki/Normal_distribution
                                    #Cumulative_distribution_function"""

    t = x - mu
    y = 0.5 * erfcc(-t / (sigma * math.sqrt(2.0)))

    return min(y, 1.0)


def erfcc(x):
    """Complementary error function."""
    z = abs(x)
    t = 1.0 / (1.0 + 0.5 * z)
    r = t * math.exp(-z * z - 1.26551223 + t * (1.00002368 + t * (.37409196 +
        t * (0.09678418 + t * (-0.18628806 + t * (0.27886807 +
        t * (-1.13520398 + t * (1.48851587 + t * (-0.82215223 +
        t * 0.17087277)))))))))
    if x >= 0.0:
        return r
    else:
        return 2.0 - r
