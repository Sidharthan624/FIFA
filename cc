*{
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}
.main-header{
    background-color: #045694;
    top: 0;
    width: 100%;
    position: sticky;
    z-index: 2;
}
a{
    text-decoration: none;
}
.top-nav{
    border-bottom: 1px solid white;
    display: flex;
    align-items: center;
    justify-content: end;
}
.menu{
    
    border-radius: 50%;
}
.ham-div{
    width: 26px;
    height: 26px;
    border-radius: 13px;
    background-color: #2d6896;
    margin-left: 20px;
    
}
.img_log{
    width: 100px;
}
.img_log img{
    width: 100%;
}
.top-bar-links{
    margin-left: 40px;
    display: flex;
    justify-content: space-between;
    align-items: center;
    
}
.icon .icon1{
    font-size: 24px;
}
.icons{
    
   
    align-items: center;
    justify-content: end;

}
.nav-bar1{
    
}
.nav-bar-main{
   
}
@media only screen and (max-width: 762px) {
    .nav-bar1  {
      display: none;
      
    }
    .globe{
        display: none;
    }
    .ham-div{
        display: none;
    }
    .main-nav-center{
        display: none;
    }
    .top-bar-links{
        display: none;
    }
    .icon1{
        position: absolute;
        right: 10px;
    }
    #search{
        position: absolute;
        left: 10px;
    }
    .img{
       margin-left: 250px;
        
    }
    .carousel-p3{
    display: none;
    }
    .icon-carsl{
        display: none;
    }
    .first-left{
        order: 1;
    }
    .s3-cell{
        display: flex;
    }
    .p-news{
      padding-left: 20px;
    }
    .img-news{
      width: 50%;
    }
   
  }
  .img1{
    background-image: url(	https://digitalhub.fifa.com/transform/9a17f3df-55f7-4b6c-be8c-812401566dab/MicrosoftTeams-image-139);
    background-repeat: no-repeat;
    height: 576px;
background-size: 100% 100%;

  }
  .rewind{
    font-size: 30px;
    font-family: "Poppins 500","Noto Sans Regular","Helvetica Neue",Arial,sans-serif;
    font-weight: 400;
  }
  .p1{
    font-size: 17px;
    font-weight: 400;
    line-height: 24px;
  }
  
  .watch{
    height: 38px;
    font-size: 14px;
    font-weight: 400;
    background-image: linear-gradient(rgb(81, 157, 237),rgb(75, 75, 243));
    border-radius: 19px;
    border: none;
    transition: transform 0.3s ease;
  }
  .watch:hover{
   transform: scale(1.1);
  }
  #carousel1{
    z-index: 1;
     
     height: 576px; 
  }
  .carousel-img{
    
    height: 576px;
  }
  .caption-div{
    
  }
  .carousel-p1{
    font-size: 16px;
    font-weight: 600;
  }
  .carousel-p2{
    font-size: 30px;
    font-weight: 600;
  }
  .icon-carsl{
    transform: rotate(45deg);
    background-color: rgb(0, 184, 255);
    width: 42.25px;
    height: 42.25px;
  }
  .icon-span{
    transform: rotate(-45deg);
  }
  .first-left{
    height: 576px;
    
  }
  .club-img{
    border-radius: 10px;
  }
  .s3-p1{
    font-size: 30px;
  }
  .s3-p2{
    font-size: 16px;
  }
  .p-news{
    font-weight: 700;
  }
  .section-3{
    
  }
  .section-6{
    background-image: url(./FPLS_FIFAStore_Banner_01.jpg);
    background-size:100%;
    height: 650px;
    background-repeat: no-repeat;
  }
  .shop{
    border-radius: 20px;
    background-color: transparent;
    border: solid white 2px;
    font-weight: 700;
    
    height: 40px;
  }
  .sec8 img{
    max-width: 655px;
    cursor: pointer;
    
  }
  
 