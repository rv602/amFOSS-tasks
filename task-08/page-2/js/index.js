function button_1() {
  localStorage.setItem("Storing", "stuff");
}

function button_2() {
  var today_date = new Date();
  var hour = today_date.getHours();
  var minute = today_date.getMinutes();
  var second = today_date.getSeconds();
  var current_time = "Time : " + hour + " : " + minute + " : " + second;

  alert(current_time);
}

function button_3() {
  var background_list = [
    "url('https://iprsrg.com/wp-content/uploads/2019/08/Background-Images-For-Websites-011.jpg')",
    "url('https://wallpaper-mania.com/wp-content/uploads/2018/09/High_resolution_wallpaper_background_ID_77701501486.jpg')",
    "url('https://cdn.wallpapersafari.com/90/88/EQOwW0.jpg')",
    "url('https://images.pexels.com/photos/669996/pexels-photo-669996.jpeg?cs=srgb&dl=pexels-bich-tran-669996.jpg&fm=jpg')",
    "url('https://hawkesburyit.com.au/wp-content/uploads/2016/04/website-background.gif')"
  ];
  var item =
    background_list[Math.floor(Math.random() * background_list.length)];
  document.body.style.background = item + "no-repeat";
  document.body.style.backgroundSize = "cover";
}
function button_6() {
  for (var i = 1; i <= 500; i++) {
    console.log("I did it");
  }
}
