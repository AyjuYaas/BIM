def encrypt(text,s):
    result = ""

    # traverse text
    for i in range(len(text)):
        char = text[i]

        # Encrypt uppercase characters
        if (char.isupper()):
            result += chr((ord(char)-65 + s) % 26 + 65)

        # Encrypt lowercase characters
        else:
            result += chr((ord(char)-97 + s) % 26 + 97)

    return result

def decrypt(text,s):
    result = ""

    # traverse text
    for i in range(len(text)):
        char = text[i]

        # Encrypt uppercase characters
        if (char.isupper()):
            result += chr((ord(char)-65 - s) % 26 + 65)

        # Encrypt lowercase characters
        else:
            result += chr((ord(char)-97 - s) % 26 + 97)

    return result

#check the above function
text = "ATTACKATONCE"
s = 4
cipher = encrypt(text, s)

print ("Text  : " + text)
print ("Shift : " + str(s))
print ("Cipher: " + cipher)
print ("PT: " + decrypt(cipher ,s))