"use strict"; 

//1
// function func() { 
//     console.log("name"); 
//     }
// func();

//2
// function func(num) {
//     if (num > 0) {
//         console.log('+++');
//     } else {
//         console.log('---');
//     }
// }
// func(5);

//3
// function func(num1, num2, num3) {
//     let sum = num1 + num2 + num3;
//     console.log(sum);
// }
// func(1, 2, 3);

//4
// function func(num) {
//     return Math.sqrt(num);
// }
// let a = func(3);
// let b = func(4);
// let sum = a + b;
// console.log(sum);

//5
// function func(arr) {
//     for (let num of arr) {
//         if (num % 2 !== 0) {
//             return false;
//         }
//     }
//     return true;
// }
// console.log(func([2, 4, 6]));

//6
// function func(num) {
//     let count = 0;
//     while (num >= 10) {
//         num = num / 2;
//         count++;
//     }
//     return count;
// }
// console.log(func(100));

//7
function hasPositiveNumber(arr) {
    return arr.some(num => num > 0);
}

// Example usage:
// console.log(hasPositiveNumber([-1, -2, 3])); // true
// console.log(hasPositiveNumber([-1, -2, -3])); // false

//8
let date = new Date(2006, 3, 6); // Месяцы в JavaScript начинаются с 0, поэтому 3 = апрель
let days = ['Воскресенье', 'Понедельник', 'Вторник', 'Среда', 'Четверг', 'Пятница', 'Суббота'];
let dayOfWeek = days[date.getDay()];
console.log(dayOfWeek); // Выведет день недели для 6 апреля 2006



