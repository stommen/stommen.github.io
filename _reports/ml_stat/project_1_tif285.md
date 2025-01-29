---
title: "TIF285: Project 1"
description: |
  Effective Field Theory Modeling.
img: assets/img/Q-plot.pdf
category:
importance: 1
layout: page_w_pdf
pdf: "Project_1_Data.pdf"
folder: "MLstat"
---

<!-- markdownlint-disable MD033 -->

<p style="text-align:center; font-size:35px">Effective Field Theory Modeling</p>

<p style="text-align:center; font-size:18px">Jonatan Haraldsson <br>
                                            Oscar Stommendal</p>

<p style="text-align:center; font-size:18px; font-weight: bold">Abstract</p>

<p style="text-align:left; font-size:16px">Parameter estimation with Bayesian inference of a simple model based on Chiral Effective Field Theory for nuclear interactions was realized in a Python environment. Figures with Markov Chain Monte Carlo (MCMC) sampled posterior distributions of estimated parameter values and observables, in this case binding energies of \(^3\)H, \(^4\)He, the radius \(r(^4\)He\()\) and the beta-decay half-life \(f_{T1/2}\) of \(^3\)H, was created and compared to a more advanced set-up used by Wesolowski et al. <a href="https://journals.aps.org/prc/abstract/10.1103/PhysRevC.104.064001" target="_blank" rel="noopener noreferrer">[1]</a>. Due to simplifications in the used model, a slight shift in the posterior of \(r(^4\)He\()\) was observed, which could have led to a less accurate parameter estimation. Unlike Wesolowski et al., the model discrepancy, i.e. errors related to the model, was fixed in this analysis, which gave normally distributed parameters and observables. As an extra task, one of the terms in the model discrepancy was set as a hyperparameter, which gave \(t\)-distributed parameters. The predictive distributions for the observables showed alternating behavior regarding distribution type, which was concluded to depend on the sampling setup.

<p style="text-align:left; font-size:16px; font-style: italic; font-weight: bold">You can download the report from the icon at the top of this page.</p>
