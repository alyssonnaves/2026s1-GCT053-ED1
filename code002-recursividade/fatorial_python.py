


def fatorial(n):
    # caso base
    if (n == 0):
        return 1
    return n*fatorial(n-1)

if __name__ == "__main__":
    fat7 = fatorial(1000);
    print("7! = ", fat7);