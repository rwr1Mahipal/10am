// const btn = document.getElementById("btn");

// btn.addEventListener("click", () => {
//   alert("Hello");
// });

// const text = document.querySelector(".text")
// const text = document.querySelectorAll(".text");

// text.forEach((item)=>{
//     item.innerHTML = "Hello"
// })

const techStack = [
  { id: 1, tech: "JavaScript", version: 7 },
  { id: 2, tech: "HTML", version: 5 },
  { id: 3, tech: "ReactJs", version: 18 },
  { id: 4, tech: "CSS", version: 3 },
  { id: 5, tech: "Node", version: 3 },
];

// const btn = document.getElementById("btn");
// const box = document.getElementById("box");

// btn.addEventListener("click", () => {
//   box.innerHTML = "";
//   techStack.forEach((tech) => {
//     const p = document.createElement("p");
//     p.innerHTML = `${tech.tech}`;
//     box.appendChild(p);
//   });
// });

const btn = document.getElementById("btn");
const box = document.getElementById("box");

btn.addEventListener("click", () => {
  box.innerHTML = "";
  techStack.forEach((item) => {
    box.innerHTML += `${item.tech}`;
  });
  if (box) {
    btn.style.display = "none";
  } else {
    btn.style.display = "block";
  }
});
