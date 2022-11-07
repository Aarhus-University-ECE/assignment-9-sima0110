#include <stdio.h>
extern "C"{
    // Add the header files required to run your main 
    #include "dfs.h"
}

// File for sandboxing and trying out code
int main(int argc, char **argv)
{  
    node *root = make_node (4,
			  make_node (7,
				     make_node (28,
						make_node (77,
							   0,
							   0),
						make_node (23,
							   0,
							   0)),
				     make_node (86,
						make_node (3,
							   0,
							   0),
						make_node (9,
							   0,
							   0))),
			  make_node (98,
				     0,
				     0));
    // Print Tree
    DFT(root);
}