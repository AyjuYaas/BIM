#1 Caesar/Shift cipher

def encrypt(text: str, shift: int):
    enc_text = ""
    for char in text:
        if char.isupper():
            enc_char = (ord(char) - ord('A') + shift) % 26 + ord('A')
        elif char.islower():
            enc_char = (ord(char) - ord('a') + shift) % 26 + ord('a')
        else:
            enc_char = ord(char)
        
        enc_text += chr(enc_char)
    return enc_text

def decrypt(enc_text, shift):
    return encrypt(enc_text, 26-shift)

text:str = input("Enter the Text: ")
shift:int = int(input("Enter the shift key: "))

enc_text = encrypt(text, shift)
dec_text = decrypt(enc_text, shift)

print(f"Encrypted: {enc_text} \nDecrypted: {dec_text}")
