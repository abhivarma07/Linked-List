#include<stdio.h>
#include<stdlib.h>


struct Node{
    int num ;
    struct Node* next ;
};

void insert_end(struct Node** head,int num)
{
        struct Node* new_node = NULL ;
        new_node = (struct Node*)malloc(sizeof(struct Node)) ;
       
        struct Node* temp = (struct Node*)malloc(sizeof(struct Node)) ;
        
        new_node->num = num ;
        new_node->next = NULL ;

        if(*head == NULL)
        {
            *head = new_node ;
        }

        else
        { temp = *head ;

            while(temp->next !=NULL)
            {
                temp = temp->next ;
            }

            temp->next = new_node ;

            new_node->next = NULL ;

        }
}




void insert_start(struct Node** head,int num)
{
        struct Node* new_node = NULL ;
        new_node = (struct Node*)malloc(sizeof(struct Node)) ;
       
        struct Node* temp = (struct Node*)malloc(sizeof(struct Node)) ;
        
        new_node->num = num ;
        new_node->next = NULL ;

        if(*head == NULL)
        {
            *head = new_node ;
        }

        else
        { temp = *head ;

           new_node->next = *head ;

           *head = new_node ; 

        }
}

int main()
{   
    int num ,i = 0;
    char ans = 'y' ;
    
    struct Node* head = (struct Node*)malloc(sizeof(struct Node)) ;
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node)) ;

    head = NULL ;


    while(i!=4)
    {   printf("\n LINKED LIST OPERATION \n") ;
        printf("1.Insert at end \n2.Insert at the Beginning\n3.Print All nodes \n4.Exit\n>") ;
        scanf(" %d",&i) ;

        switch (i)
        {
        case 1 :{
                     printf("\nEnter the number to enter : ") ;
                    scanf(" %d",&num) ;
                    insert_end(&head, num) ;
                    break ;
                }

        case 2 : {  
                    printf("\nEnter the number to enter : ") ;
                    scanf(" %d",&num) ;
                    insert_start(&head, num) ;
                    
                    break;
                    }           
        
        case 3 : {
                    if(head == NULL)
                    {
                        printf("\n NO ELEMENTS FOUND !!!! LIST EMPTYYY\n") ;

                        break ;
                    }
                    
                    else
                    {   printf("\nThe Nodes in the list are : \n") ;
                        temp = head ;
                        i=0 ;
                    while(temp !=NULL)
                    {    
                    printf("Node %d : %d \n",i,temp->num) ;
                         temp = temp->next ;
                         i++ ;
                    }

                    }
                    
                    

                    break ; 
             }


        case 4 : {

                    printf("\n!!!! EXITING !!!!!\n") ;
                    break ;
        }
        default: printf(" \n ERROR choose the correct option!!!!\n") ;
            break;
        }

    }


    
    
    return 0 ;
    
}
