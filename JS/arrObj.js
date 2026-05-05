const techStack = [
  { id: 1, tech: "JavaScript", version: 7 },
  { id: 2, tech: "HTML", version: 5 },
  { id: 3, tech: "ReactJs", version: 18 },
  { id: 4, tech: "CSS", version: 3 },
];

// for (let i = 0; i < techStack.length; i++) {
//   console.log(techStack[i]);
// }

// for (let tech of techStack) {
//   console.log(tech);
// }

// const tech = techStack.forEach((tech, index) => {
//   //   if (index === 2) {
//   //     console.log(tech);
//   //   }

//   if (tech.tech === "CSS") {
//     console.log(tech);
//   }
// });

const text = document.getElementById("text");

const tech = techStack.map((item) => {
  text.innerHTML += `${item.tech}` + "<br/>";
});
