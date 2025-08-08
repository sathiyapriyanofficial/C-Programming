import time

last_time = []

while True:
    time.sleep(1)  # you must specify a sleep time, e.g., 1 second
    last_time.append(time.time())

    if len(last_time) > 1:
        diff = (last_time[-1] - last_time[-2]) * 100000
        print(f"hello world ({diff})")