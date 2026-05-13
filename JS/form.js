const form = document.getElementById("form");

form.addEventListener("submit", (e) => {
  e.preventDefault();
  const err = document.getElementById("error");

  try {
    const name = document.getElementById("name").value;
    const email = document.getElementById("email").value;
    const password = document.getElementById("password").value;

    if (!name || !email.includes("@") || email === "" || !password) {
      throw "All fileds are required";
    }

    // if (!name) {
    //   //   alert("Name is requires");
    //   //   return;
    //   throw "Name is requires";
    // }

    // if (!email.includes("@") || email === "") {
    //   //   alert("Email is not valid or empty");
    //   //   return;
    //   throw "email is requires";
    // }

    // if (!password) {
    //   //   alert("password is required");
    //   //   return;
    //   throw "password is requires";
    // }
  } catch (error) {
    console.error(error);
    err.innerHTML = error;
  }

  console.log(name);
  console.log(email);
  console.log(password);
});
