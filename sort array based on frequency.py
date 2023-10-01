 from collections import Counter        #it counts the occurences of the elements
from itertools import repeat, chain     #repeat(element, times) is used to repeat each element in the pairs for the specified times
                                       #chain.from_iterable(...) flattens the iterable of repeated elements generated in the previous step into a single iterable

ini_list=[1,2,4,1,2,6,3,2]
result=sorted(ini_list,key=ini_list.count,reverse=True)
print(str(result))

OUTPUT:2,2,2,1,1,4,6,3
