set schema 'ctps2';

--------- SUJET XXXXX
--- EXERCICE 1
-- Req 1

create or replace view jspas as
with recursive subordonnes(sub,sup) as(
   select matr,sup
   from _employe
   union
   select e.matr,s.sup
   from subordonnes s inner join _employe e on e.sup=s.sub)
select matr , nom_e, sal, round(sal*0.05*count(sub),2) as prime_enc, date_emb, comm, no_dept
from subordonnes s right join _personnel p on s.sup=p.matr
group by nom_e, sal, date_emb, comm, no_dept;

create or replace view requete1 as 
select matr, sup
from _employe
union 
select e.matr, p.matr
from _personnel p inner join _employe e on e.matr=p.matr;

create or replace view requete2 as 
select  matr, sup
from _personnel
union 
select e.matr, p.matr
from _personnel p inner join _employe e on e.matr=p.matr;

select * from requete1;
select * from jspas;
select * from requete2;



-- Req 2



--- EXERCICE 2

CREATE OR REPLACE FUNCTION augsal(no_dept) RETURNS TRIGGER AS $$
declare
aug int = 3000;
salaire int = 10000;
BEGIN
  if sal from _personnel < salaire then
  update _personnel set
  sal = sal + salaire
  
  else if new.sal > salaire then
    raise exception "salaire trop haut"
  
  RETURN;
END;
$$ language plpgsql;

CREATE TRIGGER augmentation AFTER UPDATE
on _employe
for each row 
execute procedure augsal();
