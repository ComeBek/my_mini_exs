
#ComeBek#

def alpha_mirror(string):
    result = ''
    for char in string:
        if char.isalpha():
            if char.isupper():
                result += chr(90 - ord(char) + 65)
            else:
                result += chr(122 - ord(char) + 97)
        else:
            result += char
    return result