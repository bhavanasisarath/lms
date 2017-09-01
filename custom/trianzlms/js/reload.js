/**
 * @file
 * Trianz university reload javascript file. 
 */

(function ($) {
    Drupal.ajax.prototype.commands.reloadPage = function ()
    {
        window.location.reload();
    }
})(jQuery);
