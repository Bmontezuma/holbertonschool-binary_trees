CC := gcc
CFLAGS := -Wall -Wextra -Werror -pedantic

SOURCE_FILES := 0-binary_tree_node.c      15-binary_tree_is_full.c      3-binary_tree_delete.c     9-binary_tree_height.c \
                10-binary_tree_depth.c    16-binary_tree_is_perfect.c   4-binary_tree_is_leaf.c \
                11-binary_tree_size.c     17-binary_tree_sibling.c      5-binary_tree_is_root.c \
                12-binary_tree_leaves.c   18-binary_tree_uncle.c        6-binary_tree_preorder.c \
                13-binary_tree_nodes.c    1-binary_tree_insert_left.c   7-binary_tree_inorder.c \
                14-binary_tree_balance.c  2-binary_tree_insert_right.c  8-binary_tree_postorder.c

OUTPUT_FILE := 18-uncle

all: $(OUTPUT_FILE)

$(OUTPUT_FILE): $(SOURCE_FILES)
	$(CC) $(CFLAGS) $(SOURCE_FILES) -o $(OUTPUT_FILE)

clean:
	rm -f $(OUTPUT_FILE)

.PHONY: all clean

