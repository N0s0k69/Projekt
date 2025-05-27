"use strict";


//1
// let elem = document.querySelector('#elem'); 
// elem.addEventListener('blur', func); 

// function func() { 
//     alert(square()); 
//     function square() { 
//         return elem.value * elem.value; 
//     } 
// }

//2
// let elem1 = document.querySelector('#elem1');
// let elem2 = document.querySelector('#elem2');
// let elem3 = document.querySelector('#elem3');

// function func() { 
//     console.log(this.value); 
// }

// func.call(elem1);
// func.call(elem2);
// func.call(elem3);

//3
// let elem = document.querySelector('#elem'); 
// function func(surname, name) { 
//     console.log(elem.value + ', ' + name + ' ' + surname); 
// } 
// func.call(elem, 'Smit', 'John'); // тут должно вывести 'hello, John Smit'

//4
let elem = document.getElementById('elem'); 
function func(name, surname) { 
    console.log(this.value + ', ' + name + ' ' + surname); 
} 

let func1 = func.bind(elem);

// тут напишите конструкцию с bind() 
func1('John', 'Smit'); // тут должно вывести 'hello, John Smit' 
func1('Eric', 'Luis'); // тут должно вывести 'hello, Eric Luis'

