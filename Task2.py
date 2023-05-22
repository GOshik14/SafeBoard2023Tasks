#*************************************************************************************
#Напишите на C программу, возвращающую результат логической операции "AND" всех чисел ,
# входящих в диапазон [a,b].(т.е.  result = a AND (a+1) AND ... AND (b-1) AND b) 
#0 <= a <= b <= 231 - 1
#***************************************************************************************


str = input()
stack = []
ans = 'Nice'
open_breakets = {'{', '(', '['}
close_breakets = {'{' : '}', '(' : ')', '[' : ']'}
for ch in str:
    if ch in open_breakets:
        stack.append(ch)
    else:
        if len(stack) == 0:
            ans = 'Bruh'
            break
        elif close_breakets[stack.pop()] != ch:
            ans = 'Bruh'
            break

if len(stack) != 0:
    ans = 'Bruh'
print(ans)
