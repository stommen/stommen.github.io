---
layout: page
title: Education
permalink: /education/
description: |
  Courses taken during my engineering education. I hold a bachelor's degree 
  in engineering physics and am now pursuing a master's in physics.
nav: true
nav_order: 4
display_categories:
horizontal: false
---
<!-- markdownlint-disable MD033 -->
<!-- pages/projects.md -->

<!-- Display projects without categories -->

{% assign education = site.education %}

  <!-- Generate cards for each project -->

{% if page.horizontal %}

  <div class="container">
    <div class="row row-cols-1 row-cols-md-2">
    {% for x in education %}
      {% include x_horizontal.liquid %}
    {% endfor %}
    </div>
  </div>
  {% else %}
  <div class="row row-cols-1 row-cols-md-3">
    {% for x in education %}
      {% include x.liquid %}
    {% endfor %}
  </div>
  {% endif %}
