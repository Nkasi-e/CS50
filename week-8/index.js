document.addEventListener("DOMContentLoaded", () => {
  document.querySelector("form").addEventListener("submit", (event) => {
    let name = document.querySelector("#name").value;
    alert("hello, " + name);
    event.preventDefault();
  });
});

document.addEventListener("DOMContentLoaded", () => {
  let input = document.querySelector("input");
  input.addEventListener("keyup", (event) => {
    let name = document.querySelector("p");
    if (input.value) {
      name.innerHTML = `hello, ${input.value}`;
    } else {
      name.innerHTML = `hello, whoever you are`;
    }
  });
});
