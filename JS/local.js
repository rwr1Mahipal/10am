// const tech = { id: 1, techStack: "Node", version: 20 };

// const saveToLocal = localStorage.setItem("tech", JSON.stringify(tech));
// const getFromLocal = JSON.parse(localStorage.getItem("tech"));
// console.log(getFromLocal);

// getFromLocal.version = 50;
// const update = localStorage.setItem("tech", JSON.stringify(getFromLocal));
// const remove = localStorage.removeItem("tech")

const tech = [
  { id: 1, techStack: "Node", version: 20 },
  { id: 2, techStack: "React", version: 18 },
  { id: 3, techStack: "JavaScript", version: 7 },
];
const save = localStorage.setItem("tech", JSON.stringify(tech));
const get = JSON.parse(localStorage.getItem("tech"));
console.log(get);

const update = get.map((item) => {
  if (item.id === 2) {
    item.version = 80;
  }
  return item;
});
localStorage.setItem("tech", JSON.stringify(update));
localStorage.setItem("user", JSON.stringify("mahipal"));
localStorage.setItem("name", JSON.stringify("red and white"));
// localStorage.removeItem("tech");
localStorage.clear()