import numpy as np
import matplotlib.pyplot as plt
from matplotlib import rc

rc("text", usetex = True)

resultados = np.loadtxt("random_walks.txt")
fig, ax = plt.subplots()
ax.hist(resultados, normed = 1, bins = 100)
ax.set_xlabel(r"Posici\'on final")
ax.set_ylabel(r"Probabilidad")
ax.set_title(r"Caminata aleatoria")
fig.savefig("rand.png")

