/**
 * @file
 * Trianz university session node javascript file. 
 */

(function ($) {
  
    Drupal.session_node_form = Drupal.session_node_form || {};

    Drupal.behaviors.session_node_form = {
    attach: function (context, settings) {
      if ($('#sessions-node-form').length > 0) {
        // disable past dates.
                $("#edit-field-session-date-time-und-0-value-datepicker-popup-0").datepicker({
                    minDate: 0
                }).attr('readonly', 'readonly');
                $("#edit-field-session-date-time-und-0-value2-datepicker-popup-0").datepicker({
                    minDate: 0
                }).attr('readonly', 'readonly');
      }
    }
  };
    
  // Overrding the autocomplete select function and hiding the nid.
  Drupal.behaviors.autoComplete = {
    attach: function (context, settings) {
      if ($('input.form-autocomplete').length > 0) {
        // Overrding the autocomplete select function and hiding the nid.
        Drupal.jsAC.prototype.select = function (node) {
          this.input.value = $(node).data('autocompleteValue');
          if ($('#sessions-node-form').length > 0) {
            var match = this.input.value.match(/\s\((.*?)\)$/);
            $(this.input).attr('real-value', this.input.value);
            this.input.value = this.input.value.replace(match[0], '');
          }
          $(this.input).trigger('autocompleteSelect', [node]);
        };
      }
    }
  };
  
  Drupal.behaviors.hideNodeID = {
    attach: function (context, settings) {
      if ($('#sessions-node-form').length > 0) {
        // Taking the entity reference input IDs.
        var autocomplete_fields = ['#edit-field-training-title-und-0-target-id', '#edit-field-trainer-und-0-target-id'];
        // Hiding nid from node edit forms.
        $.each(autocomplete_fields, function (index, item) {
          $eref = $(item, context);
          if ($eref.val()) {
            // If field has value on page load, change it.
            var val = $eref.val();
            var match = val.match(/\s\((.*?)\)$/);
            $eref.attr('real-value', val);
            $eref.val(val.replace(match[0], ''));
          }
        });

        // On form submit, set the value back to the stored value with id.
        $('#sessions-node-form').submit(function (e) {
          $.each(autocomplete_fields, function (index, value) {
            $(value).val($(value).attr('real-value'));
          });
        });
      }
    }
  };
})(jQuery);
