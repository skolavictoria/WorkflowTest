the idea looks correct, but 
the flowchart has some flaws:
-wrong type of arrows
-swap "array[j] with array[j+1]" should be -
"
temp = array[j]
array[j] = array[j+1]
array[j+1] = temp
"
