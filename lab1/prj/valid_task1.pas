unit Valid_task1;

{$mode objfpc}{$H+}

interface

function Slovo (input:string) : boolean;

implementation


function Slovo (input:string) : boolean;
var
 Letters : string;
 i : byte;
begin
 Letters := 'AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZzАаБбВвГгДдЕеЁёЖжЗзИиЙйКкЛлМмНнОоПпРрСсТтУуФфХхЦцЧчШшЩщЪъЫыЬьЭэЮюЯяЄєЇїІіҐґ';
 for i := 1 to length(input) do
 begin
 if pos(input[i],Letters) = 0 then
 begin Slovo := false; exit; end;
 Slovo := true;
 end;
end;




end.

