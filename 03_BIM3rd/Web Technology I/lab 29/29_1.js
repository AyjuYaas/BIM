let heading1 = document.getElementById("head1");
let heading2 = document.getElementsByClassName("head2");
let paragraphs = document.getElementsByTagName("p");

function changeStyle() {
  heading1.style.backgroundColor = "red";
  heading2[0].style.fontFamily = "cursive";

  paragraphs[0].style.color = "blue";
  paragraphs[1].style.fontSize = "40px";
}
