$(function () {
    const teacher = new Array();
    let person = {
        name : "Aung Aung",
        age : 45
    };
    teacher.push(person);
    localStorage.setItem("user",JSON.stringify(teacher));

    let user = localStorage.getItem("user");
    let userArray = JSON.parse(user);
    console.log(userArray);
    
})