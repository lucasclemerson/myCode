$(document).ready(function (){
    $('button').click(function(){
        var message = $('input').val(); 
        
        if (message.length != 0){
            // data atual
            const data = new Date();
            var m = data.getMinutes() < 9? "0" +  data.getMinutes(): data.getMinutes();
            var s = data.getSeconds() < 9? "0" +  data.getSeconds(): data.getSeconds();
            var data_atual = data.getFullYear() + "/" + (data.getMonth()+1) + "/" + data.getDate() + " " + data.getHours()  + ":" + m + ":" + s; 

            
            
            
            var div = document.createElement('div');
            div.setAttribute('class', 'minha-mensagem');
            var p = document.createElement('p');
            p.textContent=message;
            div.append(p);
            var p2 = document.createElement('p');
            p2.textContent=data_atual;
            div.append(p2);
            $('.conversas').append(div);
            
            var div = document.createElement('div');
            div.setAttribute('class', 'bot-mensagem');
            var p = document.createElement('p');
            p.textContent="BOT OFFLINE";
            div.append(p);
            var p2 = document.createElement('p');
            p2.textContent=data_atual;
            div.append(p2);
            $('.conversas').append(div);
            
            
            $('.conversas').fadeOut(1000);
            $('.conversas').fadeIn();
            
            
            //limpar campo de texto
            $('input').val('');
        }
    });
});
