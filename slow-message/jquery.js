$(document).ready(function(){
	$('button').click(function(){
		$('#mymessage').text($('input[name=input-text]').val());
		$('#mymessage').fadeIn();
		$('#mymessage').delay(2000);
		$('#mymessage').fadeOut();
	});	
});
