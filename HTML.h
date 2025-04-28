<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Detail Recon - Interior Car Detailing</title>
<link rel="stylesheet" href="styles.css">
</head>
<body>
<header>
<div class="logo">
<h1>Detail Recon</h1>
</div>
<nav>
<ul>
<li><a href="#home">Home</a></li>
<li><a href="#services">Services</a></li>
<li><a href="#pricing">Pricing</a></li>
<li><a href="#booking">Book Appointment</a></li>
<li><a href="#contact">Contact</a></li>
</ul>
</nav>
</header>

<section id="home" class="hero">
<h2>Your car's interior, redefined.</h2>
<a href="#booking" class="cta-button">Book an Appointment</a>
</section>

<section id="services">
<h2>Our Services</h2>
<div class="service">
<h3>Basic Interior Detailing</h3>
<p>Includes vacuuming, dusting, and basic upholstery cleaning.</p>
</div>
<div class="service">
<h3>Full Interior Detailing</h3>
<p>Complete interior clean, including deep upholstery cleaning and deodorizing.</p>
</div>
</section>

<section id="pricing">
<h2>Pricing</h2>
<table>
<tr>
<th>Service</th>
<th>Price</th>
</tr>
<tr>
<td>Basic Interior Detailing</td>
<td>$99</td>
</tr>
<tr>
<td>Full Interior Detailing</td>
<td>$149</td>
</tr>
</table>
</section>

<section id="booking">
<h2>Book Your Appointment</h2>
<form id="booking-form">
<label for="name">Your Name</label>
<input type="text" id="name" required>

<label for="service">Choose Service</label>
<select id="service" required>
<option value="basic">Basic Interior Detailing</option>
<option value="full">Full Interior Detailing</option>
</select>

<label for="date">Preferred Date</label>
<input type="date" id="date" required>

<label for="time">Preferred Time</label>
<input type="time" id="time" required>

<button type="submit">Book Appointment</button>
</form>
</section>

<footer>
<p>Detail Recon - Veteran-Owned</p>
<p>Email: contact@detailrecon.com | Phone: (555) 123-4567</p>
</footer>

<script src="script.js"></script>
</body>
</html>