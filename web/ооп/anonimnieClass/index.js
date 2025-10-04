//a
// let programmInfo = class{
//     constructor(name, type,language){
//         this.name = name;
//         this.type = type;
//         this.language = language;
//         }
//     show(){
//         return `name: ${this.name}, type: ${this.type}, language: ${this.language}`;
//     }
// }

// let programmInfo1 = new programmInfo('WebStorm', 'IDE', 'JavaScript');
// console.log(programmInfo1.show());

//b
// class TVSeries {
//     constructor(title, genre, seasons) {
//         this._title = title;
//         this._genre = genre;
//         this._seasons = seasons;
//     }

//     get title() {
//         return this._title;
//     }

//     get genre() {
//         return this._genre;
//     }

//     get seasons() {
//         return this._seasons;
//     }

//     set title(value) {
//         this._title = value;
//     }

//     set genre(value) {
//         this._genre = value;
//     }

//     set seasons(value) {
//         this._seasons = value;
//     }

//     showInfo() {
//         return `Сериал: ${this.title}, Жанр: ${this.genre}, Сезонов: ${this.seasons}`;
//     }
// }

// let series = new TVSeries('Во все тяжкие', 'Драма', 5);
// console.log(series.showInfo());

//c
let p = document.querySelector('#text');

class Text{
    constructor(text) {
        this.text = text;
    }
    a1() {
        return this.text.length;
    }
    a2(){
        const lettersOnly = this.text.replace(/[^a-zA-Zа-яА-ЯёЁ]/g, '');
        return lettersOnly.length;
    }
    a3(){
    const spaces = this.text.split(' ').length - 1;
    return spaces;
    }
    a4(){
    const words = this.text.match(/[a-zA-Zа-яА-ЯёЁ]+/g) || [];
    return words;
    }
}
let textProcessor = new Text(p.textContent);
console.log('Количество символов в тексте:', textProcessor.a1());
console.log('Количество символов в тексте:', textProcessor.a2());
console.log('Количество символов в тексте:', textProcessor.a3());
console.log('Количество символов в тексте:', textProcessor.a4());
