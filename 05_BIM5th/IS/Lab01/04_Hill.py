def inverse(a, m):
    m0 = m
    t = 0
    x0 = 0
    x1 = 1
    if m == 1:
        return 0

    while a > 1:
        q = a // m
        t = m
        m = a % m
        a = t
        t = x0
        x0 = x1 - q * x0
        x1 = t

    if x1 < 0:
        x1 += m0

    return x1

def encrypt(plaintext, key):
    len_text = len(plaintext)
    if len_text % 2 != 0:
        plaintext += 'x'  # Padding with 'x' if the plaintext length is odd
        len_text += 1
    cipher = []

    for i in range(0, len_text-1, 2):
        if plaintext[i].islower():
            cipher.append( (key[0][0] * (ord(plaintext[i]) - ord('a')) + key[0][1] * (ord(plaintext[i+1]) - ord('a'))) % 26 )
            cipher.append( (key[1][0] * (ord(plaintext[i]) - ord('a')) +key[1][1] * (ord(plaintext[i+1]) - ord('a'))) % 26 )
        elif plaintext[i].isupper():
            cipher.append( (key[0][0] * (ord(plaintext[i]) - ord('A')) +key[0][1] * (ord(plaintext[i+1]) - ord('A'))) % 26 )
            cipher.append( (key[1][0] * (ord(plaintext[i]) - ord('A')) +key[1][1] * (ord(plaintext[i+1]) - ord('A'))) % 26 )
        else:
            cipher.append(ord(plaintext[i]))
            cipher.append(ord(plaintext[i+1]))
    
    encrypted_text = ''.join([chr(c + ord('a')) if isinstance(c, int) else c for c in cipher])
    print("Encrypted Text: ", encrypted_text)
    return encrypted_text

def decrypt(cipher, key):
    len_text = len(cipher)
    inv = inverse(key[0][0]*key[1][1] - key[0][1]*key[1][0], 26)
    
    inv_key = [[0, 0], [0, 0]]
    inv_key[0][0] = key[1][1] * inv % 26
    inv_key[0][1] = -key[0][1] * inv % 26
    inv_key[1][0] = -key[1][0] * inv % 26
    inv_key[1][1] = key[0][0] * inv % 26

    plaintext = []

    for i in range(0, len_text, 2):
        if cipher[i].islower():
            plaintext.append( (inv * (key[1][1] * ord(cipher[i]) - key[0][1] * ord(cipher[i + 1]) + 26 * 26)) % 26 )
            plaintext.append( (inv * (-key[1][0] * ord(cipher[i]) + key[0][0] * ord(cipher[i + 1]) + 26 * 26)) %26 )

        elif cipher[i].isupper():
            plaintext.append( (inv * (key[1][1] * ord(cipher[i]) - key[0][1] * ord(cipher[i + 1]) + 26 * 26)) % 26 )
            plaintext.append( (inv * (-key[1][0] * ord(cipher[i]) + key[0][0] * ord(cipher[i + 1]) + 26 * 26)) %26 )
        else:
            plaintext.append(ord(cipher[i]))
            plaintext.append(ord(cipher[i+1]))

    decrypted_text = ''.join([chr(c + ord('a')) if isinstance(c, int) else c for c in plaintext])
    print("Decrypted text:", decrypted_text)
    return decrypted_text

def main():
    plaintext = input("Enter plaintext: ")
    key = [[3, 3], [2, 5]]
    # print("Enter key matrix (2x2, space-separated):")
    # for i in range(2):
    #     row = list(map(int, input().split()))
    #     key.append(row)


    encrypted_message = encrypt(plaintext, key)
    decrypt(encrypted_message, key)


if __name__ == "__main__":
    main()