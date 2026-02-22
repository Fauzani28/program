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

def sing_song():
    lyrics = [
        ("Cerita kita tak jauh berbeda", 0.08),
        ("Got beat down by the world", 0.08),
        ("Sometimes I wanna fold", 0.08),
        ("Namun suratmu kan kuceritakan", 0.06),
        ("Ke anak-anakku nanti", 0.07),
        ("Bahwa aku pernah di cintai", 0.07),
        ("With everything you are", 0.08),
    ]
    
    delays = [0.0, 4.5, 8.0, 12.0, 16.0, 20.0, 24.0]
    
    print("\n====== Everything You Are - Hindia =====\n")
     
    threads = []
    start_time = time.time()
    
    for i, (lyric, speed) in enumerate(lyrics):
        t = Thread(target=lambda l, s, d: play_lyric(l, s, start_time + d), 
                   args=(lyric, speed, delays[i]))
        threads.append(t)
        t.start()
    
    for thread in threads:
        thread.join()

def play_lyric(lyric, speed, target_time):
    current_time = time.time()
    if target_time > current_time:
        time.sleep(target_time - current_time)
    animate_text(lyric, speed)

if __name__ == "__main__":
    sing_song()