OBJS=heapsort.o heap.o node.o linkedList.o queue.o stack.o listNode.o helpers.o
heapsort: $(OBJS)
	gcc -Wall -g $(OBJS) -o heapsort

heapsort.o: heapsort.c heap.h helpers.h node.h linkedList.h stack.h 
	gcc -Wall -g -c heapsort.c
heap.o: heap.c heap.h helpers.h node.h linkedList.h stack.h listNode.h queue.h
	gcc -Wall -g -c heap.c
node.o: node.c node.h
	gcc -Wall -g -c node.c
linkedList.o: linkedList.c linkedList.h
	gcc -Wall -g -c linkedList.c
queue.o: queue.c linkedList.h listNode.h queue.h
	gcc -Wall -g -c queue.c
stack.o: stack.c linkedList.h stack.h listNode.h
	gcc -Wall -g -c stack.c
listNode.o: listNode.c listNode.h
	gcc -Wall -g -c listNode.c
helpers.o: helpers.c helpers.h node.h heap.h
	gcc -Wall -g -c helpers.c









clean:
	rm -f $(OBJS)

run: heapsort
	echo ./heapsort -d testInts
	./heapsort -d testInts

test: heapsort
	./heapsort
	./heapsort -v
	./heapsort -v -d
	./heapsort -v -d testInts
	./heapsort -d
	./heapsort -d testInts
	./heapsort testInts
	./heapsort foobar
