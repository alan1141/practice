/*
 * priority_queue.h
 *
 *  Created on: Jan 16, 2018
 *      Author: alan
 */

#ifndef PRIORITY_QUEUE_H_
#define PRIORITY_QUEUE_H_

int maximum(int queue[]);
int extract_maximum(int queue[], size_t size);
void increase_val(int queue[], size_t size, int index, int value);
void insert_value(int queue[],size_t size, int value);

#endif /* PRIORITY_QUEUE_H_ */
