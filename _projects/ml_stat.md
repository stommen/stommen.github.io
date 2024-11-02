---
layout: page
title: Machine Learning and Statistics
description: |
  Reports as part of the TIF285 course at Chalmers.
img: assets/img/ML.pdf
category: Reports
display_categories:
horizontal: false
---

<!-- markdownlint-disable MD033 -->

Reports as part of the [TIF285-course](https://stommen.github.io/courses/tif285) at Chalmers.

<!-- Display projects without categories -->

{% assign sorted_reports = site.reports | where: "folder", "MLstat" %}

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
