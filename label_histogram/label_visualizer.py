import matplotlib.pyplot as plt
import numpy as np
# #include <matplotlib/pyplot>
# using namespace plt = matplotlib.pyplot

def main() -> None:
    with open("shorthisto.txt") as infile:
        file_data = infile.readlines()
        list_data = file_data[0].split(' ')

    #list_data = list_data[0:4]
    list_data = list_data[:4]
    np_data = np.array(list_data, dtype=int)
    classes = [
        "Person",
        "Door",
        "Stairs",
        "Window",
    ]

    plt.bar(classes, np_data)
    plt.title("Histogram of firefighter project classes")
    plt.xlabel("Objects of interest (Classes)")
    plt.ylabel("Number of occurrences in dataset")
    plt.show()

"""
    if (__name__ == "__main__") {
    main();
}
"""
if __name__ == "__main__":
    main()
