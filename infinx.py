class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
def createNode(data):
    n=Node(data)
    return n
def reverse(head):
    if(head.next==None):
        return head
    left=head
    head=reverse(head.next)
    head.next=left
    return head
def printLL(head):
    temp=head
    while(temp):
        print(temp.data)
        temp=temp.next
def createLL():
    n1=createNode(5)
    n2=createNode(4)
    n3=createNode(3)
    n4=createNode(2)
    n5=createNode(1)
    n5.next=n4
    n4.next=n3
    n3.next=n2
    n2.next=n1
    temp=n5
    printLL(n5)
    head=n5
    head =reverse(head)
    printLL(head)
createLL()
