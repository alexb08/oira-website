var pfHeaderImgUrl = '';
var pfHeaderTagline = '';
var pfdisableClickToDel = 1;
var pfHideImages = 0;
var pfImageDisplayStyle = 'left';
var pfDisablePDF = 1;
var pfDisableEmail = 1;
var pfDisablePrint = 0;
var pfCustomCSS = '';
var pfBtVersion='1';
(function(){
	var js, pf;
	pf = document.createElement('script');
	pf.type = 'text/javascript';
	if('https:' == document.location.protocol){
		js='https://pf-cdn.printfriendly.com/ssl/main.js'
	} else {
		js='http://cdn.printfriendly.com/printfriendly.js'
	}
	pf.src=js;
	document.getElementsByTagName('head')[0].appendChild(pf)
})();
