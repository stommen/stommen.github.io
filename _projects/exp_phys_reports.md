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

<!-- Display projects without categories -->

{% assign sorted_reports = site.reports | where: "folder", "exp_phys" %}

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
