import time
from threading import Thread
import sys
import os

os.system('cls') 

def animate_text(text, delay=0.05):
    for char in text:
        sys.stdout.write(char)
        sys.stdout.flush()
        time.sleep(delay)
    print()

def sing_lyric(lyric, delay, speed, line_delay=0):
    time.sleep(delay)
    animate_text(lyric, speed)
    time.sleep(line_delay)

def sing_song():
    lyrics = [
        
        ("Tante...", 0.08),
        ("Temanku semua pada jahat tante...", 0.1),
        ("Aku lagi susah mereka gak ada...", 0.1),
        ("Coba kalau lagi jaya...", 0.12),
        ("Aku di puja puja tante...", 0.07),
        ("Sudah terbiasa terjadi tante...", 0.09),
        ("Teman datang cuma kalo butuh saja...", 0.08),
        ("Coba kalau lagi susah...", 0.15),
        ("Mereka semua menghilaaaaang...", 0.15)
    ]
    
    delays = [0.3, 2.2, 5.8, 9.5, 13.5, 17.0, 20.5, 23.5, 27.5]
    
    threads = []
    for i in range(len(lyrics)):
        lyric, speed = lyrics[i]
        t = Thread(target=sing_lyric, args=(lyric, delays[i], speed))
        threads.append(t)
        t.start()
    
    for thread in threads:
        thread.join()
        
if __name__ == "__main__":
    sing_song()