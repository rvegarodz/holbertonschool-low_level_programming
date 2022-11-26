#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    return (EXIT_SUCCESS);
}

/**
 * If you want to test for collisions, here are some strings that collide using the djb2 algorithm:
 * hetairas collides with mentioner
 * heliotropes collides with neurospora
 * depravement collides with serafins
 * stylist collides with subgenera
 * joyful collides with synaphea
 * redescribed collides with urites
 * dram collides with vivency
 **/
