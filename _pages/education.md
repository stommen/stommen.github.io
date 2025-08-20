---
layout: page
title: Education
permalink: /education/
description: |
  Courses taken during my university time. I hold a Bachelor's degree 
  in Engineering Physics from Chalmers and I'm now pursuing a Master's in Physics. I have also completed
  one of two years on my way to a Bachelor of Science in Business and Economics from
  University of Gothenburg. During spring 2025, I attended an exchange semester at Nanyang
  Technological University as part of my Physics M.Sc.
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
      {% include x_smaller.liquid %}
    {% endfor %}
  </div>
  {% endif %}
