#2 Vigenere Cipher

def encrypt(text:str, key:str):
    text_len = len(text)
    key_len = len(key)
    arr = list(text)
    
    for i in range(text_len - 1):
        j = i % key_len
        if arr[i].isalpha():
            if(arr[i].isupper()):
                arr[i] =  chr( ( ( ord(text[i]) - ord('A') + ord(key[j]) - ord('a') ) % 26) + ord('A') )
            else:
                arr[i] = chr( ( ( ord(text[i]) - ord('a') + ord(key[j]) - ord('a') ) % 26) + ord('a') )
    
    return ''.join(arr)

def decrypt(text, key):
    text_len = len(text)
    key_len = len(key)
    arr = list(text)
    
    for i in range(text_len - 1):
        j = i % key_len
        if arr[i].isalpha():
            if(arr[i].isupper()):
                arr[i] =  chr( ( ( ord(text[i]) - ord('A') - ( ord(key[j]) - ord('a')) +26 ) % 26) + ord('A') )
            else:
                arr[i] =  chr( ( ( ord(text[i]) - ord('a') - ( ord(key[j]) - ord('a')) +26 ) % 26) + ord('a') )
    
    return ''.join(arr)

text = input("Enter Text: ")
key = input("Enter key: ")

enc_text = encrypt(text, key)
dec_text = decrypt(enc_text, key)

print(f"Encrypted = {enc_text} \nDecrypted = {dec_text}")

