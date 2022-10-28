def pkr_to_aed(amount):
    return 0.017 * amount

def pkr_to_russianruble(amount):
    return amount*0.28

def pkr_to_yuan(amount):
    return 0.033 * amount

def main():
    amount=int(input("enter:"))
    print(pkr_to_aed(amount))
    print(pkr_to_russianruble(amount))
    print(pkr_to_yuan(amount))
main()



