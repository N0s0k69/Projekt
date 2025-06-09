"use strict"; 

let btn = document.querySelector('#start');
let h1 = document.querySelector('#timer');
let input = document.querySelector('#input');
// let g = h1.textContent;
let timerId = null;

//1
// start.addEventListener('click', function() {
//     console.log(i);
//     setInterval(function() {
//         console.log(++i);
//         h1.textContent = i;
//     }, 1);
// });

//2
// start.addEventListener('click', function() {
//     console.log(i);
//     setInterval(function() {
//         console.log(--i);
//         h1.textContent = i;
//     }, 1);
// });

//3
// input.addEventListener('blur', function(){
//     // Clear any existing timer
//     if (timerId) {
//         clearInterval(timerId);
//     }
    
//     let count = parseInt(input.value);
//     if (isNaN(count) || count < 0) {
//         h1.textContent = '0';
//         return;
//     }
    
//     h1.textContent = count;
    
//     timerId = setInterval(function() {
//         count--;
//         h1.textContent = count;
        
//         if (count <= 0) {
//             clearInterval(timerId);
//         }
//     }, 10);
// });

//4
// start.addEventListener('click', function(){
//     if (timerId) {
//                 clearInterval(timerId);
//             }
            
//             let count = parseInt(input.value);
//             if (isNaN(count) || count < 0) {
//                 h1.textContent = '0';
//                 return;
//             }
            
//             h1.textContent = count;
            
//             timerId = setInterval(function() {
//                 count--;
//                 h1.textContent = count;
                
//                 if (count <= 0) {
//                     clearInterval(timerId);
//                 }
//             }, 10);
// });

//5


let elem = document.querySelector('#elem');
setTimeout(function() {
    h1.textContent = '!';
}, 10000);







