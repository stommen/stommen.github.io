---
layout: page
title: Courses at NTU
description: |
  Courses attended during my exchange semester in Singapore.
img:
importance: 1
category: Nanyang
display_categories:
horizontal: false
---

<!-- markdownlint-disable MD033 -->
<div class="education">
<!-- Display projects without categories -->

{% assign sorted_courses = site.courses | where: "category", "Nanyang" %}

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
