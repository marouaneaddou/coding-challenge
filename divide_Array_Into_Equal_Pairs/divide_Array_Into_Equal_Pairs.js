


/**
 * @param {number[]} nums
 * @return {boolean}
 */
var divideArray = function(nums) {
    const dic = {};
    for ( let i = 0; i < nums.length; i++ ) {
        if ( nums[i] in dic ) dic[nums[i]] += 1
        else 
            dic[nums[i]] = 1;
    }
    for ( const item in dic ) {
        if ( dic[item] & 1 != 0 ) return false;
    }
    return true;
};

console.log(divideArray([1,2,3,4]))