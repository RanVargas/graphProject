#include <stdio.h>
#include "graph_adj_mat.h"
#include "graph_adj_mat.c"

int main() {
    graph *g1 = create_graph(5);

    add_edge(g1, 0, 1);
    add_edge(g1, 0, 2);
    add_edge(g1, 1, 0);
    add_edge(g1, 1, 2);
    add_edge(g1, 3, 3);
    add_edge(g1, 4, 4);
    add_edge(g1, 4, 1);
    add_edge(g1, 4, 0);

    print_graph(g1);

    destroy_graph(g1);

    return 0;
}
