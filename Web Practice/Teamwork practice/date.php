<?php

function dateline($year_limit=0)
{
	$html_output = 'Date of Birth:';'    <div id="date_select" >'."\n";
        /*$html_output .= '        <label id="dateLabel" for="date_day"> DOB: </label>'."\n";*/

        /*days*/
        $html_output .= '           <select name="date_day" id="day_select">'."\n";
            for ($day = 1; $day <= 31; $day++) {
                $html_output .= '               <option>' . $day . '</option>'."\n";
            }
        $html_output .= '           </select>'."\n";

        /*months*/
        $html_output .= '           <select name="date_month" id="month_select" >'."\n";
        $months = array("", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December");
            for ($month = 1; $month <= 12; $month++) {
                $html_output .= '               <option value="' . $month . '">' . $months[$month] . '</option>'."\n";
            }
        $html_output .= '           </select>'."\n";

        /*years*/
        $html_output .= '           <select name="date_year" id="year_select">'."\n";
            for ($year = 1930; $year <= (date("Y") - $year_limit); $year++) {
                $html_output .= '               <option>' . $year . '</option>'."\n";
            }
        $html_output .= '           </select>'."\n";

        $html_output .= '   </div>'."\n";
	return $html_output; 
}

?>