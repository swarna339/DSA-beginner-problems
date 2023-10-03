def find_duplicate_characters(input_string):
    # Create a dictionary to store character counts
    char_counts = {}
    
    # Iterate through the characters in the input string
    for char in input_string:
        # Check if the character is a lowercase letter
        if 'a' <= char <= 'z':
            # Update the count for this character in the dictionary
            char_counts[char] = char_counts.get(char, 0) + 1
    
    # Iterate through the dictionary and print duplicate characters
    for char, count in char_counts.items():
        if count > 1:
            print(f"{char} -> {count}")

# Test the function
input_string = "abracadabra"
find_duplicate_characters(input_string)
# output: a ->5
          b->2
          r->2
