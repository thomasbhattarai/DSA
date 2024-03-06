#include <stdio.h>
int maxsize =8;
int stack[8];
int top = -1;

/* checking if the stack is full or not*/
int isfull (){
    if (top==maxsize-1)
    return 1;
    else 
    return 0;
}

/* checking if the stack is empty*/
int isEmpty(){
    if (top==-1)
    return 1;
    else 
    return 0;
}

/*Adding elements into stack*/
void push (int data){
    if (!isfull()) {
        top =  top + 1;
        stack[top] = data;
}
else{
    printf("could not insert data, stack is full.\n");
}
}

/*Remove elements from stack*/
int pop(){
    int data;
    if (!isEmpty()){
        data = stack[top];
        top = top -1;
        return data;
}else{
        printf("could not retrieve data, stack is empty.\n");
    }
}

/*Return element at the top of stack*/
int peek(){
    return stack[top];
}

/*Display the stack*/
void display(){
    int i;
    if(!isEmpty()) {
        for (i= top; i>=0; i--)
        printf("%d", stack [i]);
        printf("\n");
    } else {
        printf("stack is empty.\n");
    }
}

/*Search elements in stack*/
void search(int element) {
    printf("-------------search operations---------\n");
    for (int i=0; i < top; i++) {
        if (stack[i]== element) {
         printf("element found at index %d\n",i);
         return;
    
        }
    }
    printf("Element not found\n");
}
int main(){
    // push items on the stack//
    push(3);
    push(5);
   push(9);
   push(1);
   push(12);
   push(15);
   push(12);
   push(15);
   //stack full at this points so displays stack full error//
   push(15);
   printf("element at top of the stack: %d\n",peek());
   printf("Elemnts: \n");

   //print stack data//
   display();
   // search element in stack
   search(9);
   return 0;

}

