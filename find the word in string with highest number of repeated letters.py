def word_with_most_repeated_letters(s):
    def count_repeated_letters(word):
        letter_count = {}
        for letter in word:
            if letter.isalpha():
                letter = letter.lower()
                if letter in letter_count:
                    letter_count[letter] += 1
                else:
                    letter_count[letter] = 1
        return max(letter_count.values(), default=0)

    words = s.split()
    max_count = 1
    result_word = -1

    for word in words:
        count = count_repeated_letters(word)
        if count > max_count:
            max_count = count
            result_word = word
        else:
            return -1
            break

    return result_word

# Test the function
input_string = "camer"
result = word_with_most_repeated_letters(input_string)
print("Word with the most repeated letters:", result)  
# output:-1
