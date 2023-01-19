# Create Stack
def create_stack():
    stack=[]
    return stack

def isempty(stack):
    return len(stack)==0

def push(stack,value):
    stack.append(value)
    print("Push Successfully")


def pop(stack):
    if isempty(stack):
        print("Stack is empty")
    else:
        stack. pop()


s=create_stack()
while True:
    choice=int(input("Enter The 1 For Push\nEnter The 2 For Pop\nEnter The 3 For Print\nGive Value :-"))
    match choice:
        case 1:
            push(s,int(input("Enter The Value : ")))
        case 2:
            pop(s)
        case 3:
            for i in s:
                print(i)


