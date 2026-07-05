---
layout: page
title: Education
permalink: /education/
description: |
  This page contains the courses I have taken during my university time. I hold a Degree of Master of Science in Engineering specialized in engineering physics from Chalmers University of Technology. I have also completed 60 ECTS of freestanding courses in Business and Economics from the University of Gothenburg. During spring 2025, I attended an exchange semester at Nanyang Technological University as part of my Master's studies in Physics.
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
