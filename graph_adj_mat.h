//
// Created by ren-e on 6/28/2022.
//

#ifndef GRAPHPROYECT_GRAPH_ADJ_MAT_H
#define GRAPHPROYECT_GRAPH_ADJ_MAT_H


#include <stdbool.h>

typedef struct mygraph graph;

graph *create_graph(int numnodes);

void destroy_graph(graph* g);

void print_graph(graph *g);

bool add_edge(graph *g, unsigned int from_node, unsigned int to_node);

bool has_edge(graph *g, unsigned int from_node, unsigned int to_node);

#endif //GRAPHPROYECT_GRAPH_ADJ_MAT_H
