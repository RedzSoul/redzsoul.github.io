
// When the user scrolls down 20px from the top of the document, show the button
window.onscroll = function () { scrollFunction() };

function scrollFunction() {
    if (document.body.scrollTop > 20 || document.documentElement.scrollTop > 20) {
        document.getElementById("bottoneTop").style.display = "block";
    } else {
        document.getElementById("bottoneTop").style.display = "none";
    }
}

// When the user clicks on the button, scroll to the top of the document
function topFunction() {
    document.body.scrollTop = 0;
    document.documentElement.scrollTop = 0;
}


function funzioneSpoilerButton(pulsante) 
{
    if (pulsante.parentNode.parentNode.getElementsByTagName('div')['show'].style.display != '') 
    { 
        pulsante.parentNode.parentNode.getElementsByTagName('div')['show'].style.display = '';
        pulsante.parentNode.parentNode.getElementsByTagName('div')['hide'].style.display = 'none';
        pulsante.innerText = '';
        pulsante.value = 'Nascondi'; 
    }
    else 
    { 
        pulsante.parentNode.parentNode.getElementsByTagName('div')['show'].style.display = 'none';
        pulsante.parentNode.parentNode.getElementsByTagName('div')['hide'].style.display = '';
        pulsante.innerText = '';
        pulsante.value = 'Menu'; 
    }

}