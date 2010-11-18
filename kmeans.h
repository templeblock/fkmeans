/*
 * =====================================================================================
 *
 *       Filename:  kmeans.h
 *
 *    Description:  Header file for C k-means implementation
 *
 *        Version:  1.0
 *        Created:  12/11/2010 10:43:55
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  BlackLight (http://0x00.ath.cx), <blacklight@autistici.org>
 *        Licence:  GNU GPL v.3
 *        Company:  DO WHAT YOU WANT CAUSE A PIRATE IS FREE, YOU ARE A PIRATE!
 *
 * =====================================================================================
 */

#ifndef 	__KMEANS_H
#define 	__KMEANS_H

typedef struct __kmeans_t  {
	double **dataset;
	int dataset_size;
	int dataset_dim;
	int k;
	int *cluster_sizes;
	double ***clusters;
	double **centers;
} kmeans_t;

kmeans_t* kmeans_new ( double **dataset, const int dataset_size, const int dataset_dim, const int K );
kmeans_t* kmeans_auto ( double **dataset, int dataset_size, int dataset_dim );
void kmeans ( kmeans_t *km );
void kmeans_free ( kmeans_t *km );

#endif

