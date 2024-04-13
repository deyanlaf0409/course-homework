from times import Time
from competitors import Competitor

start_time = Time(9, 0, 0)
finish_time = Time(10, 30, 15)
competitor1 = Competitor(1, "Steve", "is running", start_time, finish_time)

print("Competitor information:")
print(competitor1)
print("Diff time:")
print(competitor1.race_time())
