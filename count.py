import time

start_time = time.time()
n = 1
while n < 1000000000:
    n += 1
total_time = time.time()-start_time
print(total_time)
