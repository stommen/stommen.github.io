---
layout: page
title: Nanyang Technological University
description: |
  Courses attended during my exchange semester in Singapore. You can also read my official exchange report
  requested by Chalmers for future exchange students or check out my own, less official, travel report.
img: assets/img/nanyang.png
importance: 1
category:
nav: true
nav_order: 3
display_categories:
horizontal: false
---
<!-- markdownlint-disable MD033 -->
<div class="education">
<!-- Display projects without categories -->

{% assign sorted_courses = site.schools | where: "category", "Nanyang" %}

  <!-- Generate cards for each project -->

{% if page.horizontal %}

  <div class="container">
    <div class="row row-cols-1 row-cols-md-2">
    {% for x in sorted_courses %}
      {% include x_horizontal.liquid %}
    {% endfor %}
    </div>
  </div>
{% else %}
  <div class="row row-cols-1 row-cols-md-3">
    {% for x in sorted_courses %}
      {% include x.liquid %}
    {% endfor %}
  </div>
{% endif %}
</div>
