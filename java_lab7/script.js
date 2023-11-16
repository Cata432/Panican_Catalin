// cache the DOM 
var buton = document.getElementById("buton")
var body = document.getElementById("body")
var nume = document.getElementById("nume") 
var prenume = document.getElementById("prenume")
var img = document.getElementById("poza") 
var asteptari = document.getElementById("asteptari")
const d= new Date()
var year = d.getFullYear()
//add event listener to button 
buton.addEventListener("click", altaviata)

function altaviata()
{
	nume.innerHTML = "Functie: senior engineer"
	prenume.innerHTML = "Locul de munca visat: Microsoft"
	asteptari.innerHTML = "Experiente:<ol><li> inginerie electronica</li><li>C++</li> <li>javascrip</li><li> HTML</li><li>CSS</li> <li>C</li> <li>Python</li></ol>"
	img.src = "costum.jpg"
	body.style.backgroundcolor = "purple"
	body.style.color = "orange"
	img.style.opacity="70%"
	img.stylebordeWidth = "30px"
	img.style.width = "300px"
	img.style.height = " 200px"
}

function on() {
   document.getElementById("varsta").innerHTML = year - 2004	
}
function off() {
   document.getElementById("varsta").innerHTML = "Anul nasterii: 05.10.2004 "	
}