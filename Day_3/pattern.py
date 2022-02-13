# ip 192.168.1.1, 190.168.1.380

ip=input("Input Ip")

l=ip.split(".")   # [198,168,1,1]

flag=False
for x in l:
    if int(x)>255:
        print("Invalid")
        flag=True
    else:
        continue
if flag==False:
    print("Valid ip")