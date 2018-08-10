time = raw_input().strip()

x = time[8:]
z = time[2:]
y = 0;
if x == "PM":
    y = int(time[:2])

    if y < 12:
        y = y + 12
        
    print str(y) + z[:-2]
elif x == "AM":
    y = int(time[:2])
    z = time[:2]
   
    if z == "12":
        z = "00";
    
    t = time[2:]    
    print z + t[:-2]
else:
    print time[:-2]