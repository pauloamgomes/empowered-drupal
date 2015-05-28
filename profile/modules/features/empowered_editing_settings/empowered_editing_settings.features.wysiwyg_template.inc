<?php
/**
 * @file
 * empowered_editing_settings.features.wysiwyg_template.inc
 */

/**
 * Implements hook_wysiwyg_template_default_templates().
 */
function empowered_editing_settings_wysiwyg_template_default_templates() {
  $templates = array();
  $templates['basic_structure'] = array(
    'title' => 'Basic Structure',
    'description' => '',
    'weight' => 0,
    'fid' => 0,
    'body' => '<h2>Page Sub Title</h2>

<table border="0" cellpadding="1" cellspacing="1" style="width: 100%;">
	<caption>Sample table</caption>
	<thead>
		<tr>
			<th scope="col">Header 1</th>
			<th scope="col">Header 2</th>
			<th scope="col">Header 3</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td><img src="http://placehold.it/250x100/&amp;text=example+placeholder+1" style="width: 100%; height: 80px;" /></td>
			<td><img src="http://placehold.it/250x100/&amp;text=example+placeholder+2" style="height: 80px; width: 100%;" /></td>
			<td><img src="http://placehold.it/250x100/&amp;text=example+placeholder+3" style="height: 80px; width: 100%;" /></td>
		</tr>
		<tr>
			<td>&nbsp;</td>
			<td>&nbsp;</td>
			<td>&nbsp;</td>
		</tr>
	</tbody>
</table>

<p>Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem</p>

<p>&nbsp;</p>
',
    'format' => 'rich_text',
    'name' => 'basic_structure',
    'content_types' => array(),
  );
  return $templates;
}
