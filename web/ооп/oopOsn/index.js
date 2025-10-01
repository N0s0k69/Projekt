//1
// class Perosn{
//     constructor(name, age, country){
//         this.name = name;
//         this.age = age;
//         this.country = country;
//     }

//     show(){
//         return "имя: " + this.name + "\n" + 'возраст: '+ this.age + "\n" + "страна: "+ this.country;
//     }

// }
// let user1 = new Perosn ('Egor', 20, 'rus');
// let user2 = new Perosn ('Igor', 25, 'bel');
// console.log(user1.show());
// console.log(user2.show());

//2
class Rectangle{
    constructor(width ,height){
        this.width = width;
        this.height = height;
    }

    show(){
        return "периметр: " + 2 *(this.width + this.height)+ 
        "\n" + "плошадь: " + (this.width * this.height);
    }
}

let s = new Rectangle(5,3);
console.log(s.show());