const about = document.querySelector(".about");

const image = new Image();
image.src = `images/profile.jpeg`;
image.classList.add("profile");
about.prepend(image);