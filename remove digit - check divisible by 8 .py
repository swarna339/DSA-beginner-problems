def remove_each_digit(n,c):
    # Convert the integer to a string
    
    num_str = str(n)
    # Iterate through each character (digit) in the string
    for i in range(len(num_str)):
        # Remove the current character from the string
        removed_digit = num_str[:i] + num_str[i+1:]
        
        # Convert the modified string back to an integer
        removed_digit_int = int(removed_digit)
    
        if (removed_digit_int%8==0):
            print("YES")
            c=1
            break
    if c==0:
        print("NO")

# Example :
n = 79
c=0
if n%8==0:
    print("YES")
else:
    removed_digits = remove_each_digit(n,c)

OUTPUT:NO
