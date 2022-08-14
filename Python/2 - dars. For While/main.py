for i in range(65, 122):
    a = input("Enter letter (for close = stop): ")
    if a == "stop":
        break
    else:
        print(ord(a))