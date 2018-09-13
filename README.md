# Analytics

Company Innon, Innon sale different types of devices which measure the energy(Gas, Water, electricity) consumption and save the data into sql server database table, Each device has its own table. Innon has thousands of devices install into different location in UK. Each device send data (time span and value) after every fifteen sec.

Project Name Data Analytics Web base application and Data ware house. 

Role Team Lead

Problem
Million of raw data inserted every day into SQL server database. The web analytics application querying that raw data for present into different graph to measure the energy consumption.

the first problem is query to Sql database taking to long to get the rows from the SQL server Database.
the sec problem is after getting the rows from SQL database need to implement business logic which also taking too long to perform business operation.

Solution 

In order solve this problem I redesign the application, Build the complete solution on n-tier architecture, the legacy application build on two tier architecture. 
I divided complete solution into following tiers
1. Raw Database
2. Data ware house
3. Web Api
4. Front end analytical webapplication

First problem solution, now we have aggregated data into data ware house and query taking very less time to to get the data from data ware house.  

Sec Problem I used entity framework and json for business operation which also less time consuming and no need to convert any data format for different charts on front level. 

I learned from project this how to build data ware house and aggregation of data.
