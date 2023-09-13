# Write your MySQL query statement below
SELECT firstName,lastName, city,state from person left outer JOIN address on person.personID = Address.personId;