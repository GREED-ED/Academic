from math import exp 

def ANDGate(x1, x2): 
    stringLiteral = f"{x1} AND {x2} = " 
    weights = [-2, 1, 1]
    Z = weights[0] + x1 * weights[1] + x2 * weights[2]  #linear combination
    sigmod_val = 1 / (1 + exp(-Z))  #sigmoid function
    if sigmod_val >= 0.5:
        print(stringLiteral + "1")
    else:
        print(stringLiteral + "0")     

def ORGate(x1, x2): 
    stringLiteral = f"{x1} OR {x2} = " 
    weights = [-1, 2, 2] 
    Z = weights[0] + x1 * weights[1] + x2 * weights[2]  #linear combination
    sigmod_val = 1 / (1 + exp(-Z))  #sigmoid function
    if sigmod_val >= 0.5:
        print(stringLiteral + "1")
    else:
        print(stringLiteral + "0") 

for x1 in range(2): 
    for x2 in range(2): 
        ORGate(x1, x2)
        ANDGate(x1, x2) 
