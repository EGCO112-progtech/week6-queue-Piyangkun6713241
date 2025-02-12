

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
  NodePtr new_node = (NodePtr) malloc(sizeof(Node));
  if(q->size==0) q->headPtr=new_node;//first node
  else (q->headPtr)->nextPtr=new_node;//other nodes
  q->tailPtr=new_node;
  q->size++;
  /*Finish enqueue */
 }
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
   if(t){
   int value= t->data;
   q->headPtr = t->nextPtr;
       /*Finish dequeue */
    if(q->size == 1) q->tailPtr=NULL;
    free(t);
    q->size--;
   return value;
   }
   printf("Empty queue\n");
   return 0;
}

