let navtoggle=document.querySelector(".nav-toggle");
let sidebar=document.querySelector(".side-bar");
navtoggle.addEventListener("click",function(){
    if(navtoggle.firstElementChild.classList.contains("bi-list")){
        navtoggle.firstElementChild.classList.replace("bi-list","bi-x")

    }
    else{
        navtoggle.firstElementChild.classList.replace("bi-x","bi-list")

    }
    sidebar.classList.toggle("show-sidebar")
})
let mobilemenu=document.querySelector(".menu-bottom");

mobilemenu.addEventListener("click",function(){
    if(navtoggle.firstElementChild.classList.contains("bi-list")){
        navtoggle.firstElementChild.classList.replace("bi-list","bi-x")

    }
    else{
        navtoggle.firstElementChild.classList.replace("bi-x","bi-list")

    }
    sidebar.classList.toggle("show-sidebar")
})


