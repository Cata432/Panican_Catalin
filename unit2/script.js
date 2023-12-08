document.addEventListener("DOMContentLoaded", function() {
  let images = document.querySelectorAll("#slideshow > img");
  let startSlideshowText = document.getElementById("startSlideshowText");

  startSlideshowText.addEventListener("dblclick", function() {
    // Hide the text after starting slideshow
    startSlideshowText.style.display = "none";

    // Start the slideshow after a brief delay
    setTimeout(function() {
      images.forEach(img => {
        img.style.display = "none";
      });

      let slideIndex = 0;
      setInterval(function() {
        images[slideIndex].style.display = "none";
        slideIndex = (slideIndex + 1) % images.length;
        images[slideIndex].style.display = "block";
      }, 3000); // Change image every 2 seconds
    }, 001); // Delay before starting slideshow
  });
});