//1
// class Perosn{
//     constructor(name, age, profession, hobbies){
//         this.name = name;
//         this.age = age;
//         this.profession = profession;
//         this.hobbies = hobbies;
//     }

//     show(){
//         console.log('name: '+ this.name);
//         console.log('age: '+ this.#year(this.age));
//         console.log('profession: '+ this.profession);
//         console.log('hobbies: '+ this.hobbies);
//     }

//     #year(age){
//         return 'years ' + age
//     }
// }
// let user1 = new Perosn('egor', 20, 'stremer', 'cs');
// console.log(user1.show());

//2
class Employee{
    #name; 
    #age; 
    #salary;
    #profession;
    #department;
    constructor(name, age, salary){
        this.#name = name;
        this.#age = age;
        this.#salary = salary;
    }

    setProfession(profession){
        this.#profession = profession;
    }

    setDepartment(department){
        this.#department = department;
    }

    getProfession(){
        return this.#profession;
    }

    getDepartment(){
        return this.#department;
    }

    getName() {
		return this.#name;
	}

    getAge() {
		return this.#age;
	}

    getSalary() {
		return this.#salary;
	}
}

let employees = [
    new Employee('Егор', 20, 100),
    new Employee('Ирина', 25, 200),
    new Employee('Алексей', 30, 300)
];

employees[0].setProfession('stremer');
employees[0].setDepartment('cool');

console.log(employees[0].getName());
console.log(employees[0].getAge());
console.log(employees[0].getSalary());
console.log(employees[0].getProfession());
console.log(employees[0].getDepartment());

console.log(employees[0] instanceof Employee); 
console.log(employees[1] instanceof Employee); 
console.log(employees[2] instanceof Employee); 

employees[0].setDepartment('IT');
employees[1].setDepartment('HR');
employees[2].setDepartment('Маркетинг');

for (let emp of employees) {
    console.log('Имя: ' + emp.getName() + ', Отдел: ' + emp.getDepartment());
}
console.log(employees[0].getName() + ' instanceof Employee:', employees[0] instanceof Employee);
console.log(employees[1].getName() + ' instanceof Employee:', employees[1] instanceof Employee);
console.log(employees[2].getName() + ' instanceof Employee:', employees[2] instanceof Employee);