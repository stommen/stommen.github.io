---
layout: page
title: Chalmers University of Technology
description: Master of Science in Engineering Physics
img: assets/img/chalmers.png
importance: 2
category:
nav: true
nav_order: 3
display_categories:
horizontal: false
---
<!-- markdownlint-disable MD033 -->

<div class="education">
<!-- Display projects without categories -->

{% assign sorted_education = site.education | where: "folder", "chalmers" %}

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
