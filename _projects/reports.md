---
layout: page
title: Reports
description: Some reports I have submitted during my time at Chalmers.
img:
category: Reports
display_categories:
horizontal: false
---
<!-- markdownlint-disable MD033 -->

<div class="reports>
<!-- Display projects without categories -->

{% assign sorted_reports= site.reports %}

  <!-- Generate cards for each project -->

{% if page.horizontal %}

  <div class="container">
    <div class="row row-cols-1 row-cols-md-2">
    {% for x in sorted_reports %}
      {% include x_horizontal.liquid %}
    {% endfor %}
    </div>
  </div>
{% else %}
  <div class="row row-cols-1 row-cols-md-3">
    {% for x in sorted_reports %}
      {% include x.liquid %}
    {% endfor %}
  </div>
{% endif %}
</div>
