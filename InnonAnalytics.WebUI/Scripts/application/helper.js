/**
* http://stackoverflow.com/questions/149055/how-can-i-format-numbers-as-money-in-javascript
 * Number.prototype.format(n, x, s, c)
 * 
 * @param integer n: length of decimal
 * @param integer x: length of whole part
 * @param mixed   s: sections delimiter
 * @param mixed   c: decimal delimiter
 */
Number.prototype.format = function(n, x, s, c) {
    var re = '\\d(?=(\\d{' + (x || 3) + '})+' + (n > 0 ? '\\D' : '$') + ')',
        num = floorFigure(this.toString(), Math.max(0, ~~n));
       // num = this.toFixed(Math.max(0, ~~n));
    
    return (c ? num.replace('.', c) : num).replace(new RegExp(re, 'g'), '$&' + (s || ','));
};


function floorFigure(figure, decimals) {
    if (!decimals) decimals = 0;
    var d = Math.pow(10, decimals);
    return (parseInt(figure * d) / d).toFixed(decimals);
};