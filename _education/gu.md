---
layout: page
title: Gothenburg University
description: Bachelor of Science in Business and Economics
img: assets/img/gu.png
importance: 1
category: Economy
nav: true
nav_order: 3
display_categories:
horizontal: false
---
<!-- markdownlint-disable MD033 -->

<div class="education">
<!-- Display projects without categories -->

{% assign sorted_education = site.education | where: "folder", "gu" %}

  <!-- Generate cards for each project -->

{% if page.horizontal %}

  <div class="container">
    <div class="row row-cols-1 row-cols-md-2">
    {% for education in sorted_education %}
      {% include education_horizontal.liquid %}
    {% endfor %}
    </div>
  </div>
{% else %}
  <div class="row row-cols-1 row-cols-md-3">
    {% for education in education_courses %}
      {% include education.liquid %}
    {% endfor %}
  </div>
{% endif %}
</div>
