var timeStart;
var timeStart2;
var ChangeDates = function (_timeline, _timeline_from_date, _timeline_to_date) { //*
    switch (_timeline) {
        case 'None':       
            return null;
        case 'Custom_Date':
           
            var t_f_d = moment(_timeline_from_date, "DD/MM/YYYY hh:mm:ss"); //new Date(_timeline_from_date);
            var t_t_d = moment(_timeline_to_date, "DD/MM/YYYY hh:mm:ss");            
            
            var obj = {
                startDateTime: t_f_d.toISOString(),
                endDateTime: t_t_d.toISOString()
            };
            return obj;
        case 'Today':
            var today = new Date();

            var tomorow = new Date();
            tomorow.setDate(today.getDate() + 1);

            //$(startDate).datepicker('setDate', today).datepicker('hide');
            //$(startTime).timepicker('setTime', '00:00').timepicker('hide');

            //$(endDate).datepicker('setDate', tomorow).datepicker('hide');
            //$(endTime).timepicker('setTime', '00:00').timepicker('hide');

            var t_f_d = moment(today.getDate() + '/' + (today.getMonth() + 1) + '/' + today.getFullYear() + ' 00:00:00', "DD/MM/YYYY hh:mm:ss"); //new Date(_timeline_from_date);
            var t_t_d = moment(tomorow.getDate() + '/' + (tomorow.getMonth() + 1) + '/' + tomorow.getFullYear() + ' 00:00:00', "DD/MM/YYYY hh:mm:ss");

            var obj = {
                startDateTime: t_f_d.toISOString(),
                endDateTime: t_t_d.toISOString()
            };
            return obj;

            //break;
        case 'Last24hours':
            var today = new Date();
            var yesterday = new Date();
            yesterday.setDate(yesterday.getDate() - 1);
            var time1 = yesterday.getHours() + ':' + yesterday.getMinutes();
            var time2 = today.getHours() + ':' + today.getMinutes();

            timeStart = time1;
            timeStart2 = time1;
            //$(startDate).datepicker('setDate', yesterday).datepicker('hide');
            //$(startTime).timepicker('setTime', time1).timepicker('hide');;
            //$(endDate).datepicker('setDate', today).datepicker('hide');
            //$(endTime).timepicker('setTime', time2).timepicker('hide');

            var t_f_d = moment(yesterday.getDate() + '/' + (yesterday.getMonth() + 1) + '/' + yesterday.getFullYear() + ' ' + time1, "DD/MM/YYYY hh:mm:ss"); //new Date(_timeline_from_date);
            var t_t_d = moment(today.getDate() + '/' + (today.getMonth() + 1) + '/' + today.getFullYear() + ' ' + time2, "DD/MM/YYYY hh:mm:ss");

            var obj = {
                startDateTime: t_f_d.toISOString(),
                endDateTime: t_t_d.toISOString()
            };
            return obj;
        case 'Yesterday':
            var today = new Date();
            var yesterday = new Date();
            yesterday.setDate(yesterday.getDate() - 1);

            //$(startDate).datepicker('setDate', yesterday).datepicker('hide');
            //$(startTime).timepicker('setTime', '00:00').timepicker('hide');
            //$(endDate).datepicker('setDate', today).datepicker('hide');
            //$(endTime).timepicker('setTime', '00:00').timepicker('hide');
            var t_f_d = moment(yesterday.getDate() + '/' + (yesterday.getMonth() + 1) + '/' + yesterday.getFullYear() + ' 00:00:00', "DD/MM/YYYY hh:mm:ss"); //new Date(_timeline_from_date);
            var t_t_d = moment(today.getDate() + '/' + (today.getMonth() + 1) + '/' + today.getFullYear() + ' 00:00:00', "DD/MM/YYYY hh:mm:ss");
            var obj = {
                startDateTime: t_f_d.toISOString(),
                endDateTime: t_t_d.toISOString()
            };
            return obj;
            
        case 'WeekToDate':
            var today = new Date();
            var monday = new Date();
            var day = today.getDay(),
                diff = today.getDate() - day + 1;//(day == 0 ? -6 : 0);
            monday.setDate(diff);

            var time = today.getHours() + ':' + today.getMinutes();

            //$(startDate).datepicker('setDate', monday).datepicker('hide');
            //$(startTime).timepicker('setTime', '00:00').timepicker('hide');
            //$(endDate).datepicker('setDate', today).datepicker('hide');
            //$(endTime).timepicker('setTime', time).timepicker('hide');
            var t_f_d = moment(monday.getDate() + '/' + (monday.getMonth() + 1) + '/' + monday.getFullYear() + ' 00:00:00', "DD/MM/YYYY hh:mm:ss"); //new Date(_timeline_from_date);
            var t_t_d = moment(today.getDate() + '/' + (today.getMonth() + 1) + '/' + today.getFullYear() + ' ' + time, "DD/MM/YYYY hh:mm:ss");

            var obj = {
                startDateTime: t_f_d.toISOString(),
                endDateTime: t_t_d.toISOString()
            };
            return obj;

            
        case 'LastWeek':
            var today = new Date();
            var firstday = new Date();
            var lastday = new Date();
            var day = today.getDay(),
                diff = today.getDate() - day;//(day == 0 ? -6 : 0);

            lastday.setDate(diff + 1);
            firstday.setDate(diff - 6);

            //$(startDate).datepicker('setDate', firstday).datepicker('hide');
            //$(startTime).timepicker('setTime', '00:00').timepicker('hide');
            //$(endDate).datepicker('setDate', lastday).datepicker('hide');
            //$(endTime).timepicker('setTime', '00:00').timepicker('hide');
            var t_f_d = moment(firstday.getDate() + '/' + (firstday.getMonth() + 1) + '/' + firstday.getFullYear() + ' 00:00:00', "DD/MM/YYYY hh:mm:ss"); //new Date(_timeline_from_date);
            var t_t_d = moment(lastday.getDate() + '/' + (lastday.getMonth() + 1) + '/' + lastday.getFullYear() + ' 00:00:00', "DD/MM/YYYY hh:mm:ss");
            var obj = {
                startDateTime: t_f_d.toISOString(),
                endDateTime: t_t_d.toISOString()
            };
            return obj;

           
        case 'Last7Days':
            var today = new Date();
            var day = new Date();
            day.setDate(day.getDate() - 7);
            //$(startDate).datepicker('setDate', day).datepicker('hide');
            //$(startTime).timepicker('setTime', '00:00').timepicker('hide');
            //$(endDate).datepicker('setDate', today).datepicker('hide');
            //$(endTime).timepicker('setTime', '00:00').timepicker('hide');
            var t_f_d = moment(day.getDate() + '/' + (day.getMonth() + 1) + '/' + day.getFullYear() + ' 00:00:00', "DD/MM/YYYY hh:mm:ss"); //new Date(_timeline_from_date);
            var t_t_d = moment(today.getDate() + '/' + (today.getMonth() + 1) + '/' + today.getFullYear() + ' 00:00:00', "DD/MM/YYYY hh:mm:ss");
            var obj = {
                startDateTime: t_f_d.toISOString(),
                endDateTime: t_t_d.toISOString()
            };
            return obj;
        case 'MonthToDate':
            var today = new Date();
            var day = new Date();
            day.setDate(1);

            var time = today.getHours() + ':' + today.getMinutes();

            //$(startDate).datepicker('setDate', day).datepicker('hide');
            //$(startTime).timepicker('setTime', '00:00').timepicker('hide');
            //$(endDate).datepicker('setDate', today).datepicker('hide');
            //$(endTime).timepicker('setTime', time).timepicker('hide');
            var t_f_d = moment(day.getDate() + '/' + (day.getMonth() + 1) + '/' + day.getFullYear() + ' 00:00:00', "DD/MM/YYYY hh:mm:ss"); //new Date(_timeline_from_date);
            var t_t_d = moment(today.getDate() + '/' + (today.getMonth() + 1) + '/' + today.getFullYear() + ' ' + time, "DD/MM/YYYY hh:mm:ss");

            var obj = {
                startDateTime: t_f_d.toISOString(),
                endDateTime: t_t_d.toISOString()
            };
            return obj;

           

        case 'LastMonth':

            var firstday = new Date();
            var m = firstday.getMonth();
            var y = firstday.getFullYear();
            var lastday = new Date(y, m, 1);

            firstday.setMonth(firstday.getMonth() - 1, 1);
            //$(startDate).datepicker('setDate', firstday).datepicker('hide');
            //$(startTime).timepicker('setTime', '00:00').timepicker('hide');
            //$(endDate).datepicker('setDate', lastday).datepicker('hide');
            //$(endTime).timepicker('setTime', '00:00').timepicker('hide');
            var t_f_d = moment(firstday.getDate() + '/' + (firstday.getMonth() + 1) + '/' + firstday.getFullYear() + ' 00:00:00', "DD/MM/YYYY hh:mm:ss"); //new Date(_timeline_from_date);
            var t_t_d = moment(lastday.getDate() + '/' + (lastday.getMonth() + 1) + '/' + lastday.getFullYear() + ' 00:00:00', "DD/MM/YYYY hh:mm:ss");
            var obj = {
                startDateTime: t_f_d.toISOString(),
                endDateTime: t_t_d.toISOString()
            };
            return obj;
        case 'YearToDate':
            var today = new Date();

            var y = today.getFullYear();
            var firstday = new Date(y, 0, 1);

            var time = today.getHours() + ':' + today.getMinutes();

            //$(startDate).datepicker('setDate', firstday).datepicker('hide');
            //$(startTime).timepicker('setTime', '00:00').timepicker('hide');
            //$(endDate).datepicker('setDate', today).datepicker('hide');
            //$(endTime).timepicker('setTime', time).timepicker('hide');
            var t_f_d = moment(firstday.getDate() + '/' + (firstday.getMonth() + 1) + '/' + firstday.getFullYear() + ' 00:00:00', "DD/MM/YYYY hh:mm:ss"); //new Date(_timeline_from_date);
            var t_t_d = moment(today.getDate() + '/' + (today.getMonth() + 1) + '/' + today.getFullYear() + ' ' + time, "DD/MM/YYYY hh:mm:ss");
            var obj = {
                startDateTime: t_f_d.toISOString(),
                endDateTime: t_t_d.toISOString()
            };
            return obj;
        case 'LastYear':
            var today = new Date();
            var y = today.getFullYear();
            var firstday = new Date(y - 1, 0, 1);
            var lastday = new Date(y, 0, 1);

            //$(startDate).datepicker('setDate', firstday).datepicker('hide');
            //$(startTime).timepicker('setTime', '00:00').timepicker('hide');
            //$(endDate).datepicker('setDate', lastday).datepicker('hide');
            //$(endTime).timepicker('setTime', '00:00').timepicker('hide');
            var t_f_d = moment(firstday.getDate() + '/' + (firstday.getMonth() + 1) + '/' + firstday.getFullYear() + ' 00:00:00', "DD/MM/YYYY hh:mm:ss"); //new Date(_timeline_from_date);
            var t_t_d = moment(lastday.getDate() + '/' + (lastday.getMonth() + 1) + '/' + lastday.getFullYear() + ' 00:00:00', "DD/MM/YYYY hh:mm:ss");
            var obj = {
                startDateTime: t_f_d.toISOString(),
                endDateTime: t_t_d.toISOString()
            };
            return obj;
        default:
            return null;
    }
    return false;
};