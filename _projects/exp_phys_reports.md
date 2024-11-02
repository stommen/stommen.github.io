---
layout: page
title: Experimental Physics
description: |
  Reports as part of the TIF091/096- and TIF295-courses at Chalmers.
img: assets/img/Interference_pattern.jpg
category: Reports
display_categories: [TIF091/096, TIF295]
horizontal: false
---

<!-- markdownlint-disable MD033 -->

Reports as part of the [TIF091/096-](https://stommen.github.io/courses/tif091) and [TIF295-courses](https://stommen.github.io/courses/tif295) at Chalmers.

<div class="report">
  {% if site.enable_categories and page.display_categories %}
    <!-- Display categorized projects -->
    {% for category in page.display_categories %}
    <a id="{{ category }}" href=".#{{ category }}">
      <h2 class="category">{{ category }}</h2>
    </a>
    {% assign categorized_reports = site.reports | where: "category", category %}
    {% assign sorted_reports = site.reports | where: "folder", "exp_phys" %}
    <!-- Generate cards for each project -->
    {% if page.horizontal %}
    <div class="container">
      <div class="row row-cols-1 row-cols-md-2">
      {% for x in sorted_school %}
        {% include x_horizontal.liquid %}
      {% endfor %}
      </div>
    </div>
    {% else %}
    <div class="row row-cols-1 row-cols-md-3">
      {% for x in sorted_school %}
        {% include x.liquid %}
      {% endfor %}
    </div>
    {% endif %}
    {% endfor %}
  {% endif %}
</div>
