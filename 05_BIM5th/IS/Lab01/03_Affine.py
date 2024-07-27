def gcd(a: int, b: int) -> int:
    if b == 0:
        return a
    return gcd(b, a % b)

def modInverse(a: int, m: int) -> int:
    for x in range(1, m):
        if (a * x) % m == 1:
            return x
    return 1

def encrypt(text: str, a: int, b: int) -> str:
    cipher_text = []
    for char in text:
        if char.islower():
            char = ((a * (ord(char) - ord('a')) + b) % 26) + ord('a')
        elif char.isupper():
            char = ((a * (ord(char) - ord('A')) + b) % 26) + ord('A')
        cipher_text.append(chr(char) if chr(char).isalpha() else char)
    return "".join(cipher_text)

def decrypt(text: str, a: int, b: int) -> str:
    a_inv = modInverse(a, 26)
    plain_text = []
    for char in text:
        if char.islower():
            char = ((a_inv * (ord(char) - ord('a') - b + 26)) % 26) + ord('a')
        elif char.isupper():
            char = ((a_inv * (ord(char) - ord('A') - b + 26)) % 26) + ord('A')
        plain_text.append(chr(char) if chr(char).isalpha() else char)
    return "".join(plain_text)

message = input("Enter the text: ")
while True:
    a = int(input("Enter value of a (must be co-prime with 26): "))
    if gcd(a, 26) != 1:
        print("A and 26 are not co-prime. Enter another value for a.")
    else:
        break
b = int(input("Enter value of b: "))

cipher = encrypt(message, a, b)
print('Cipher Text: ', cipher)
print('Decrypted Text: ', decrypt(cipher, a, b))
