import numpy as np
import matplotlib.pyplot as plt

def plot_from_file(filename):
    x = []
    u = []
    
    with open(filename, 'r') as f:
        for line in f:
            content = line.split()
            x.append(float(content[0]))
            u.append(float(content[1]))

        f.close()
    
    plt.plot(x, u)
    plt.show()

plot_from_file("data.txt")
