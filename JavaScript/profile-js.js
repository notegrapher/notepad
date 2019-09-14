const body = document.querySelector("body");

const image = new Image();
image.src = `images/profile.jpeg`;
image.classList.add("profileImage");
body.prepend(image);