let sold_data = [
  Math.floor(Math.random() * (100 - 20 + 1)) + 20,
  Math.floor(Math.random() * (80 - 1 + 1)) + 1,
  Math.floor(Math.random() * (90 - 20 + 1)) + 20,
  Math.floor(Math.random() * (50 - 40 + 1)) + 40,
  Math.floor(Math.random() * (85 - 20 + 1)) + 20,
];

const ctx = document.getElementById("myChart").getContext("2d");
const myChart = new Chart(ctx, {
  type: "line",
  data: {
    labels: [
      "Pepperoni",
      "Farmhouse",
      "Veggie Paradise",
      "Peppy Panner",
      "VEGGIE PARADISE 2",
    ],
    datasets: [
      {
        label: "Pizzas",
        data: sold_data,
        backgroundColor: [
          "rgb(102, 11, 4)",
          "rgb(102, 11, 4)",
          "rgb(102, 11, 4)",
          "rgb(102, 11, 4)",
          "rgb(102, 11, 4)",
          "rgb(102, 11, 4)",
        ],
        borderColor: [
          "rgb(102, 11, 4)",
          "rgb(102, 11, 4)",
          "rgb(102, 11, 4)",
          "rgb(102, 11, 4)",
          "rgb(102, 11, 4)",
          "rgb(102, 11, 4)",
        ],
        borderWidth: 1,
      },
    ],
  },
  options: {
    scales: {
      y: {
        beginAtZero: true,
      },
    },
  },
});
