#include <stdio.h>

#define NODE_LIMIT 10

typedef struct graph {
	int mat[NODE_LIMIT][NODE_LIMIT];
	int nodes;
}Graph;

void create_graph(Graph *g) {
	g->nodes = 0; // Makes sure it is set to 0
	for (int i = 0; i < NODE_LIMIT; i++) {
		for (int j = 0; j < NODE_LIMIT; j++) {
			g->mat[i][j] = 0;
		}
	}
}

void add_node(Graph *g) {
	g->nodes < NODE_LIMIT ? g->nodes++ : printf("Cannot add node\n");
}

// Checks if n is a valid node
int node_exist(int n, int nodes) {
	if(n >= 0 && n < nodes) {
		return 1;
	}
	return 0;
}

void connect_edges(Graph *g, int no1, int no2) {
	if(node_exist(no1, g->nodes) && node_exist(no2, g->nodes)) {
		g->mat[no1][no2] = 1;
		g->mat[no2][no1] = 1;
	} else {
		printf("Sorry pal you can't add that here\n");
	}
}

void remove_edge(Graph *g, int no1, int no2) {
	if(node_exist(no1, g->nodes) && node_exist(no2, g->nodes)) {
		g->mat[no1][no2] = 0;
		g->mat[no2][no1] = 0;
	} else {
		printf("Sorry pal you can't add that here\n");
	}
}


void print_graph(Graph *g) {
	for (int i = 0; i < NODE_LIMIT; i++) {
		for (int j = 0; j < NODE_LIMIT; j++) {
			printf("%d", g->mat[i][j]);
		}
		printf("\n");
	}
}

void print_conns(Graph *g) {
	print_graph(g);
	for (int i = 0; i < NODE_LIMIT; i++) {
		for (int j = 0; j < NODE_LIMIT; j++) {
			if (g->mat[i][j]) {
				printf("%d connects with %d\n", i, j);
			}
		}
	}
}

int main() {
	Graph g;
	create_graph(&g);

	add_node(&g);
	add_node(&g);
	add_node(&g);

	connect_edges(&g, 1, 2);
	connect_edges(&g, 2, 0);

	print_conns(&g);
	return 0;
}
