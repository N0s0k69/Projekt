//1
// class User{
//     constructor(name, age, country){
//         this.name = name;
//         this.age = age;
//         this.country = country;
//     }

//     sh(){
//         return `name: ${this.name}, age: ${this.age}, country: ${this.country}`;
//     }
// }
// class Employee extends User {
// 	constructor(name, age, country, profession,department, salary){
//         super(name, age, country);
//         this.profession = profession;
//         this.department = department;
//         this.salary = salary;
//     }
//     sg(){
//         return  `profesia: ${this.profession}, department: ${this.department}, salary: ${this.salary}` 
//     }
// }
// let user = new User("Иган", 32, "Россия");
// let user22 = new Employee("Иван", 30, "Россия", "Разработчик", "IT", 50000);
// console.log(user22.sh());//вывод из User
// console.log(user22.sg());//вывод из Employee
// console.log(user.sh());//вывод из User

//2 
class Book{
    constructor(title, author, publication_year){
        this.title = title;
        this.author = author;
        this.publication_year = publication_year;
    }
    sh(){
        return `title: ${this.title}, author: ${this.author}, publication_year: ${this.publication_year}`;
    }
}

class Ebook extends Book{
    constructor(title, author, publication_year, book_price){
        super(title, author, publication_year);
        this.book_price = book_price;
    }
    sh(){
        return `${super.sh()}, book_price: ${this.book_price}`;
    }
}

let book1 = new Ebook("Мастер и маргарита", "Булгаков", 1929, 100);
console.log(book1.sh());
