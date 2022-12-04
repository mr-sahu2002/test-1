# x=[43,22,23,10]
# n=len(x)

# # 
# print
# print
# print(range(n))
# # for i in x:
# #     print(i)

# ######## using index value ##################
# '''
# def min_max(x,n):
#     arr_min,arr_max=x[0],x[0]
#     for i in range(n):
#         if arr_max<x[i]:
#             arr_max=x[i]
#         elif arr_min>x[i]:
#             arr_min=x[i]
#     return arr_max,arr_min
# print(min_max(x,n))
# '''
# ################# using direct value #############
# def min_max(x,n):
#     arr_min,arr_max=x[0],x[0]
#     for i in x:
#         if arr_max<i:
#             arr_max=i
#         elif arr_min>i:
#             arr_min=i
#     return arr_max,arr_min
# print(min_max(x,n))

'''
nterms= int(input("how many terms?"))

n1,n2=0,1
count=0

if nterms == 1:
    print("fibonaci upto "+nterm is n2)
else:
    while nterms > count:
        print(n1)
        nth=n1+n2
        n1=n2
        n2=nth
        count+=1
'''
############## prime number ##############
'''
num = int(input("enter the number:"))
count=0
for i in range(1,100):
    if i != num:
        if ((num % i) == 0):
            count +=1

if count > 1:
    print("composite number-" + str(count))
else:
    print("prime number-" + str(count))

'''
#list
a=[1,2,3]
x,y,z=a

#tuples
b=(45,32,55)

#set
c={45,34,22}
print(type(a))
#set
print(x)
print(y)
print(z)
