


/**
 * @param {string} blocks
 * @param {number} k
 * @return {number}
 */
let numberOccurance = (blocks, k) => {
    let count = 0;
    for ( let i = 0; i < k; i++ ) {
        if ( blocks[i] == 'B' ) count++;
    }
    return count
}

var minimumRecolors = function(blocks, k) {
    let count = numberOccurance( blocks, k ), mn = k, j = k;

    for ( let i = 0; j - 1 < blocks.length; i++, j++ ) {
        mn = Math.min( k - count, mn );
        if ( blocks[i] == 'B' ) count--;
        if ( blocks[j] == 'B' ) count++;
    }
    return mn;
};