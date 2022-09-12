

// fetch('http://codeforces.com/api/user.rating?')
async function getText()
{
	let handle = document.getElementById("unameid").value;
	let myobj = await fetch(`http://codeforces.com/api/user.rating?handle=${handle}`);
	console.log(`http://codeforces.com/api/user.rating?handle=${handle}`);
	let Text = await myobj.text();
	document.getElementById("Rating").innerHTML = Text;
}


// M
const toggleSwitch =
 document.querySelector('.theme-slider input[type="checkbox"]');

/* Function to change theme */
function switchTheme(e) 
{

 /* Once checkbox is checked default theme change to dark */
 if (e.target.checked) {
  document.documentElement.setAttribute('theme', 'dark');
 }

 /* While page in dark mode and checkbox is
 checked then theme back to change light*/
 else {
  document.documentElement.setAttribute('theme', 'light');
 }
}

toggleSwitch.addEventListener('change', switchTheme, false);
// M






