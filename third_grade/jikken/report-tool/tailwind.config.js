/** @type {import('tailwindcss').Config} */
module.exports = {
  content: [
    "./src/**/*.html",
  ],
  theme: {
    extend: {},
  },
  plugins: [
    require("daisyui")
  ],
  safelist: [
    "collapse",
    "collapse-open",
    "bg-base-100",
    "flex-shrink-0",
    "collapse-title",
    "text-xl",
    "font-medium",
    "collapse-content",
  ]
}

