"use strict"; 
//1
let button = document.querySelector('#button'); 
button.addEventListener('click', func); 

let button2 = document.querySelector('#button2'); 
button2.addEventListener('click', func2); 

let button3 = document.querySelector('#button3'); 
button3.addEventListener('click', func3); 

function func() { 
    alert('1'); 
}

function func2() { 
    alert('2'); 
}
function func3() { 
    alert('3'); 
}


//2
// let button = document.querySelector('#button'); 
// button.addEventListener('dblclick', func); 

// function func() { 
//     alert('1'); 
// }

//3
// let button = document.querySelector('#button');
// button.addEventListener('click', func);

// function func() { 
//     let abz = document.querySelector('#abz');
//     abz.textContent = 'BIbok'; 
// }


//4
// let button = document.querySelector('#button');
// button.addEventListener('click', func);


// function func() { 
//     let abz = document.querySelector('#abz');
//     let a = document.querySelector('a');
//     abz.textContent = a; 
// }

//5
//let a = 1;
//let button = document.querySelector('#button');
//button.addEventListener('click', func);

//function func() { 
//    a++;
//    button.textContent = a;   
//}

//6
//let input = document.querySelector('#input');
//let abz = document.querySelector('#abz');

//input.addEventListener('blur', func);

//function func() { 
//    let a = input.value;
//    abz.textContent = abz.textContent + a;
//}



