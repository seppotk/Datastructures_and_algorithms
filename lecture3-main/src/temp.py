# https://www.javainuse.com/py2cpp
def greatestProduct(array):
    greatestProductSoFar = array[0] * array[1]
    for i, iVal in enumerate(array):
        for j, jVal in enumerate(array):
            if i != j and iVal * jVal > reatestProductSoFar:
                greatestProductSoFar = iVal * jVal
    return greatestProductSoFar
