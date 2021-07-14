def announce(f):
    def wrapper():
        print("Abaout to run the function")
        (f)
        print("Done with the fuction")

    return wrapper()


@announce
def hello():
    print("hello world")


hello()
