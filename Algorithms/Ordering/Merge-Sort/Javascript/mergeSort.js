function mergeSort(array){
    if(array.length <= 1) return array;
    let mid = Math.floor(array.length / 2);
    let left = mergeSort(array.slice(0, mid));
    let right = mergeSort(array.slice(mid));
    return merge(left, right);
}

function merge(listLeft, listRight) {
    let result = [];
    let i = 0;
    let j = 0;
    while(i < listLeft.length && j < listRight.length){
        if(listLeft[i] < listRight[j]){
            result.push(listLeft[i]);
            i++;
        } else {
            result.push(listRight[j]);
            j++;
        }
    }
    while(i < listLeft.length){
        result.push(listLeft[i]);
        i++;
    }
    while(j < listRight.length){
        result.push(listRight[j]);
        j++;
    }
    return result;
}

console.log(mergeSort([3, 5, 1, 6]))