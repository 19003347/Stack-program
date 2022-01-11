#include <stdio.h>
int choice;
int top=0;
int stack[100];
int size=3;


void push(){
    if(top==size){
        printf("Stack overflow\n");
    }
    else{
        int n;
        printf("Enter the element: ");
        scanf("%d",&n);     
        stack[++top]=n;
    }

    
}
void pop()
{
    if(top==0){
        printf("Stack underflow\n");
    }
    else{
        top--;
    }
}
void display()
{
    if(top==0){
        printf("No elements to display");
    }
    else{
        printf("Elements are:\n");
        for(int i=top;i>=1;i--){
            printf("%d\n",stack[i]);
        }
    }
}
void search()
{
    int data,f;
    printf("Enter the element to search: ");
    scanf("%d",&data);
    for(int i=top;i>=1;i--){
    
        if(data==stack[i]){
            printf("%d is found in %d position\n",data,i);
            f=0;
        }
        else{
            f=1;
        }
    }
    if(f==1){
        printf("Element is not found\n");
    }
    
}
void peek(){
    printf("Top of stack : %d\n",stack[top]);
}

int main()

{
        
        while(1)
        {
            printf("stack operations: 1.push 2.pop 3.display 4.search 5.peek\n");
            printf("Enter you choice: ");
            scanf("%d",&choice);
            
            switch(choice){
            
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                search();
                break;
            case 5:
                peek();
                break;
            default:
                goto label;
            }
                
        }
    label:
        printf("Wrong option");
   

        

    return 0;
}
