function simulateData() {
  const temp = (20 + Math.random() * 10).toFixed(1);
  const hum = (40 + Math.random() * 20).toFixed(1);
  const aqi = Math.floor(200 + Math.random() * 100);

  document.getElementById("temp").textContent = temp;
  document.getElementById("hum").textContent = hum;
  document.getElementById("aqi").textContent = aqi;
}
setInterval(simulateData, 2000);
