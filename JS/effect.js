window.addEventListener("scroll", () => {
  if (window.scrollY > 150) {
    console.log("Scrolling...");
  }
});

const box = document.getElementById("box");

window.addEventListener("scroll", () => {
  if (window.scrollY > 300) {
    box.style.background = "red";
    box.style.transform = "scale(1.5)";
    box.classList.add("scrolled");
  } else {
    box.style.background = "white";
    box.style.transform = "scale(1)";
    box.classList.remove("scrolled");
  }
});
