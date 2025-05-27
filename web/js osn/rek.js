"use strict"; 

//1
// let arr = [1, 2, 3, 4, 5];
// let i = 0;
// function func(){ 
// 	console.log(arr[i]); 
// 	i++; 
// 	if (i <= 4){ 
// 		func(); // здесь функция вызывает сама себя 
// 	} 
// } 
// func();

//2
// let arr = [1, 2, 3, 4, 5]; 
// let i = 0;
// function func(){ 
// 	console.log(arr[i]**2); 
// 	i++; 
// 	if (i < arr.length){ 
// 		func(); // здесь функция вызывает сама себя 
//     } 
// } 
// func();

//3
// let obj = {
// 	a: 1,
// 	b: {c: 2, d: 3, e: 4},
// 	f: {g: 5, j: 6, k: {l: 7, m: {n: 8, o: 9}}}
// };

// function func(object) {
// 	for (let key in object) {
// 		if (typeof object[key] === 'object' && object[key] !== null) {
// 			func(object[key]); // рекурсивный вызов для вложенных объектов
// 		} else {
// 			console.log(object[key]); // вывод примитивных значений
// 		}
// 	}
// }
// func(obj);

//4
// let obj = {
// 	a: 1,
// 	b: {c: 2, d: 3, e: 4},
// 	f: {g: 5, j: 6, k: {l: 7, m: {n: 8, o: 9}}}
// };
// let summ = 0;

// function func(object) {
// 	for (let key in object) {
// 		if (typeof object[key] === 'object' && object[key] !== null) {
// 			func(object[key]); // рекурсивный вызов для вложенных объектов
// 		} else {
// 			console.log(summ += object[key]); // вывод примитивных значений
// 		}
// 	}
// }
// func(obj);

//5
// let arr = [1, 
//     [2, 7, 8], [3, 4], [5, 
//         [6, 7]]
//     ]; 
// console.log('Исходный массив:', arr);

// function func(arr) {
//     for (let i = 0; i < arr.length; i++) {
//         if (Array.isArray(arr[i])) {
//             func(arr[i]); // рекурсивный вызов для вложенных массивов
//         } else {
//             arr[i] = arr[i] ** 2; // возведение числа в квадрат
//         }
//     }
//     return arr;
// }

// let result = func(arr);
// console.log('Массив после возведения в квадрат:', result);
