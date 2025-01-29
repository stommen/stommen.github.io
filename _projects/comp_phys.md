---
layout: page
title: Computational Physics
description: |
  Project reports as part of the FKA122 course at Chalmers.
img: assets/img/comp_phys.pdf
category: Reports
display_categories:
horizontal: false
---

<!-- markdownlint-disable MD033 -->

Reports as part of the [FKA122-course](https://stommen.github.io/courses/fka122) at Chalmers.

<!-- Display projects without categories -->

{% assign sorted_reports = site.reports | where: "folder", "comp" %}

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
