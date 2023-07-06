/*
	The letters below are enqueued into a queue in the order they are given, while the dashes indicate a dequeue happens immediately after the letter preceding it has been enqueued. The queue is implemented using an array that doubles in size when the enqueued character would fill the array and halve its size when a dequeue would leave it one quarter full. Show the state of the internal array after each enqueue or dequeue, indicating the positions of both the "head" (the position of the next element to dequeue) and the "tail" (the position where the next element to be enqueued will go) for this queue.

A B C D - - E - -

enqueued A
index :  0  1
content: A  .
         H: 0  T: 1

enqueued B
index :  0  1  2  3
content: A  B  .  .
         H: 0 T: 2

enqueued C
index :  0  1  2  3
content: A  B  C  .
         H: 0 T: 3

enqueued D
index :  0  1  2  3  4  5  6  7
content: A  B  C  D  .  .  .  .
         H: 0 T: 4

dequeued A
index :  0  1  2  3  4  5  6  7
content: .  B  C  D  .  .  .  .
            H: 1 T: 4

dequeued B
index :  0  1  2  3
content: C  D  .  .
         H: 0 T: 2

enqueued E
index :  0  1  2  3
content: C  D  E  .
         H: 0 T: 3

dequeued C
index :  0  1  2  3
content: .  D  E  .
         H: 1 T: 3

dequeued D
index :  0  1
content: E  .
         H: 0  T: 1

*/
