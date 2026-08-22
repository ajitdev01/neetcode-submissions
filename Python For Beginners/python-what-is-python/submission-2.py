from decimal import Decimal, getcontext

def calculate_pi(n):
    getcontext().prec = n + 2  # Set precision higher than needed for accuracy
    
    C = 426880 * Decimal(10005).sqrt()
    K = 6
    M = 1
    X = 1
    L = 13591409
    S = L
    
    for i in range(1, n):
        M = (K ** 3 - 16 * K) * M // i ** 3
        L += 545140134
        X *= -262537412640768000
        S += Decimal(M * L) / X
        K += 12
    
    pi = C / S
    return str(pi)[:n + 2]  # Return first n digits plus the '3.'

n = 20
pi_digits = calculate_pi(n)
print(pi_digits)
