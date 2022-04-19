objs = main.o max_number.o insert_node.o height.o balance.o newNode.o leftRotate.o rightRotate.o inorder.o minValueNode.o delete.o Create_Contact.o search.o range.o edit.o

CC=g++
target=hello
CFLAGS= -c -Wall

all: $(target)

$(target): $(objs)
	$(CC) $^ -o $@

%.o: %.c 
	$(CC) $(CFLAGS) $^

clean:
	rm -rf *o hello