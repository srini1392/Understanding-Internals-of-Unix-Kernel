/***************************************************************************************/ 
/*             Name                : Realloc Implementation                            */
/*             Author              : Srinikethan Mankala                               */
/*             Date                : 2019-03-27 16:54:50                               */
/***************************************************************************************/

#include <stdio.h>
#include <stdlib.h>




/* Copy data from block to block */
void copy_block (t_block src , t_block dst)
{
    int *sdata ,* ddata;
    size_t i;
    sdata = src ->ptr;
    ddata = dst ->ptr;
    for (i=0; i*4<src ->size && i*4<dst ->size; i++)
    ddata[i] = sdata[i];
}

/*
A very naive (but working) realloc, just follow this algorithm:
• Allocate a new bloc of the given size using malloc;
• Copy data from the old one to the new one;
• Free the old block;
• Return the new pointer.
Of course, we want something a little bit more e?cient: we don’t want a new allocation if
we have enough room where we are. The di?erent cases are thus:
15• If the size doesn’t change, or the extra-available size (do to alignement constraint, or if
the ramainning size was to small to split) is su?cient, we do nothing;
• If we shrink the block, we try a split;
• If the next block is free and provide enough space, we fusion and try to split if necessary.
The listing 4 on the next page presents our implementation. Don’t forget, that the call
realloc(NULL,s) is valid and should be replaced by malloc(s).
16Listing 4: The realloc function
*/
 void *realloc(void *p, size_t size)
 {
    size_t s;
    t_block b, new;
    void *newp;
    if (!p)
    return (malloc(size ));
    if ( valid_addr (p))
    {
    s = align4(size );
    b = get_block (p);
    if (b->size >= s)
    {
    if (b->size - s >= ( BLOCK_SIZE + 4))
    split_block (b,s);
    }
    else
    {
    /* Try fusion with next if possible */
    if (b->next && b->next ->free
    && (b->size + BLOCK_SIZE + b->next ->size) >= s)
    {
    fusion(b);
    if (b->size - s >= ( BLOCK_SIZE + 4))
    split_block (b,s);
    }
    else
    {
    /* good old realloc with a new block */
    newp = malloc(s);
    if (! newp)
    /* we’re doomed ! */
    return (NULL );
    /* I assume this work ! */
    new = get_block (newp );
    /* Copy data */
    copy_block (b,new );
    /* free the old one */
    free(p);
    return (newp );
    }
    }
    return (p);
    }
    return (NULL );
}