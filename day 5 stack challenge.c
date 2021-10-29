/*
Consider the following image
Doesn’t it represent stack of books?
Each book has the credentials such as
Book_Id (int)
Book_Name (char)
Book_Author (char)
Book_Price (float)
You are required to arrange the books in such a way that, only the book at the top can be
removed, and new book can be added only on to the top of the existing book stack. Imagine
these books are to be kept in a box. The maximum number of books the box can contain is 5.
Write C routine to
• insert book
• remove book
• display the existing book details
The program should also check the following constraints.
• if the box is full then, books can’t be added
• books can’t be removed if the box is empty
Note : Use Structures. Enhance the program with pointer to structure concept (Introduce ->
operator)
?
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
struct book
{
    int book_id;
	char book_name[20],book_author[20];
    float book_price;

};
void push(struct book bk,int *top,struct book stack[])
{
    (*top)++;
    stack[*top]=bk;
}
void pop(int*top,struct book stack[])
{
    (*top)--;
}
void display(int top,struct book stack[])
{
    int i,j;
    for(i=top;i>=0;i--)
    {
        printf("Book id:%d\nBook_name:%s\nAuthor_name:%s\nBook_price:%f\n",stack[i].book_id,stack[i].book_name,stack[i].book_author,stack[i].book_price);

    }
    printf("\n");
}
int main()
{
    struct book stack[SIZE],bk;
    int ch,i,j;
    int top=-1;
    while(1)
	{
	    printf("1.Push\n2.Pop\n3.Display\n4.exit\n");
	    printf("Enter the choice\n");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	        case 1:if(top==SIZE-1)
	               {
	                   printf("Stack is full\n");
	                   break;
	               }
	               printf("Enter the book_id,book_name,author_name,price\n");
	               scanf("%d%s%s%f",&bk.book_id,bk.book_name,bk.book_author,&bk.book_price);
	               push(bk,&top,stack);
	               break;
	        case 2:if(top==-1)
	                {
	                    printf("Stack is empty\n");
	                    break;
	
	                }
	                pop(&top,stack);
	                break;
	        case 3:if(top==-1)
	                {
	                    printf("The elements are empty\n");
	                    break;
	
	                }
	                else
	                {
	                    printf("The contents of stack are\n");
	                }
	                display(top,stack);
	                break;
	        case 4:exit(0);
	    }
    }

}
