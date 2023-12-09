const person = {
    firstName: "John",
    lastName: "Doe",
    language: "",
    set lang(lan) {
      this.language = lan;
    }
};

console.log(person.lang);