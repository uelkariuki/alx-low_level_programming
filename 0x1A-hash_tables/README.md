# 0x1A. C - Hash tables
## Tasks
0. Write a function that creates a hash table. Prototype: `hash_table_t *hash_table_create(unsigned long int size);` where `size` is the size of the array
1. Write a hash function implementing the djb2 algorithm. Prototype: `unsigned long int hash_djb2(const unsigned char *str);`
2. Write a function that gives you the index of a key. Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);` where `key` is the key and `size` is the size of the array of the hash table
3. Write a function that adds an element to the hash table. Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
4. Write a function that retrieves a value associated with a key. Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`
5. Write a function that prints a hash table. Prototype: `void hash_table_print(const hash_table_t *ht);` where ht is the hash table
6. Write a function that deletes a hash table. Prototype: `void hash_table_delete(hash_table_t *ht);`
7. Rewrite the previous functions using these data structures: 
`shash_table_t *shash_table_create(unsigned long int size);`
`int shash_table_set(shash_table_t *ht, const char *key, const char *value);` The key/value pair should be inserted in the sorted list at the right place. Note that here we do not want to do exactly like PHP: we want to create a sorted linked list, by key (sorted on ASCII value), that we can print by traversing it.
`char *shash_table_get(const shash_table_t *ht, const char *key);`
`void shash_table_print(const shash_table_t *ht);`. Should print the hash table using the sorted linked list
`void shash_table_print_rev(const shash_table_t *ht);`. Should print the hash tables key/value pairs in reverse order using the sorted linked list
`void shash_table_delete(shash_table_t *ht);`
