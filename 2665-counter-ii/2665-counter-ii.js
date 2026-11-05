/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let cnt = init;
    
    function increment(){
        return ++cnt;
    }

    function decrement(){
        return --cnt;
    }
    function reset(){
        cnt = init;
        return cnt;
    }
    return{
        increment : increment,
        decrement : decrement,
        reset : reset
    }
    
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */