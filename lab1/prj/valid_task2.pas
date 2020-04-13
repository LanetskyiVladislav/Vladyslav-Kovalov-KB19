unit Valid_task2;

interface

function LettersIn (s : string) : boolean;
function Znaks     (s : string) : string;
function Interval  (x,y,z : extended) : boolean;


implementation

function LettersIn (s : string) : boolean;
var
Chisla : string;
i    : byte;
znak : boolean;
begin
znak:=false;
Chisla := '1234567890,.';
 for i := 1 to length(s) do
  begin
  if pos(s[i],Chisla) = 0 then
    begin LettersIn := false; exit; end;
    if (s[i] = ',') and (znak = true) then
      begin LettersIn := false; exit; end;
    if s[i] = ',' then
      begin znak := true; end;
  end;
  if s[1] = ',' then begin LettersIn := false; exit; end;
  LettersIn := true;
end;

function Znaks (s : string) : string;
var
 i : byte;
begin
 for i := 1 to length(s) do
 begin
   if s[i] = '.' then s[i] := ',';
 end;
Znaks := s;
end;



function Interval  (x,y,z : extended) : boolean;
begin
if (x < 7) or (x > 707) then
begin Interval := false; exit; end;
if (y < 1) or (y > 707) then
begin Interval := false; exit; end;
if (z < 6) or (z > 707) then
begin Interval := false; exit; end;
Interval := true;
end;


end.

