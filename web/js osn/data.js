"use strict"; 

//let date = new Date();
//1
// console.log(date.getFullYear()); // год 
// console.log(date.getMonth());    // месяц 
// console.log(date.getDate());     

//console.log(date.getDate() + '-' + (date.getMonth() + 1) + '-' + date.getFullYear() );

//2
// let day = date.getDay(); 
// console.log(day); 
// if (day == 1-5) {
//     console.log('рабочий день');
// } else if (day == 6 || day == 0) {
//     console.log('выходной');
// } 

//3
// let months = [ 
//    'янв', 'фев', 'мар', 'апр', 'май', 'июн', 
//    'июл', 'авг', 'сен', 'окт', 'ноя', 'дек' 
//    ]; 
// let month = date.getMonth();
// console.log(months[month]);

//4
// let date = new Date(2006, 3, 6);
// let day = date.getDay();
// let days = ['вс', 'пн', 'вт', 'ср', 'чт', 'пт', 'сб']; 
// console.log(days[day]);
// console.log(day);

//5
// let anozedate = new Date(2010, 2, 15);
// let date = new Date(2000, 7, 1,); 
// let diff = anozedate - date; 
// console.log(diff/(1000 * 60 * 60 * 24) + ' дней');

//6
//let date = new Date(2025, 11, 31);
//let day = date.getDay();
//let days = ['вс', 'пн', 'вт', 'ср', 'чт', 'пт', 'сб']; 
//console.log(days[day]);

//7
let anozedate = new Date(2025, 0, 1);
let datea = new Date(2025, 6, 10,); 
let diff = datea - anozedate ; 
console.log(diff / (1000 * 60 * 60 * 24)  + ' дней');






