"""Python (v2.7) code to accompany book:  Information Theory by JV Stone, 2015.
File: information_theory.py.
Author: John De Pledge.
Copyright: 2015, JV Stone, Psychology Department, Sheffield University,
                    Sheffield, England.
This code can be downloaded from
    http://jim-stone.staff.shef.ac.uk/BookInfoTheory/InfoTheoryPython.html
Creative Commons License (http://creativecommons.org/licenses/by-nc/4.0/).
You are free to share and adapt for non-commercial purposes only.

Summary: Library module with functions for calculating entropy from various
distributions."""

# Notes on list comprehensions e.g totals = [sum(row) for row in rows]
#
# The square brackets denote a list comprehension, which is read from
# left to right.
# In words : Make a list of the sum of each row for each row in rows.
#
# More on list comprehensions here:
# http://www.pythonforbeginners.com/basics/list-comprehensions-in-python


from collections import Counter
import math


def entropy_from_probabilities(probabilities):
    """Arguments:
            probabilities:  iterable, a probability distribution
       returns:
            HX:  float, the entropy of the passed distribution"""

    # Check we have a valid list of probabilities
    probabilities = valid_probabilities(probabilities)

    # Set entropy count to zero
    HX = 0

    # Loop over all probabilities and sum the entropy from each (Eq 2.52 P37)
    for px in probabilities:
        HX = HX + px * log2(1.0/px)

    return HX


def entropy_from_frequencies(frequencies):
    """Arguments:
            frequencies:  iterable, a frequency distribution
       returns:
            HX:  float, the entropy of the passed distribution"""

    # Transform the frequencies to probabilities. The probability of
    # an event is its frequency divided by the sum of all frequencies.

    sum_of_frequencies = sum(frequencies)

    # Make a list of : the probabilty for each frequency in the
    # list of frequencies.

    probabilities = [freq / float(sum_of_frequencies) for freq in frequencies]

    #
    # Now we have a probability distribution, we can find the entropy
    #
    HX = entropy_from_probabilities(probabilities)

    return HX


def entropy_from_sample(distribution):
    """Arguments:
            distribution:  iterable, a sample distribution
        e.g     [1,2,5,2,2,1,4,4,2,2,2,2]
                ["A","B","C","B","B","A","D","D","B","B","B","B"]
                ["H","T","H","T",,"H","H","H","H","H"]
       returns:
            HX:  float, the entropy of the passed distribution"""

    # Use Counter to count the occurrence of each different value in the
    # distribution.  This returns a dict.  The values() method returns
    # all the values of the dict, which for the Counter object is a list
    # of frequencies.

    counterdict = Counter(distribution)

    frequencies = counterdict.values()

    #
    # Now we have a frequency distribution, we can find the entropy
    #
    HX = entropy_from_frequencies(frequencies)

    return HX


def diff_entropy_from_frequencies(distribution, binsize):
    """Arguments:
            distribution:  iterable, a frequency distribution
            binsize: the binsize
       returns:
            HX:  float, the differential entropy of the passed distribution
                with given binsize"""

    # Eq. 5.18 P 116
    HX = entropy_from_frequencies(distribution) - log2(1.0 / binsize)

    return HX


def row_totals(distribution):
    """Arguments:
            distribution:  a list of lists.  A 2D array.
       returns:
            totals:  list, the row totals of the passed distributizon"""

    # Make a list of the sum of each row for each row in the distribution.

    totals = [sum(row) for row in distribution]

    return totals


def col_totals(distribution):
    """Arguments:
            distribution:  a list of lists.  A 2D array.
       returns:
            totals:  list, the column totals of the passed distribution"""

    # Initialise the totals list
    totals = []

    # Loop for each column
    for col in range(len(distribution[0])):

        # Make a list of the values of column col of row
        # for each row in distribution."
        colvalues = [row[col] for row in distribution]

        # Store the sum of the column values
        totals.append(sum(colvalues))

    return totals


def flatten(distribution):
    """Arguments:
            distribution:  a list of lists.  A 2D array.
       returns:
            flatlist:  list, a 1D concatenation of the passed distribution"""

    flatlist = []                      # Initialise a flatlist
    for row in distribution:           # Loop for each row in the distribution
        for col in row:                # Loop for each column in the row
            flatlist.append(col)       # append the column value to flatlist

    return flatlist


def valid_probabilities(distribution):
    """Arguments:
            distribution:  a list of probabilities.
       returns:
            probabilities, list of valid probabilities. It removes zero values.

    All values should be positive.  The sum of the
    probabilities should be equal to 1.0 to 2 decimal places. """

    # Check the probabilities sum to 1.00 to 2 decimal places
    if round(sum(distribution), 2) != 1.0:
        raise ValueError('Probabilities do not sum to 1')

    # Check we have no negative values
    if min(distribution) < 0:
        raise ValueError('Negative probability')

    # Make a list of the probabilities in distribution where
    # the probability is greater than zero
    probabilities = [p for p in distribution if p > 0]

    return probabilities


def log2(posval):
    """Arguments:
            posval:  a postive number
       returns:
            result:  float, base 2 log of posval"""

    result = math.log(posval, 2)

    return result


def strrounddp(num, decimal_p):
    """Arguments:
            num:  the number to round
            decimal_p: integer, the number of decimal places
       returns:
            result, string x rounded to p sig figs. """

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
