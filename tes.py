import matplotlib.pyplot as plt
import numpy as np

# Mengatur rentang nilai n (dari 1 hingga 20)
# Menggunakan lebih banyak titik agar kurva terlihat halus
n = np.linspace(1, 16, 500)

# Mendefinisikan fungsi-fungsi
# Menggunakan log basis 2 untuk 'log n' karena umum dalam konteks ini (komputer/algoritma)
y1 = 8 * n
y2 = 4 * n * np.log2(n)
y3 = 2 * n**2
y4 = n**3
y5 = 2**n

# Menangani nilai n=1 untuk 4n log n agar tidak error pada plot log (log 1 = 0, log 0 undefined)
# Kita biarkan matplotlib menangani masking otomatis atau set ke NaN untuk nilai <= 0
y2[y2 <= 0] = np.nan

# Membuat Plot
plt.figure(figsize=(10, 8))

# Plotting setiap fungsi
plt.plot(n, y1, label=r'$8n$', linewidth=2, linestyle='-')
plt.plot(n, y2, label=r'$4n \log n$', linewidth=2, linestyle='--')
plt.plot(n, y3, label=r'$2n^2$', linewidth=2, linestyle='-.')
plt.plot(n, y4, label=r'$n^3$', linewidth=2, linestyle=':')
plt.plot(n, y5, label=r'$2^n$', linewidth=2, linestyle='-')

# Mengatur skala logaritmik untuk kedua sumbu
plt.xscale('log')
plt.yscale('log')

# Menambahkan Grid (Kisi-kisi) Logaritmik sesuai contoh gambar user
plt.grid(True, which="both", ls="-", alpha=0.4)

# Label dan Judul
plt.xlabel('n (Log Scale)')
plt.ylabel('f(n) (Log Scale)')
plt.title('Grafik Pertumbuhan Fungsi (Skala Log-Log)')
plt.legend()

# Menampilkan grafik
plt.show()