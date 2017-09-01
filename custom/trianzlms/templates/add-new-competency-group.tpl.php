<table class="views-table cols-3 table">
    <thead>
        <tr>
            <th class="views-field views-field-counter" scope="col" colspan="3">
                Add New 
            </th>
        </tr>
    </thead>
    <tbody>
        <tr class="item-row odd">
            <td class="views-field views-field-name">Competency Group Name:</td>
            <td class="views-field views-field-name editable edit-text">
                <?php print render($form['name']); ?>
            </td>

            <td class="views-field views-field-nothing">
                <?php print drupal_render_children($form); ?>
            </td>
        </tr>
    </tbody>
</table>
