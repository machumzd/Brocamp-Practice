var array=[1,2,3,4];
var array2=[...array]
array2.reverse()
array2.shift(1)
array=array.concat(array2)
console.log(array);