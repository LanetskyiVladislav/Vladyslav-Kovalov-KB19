unit Task1_Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls, Menus, Info_task1, Valid_task1;

type

  { TForm1 }

  TForm1 = class(TForm)
    Label2: TLabel;
    MainMenu1: TMainMenu;
    MenuItem1: TMenuItem;
    RandomS: TButton;
    Data: TButton;
    Check: TButton;
    Edit1: TEdit;
    Label1: TLabel;
    procedure CheckClick(Sender: TObject);
    procedure DataClick(Sender: TObject);
    procedure MenuItem1Click(Sender: TObject);
    procedure RandomSClick(Sender: TObject);
  private

  public

  end;


var
  Form1: TForm1;

implementation

{$R *.lfm}








{ TForm1 }

procedure TForm1.RandomSClick(Sender: TObject);
begin
  randomize;
  case random(22)+1 of
  1 : Label1.Caption := 'Випадкова літера: Д';
  2 : Label1.Caption := 'Випадкова літера: Е';
  3 : Label1.Caption := 'Випадкова літера: Є';
  4 : Label1.Caption := 'Випадкова літера: Ж';
  5 : Label1.Caption := 'Випадкова літера: З';
  6 : Label1.Caption := 'Випадкова літера: И';
  7 : Label1.Caption := 'Випадкова літера: І';
  8 : Label1.Caption := 'Випадкова літера: Ї';
  9 : Label1.Caption := 'Випадкова літера: Й';
  10: Label1.Caption := 'Випадкова літера: К';
  11: Label1.Caption := 'Випадкова літера: Л';
  12: Label1.Caption := 'Випадкова літера: М';
  13: Label1.Caption := 'Випадкова літера: Н';
  14: Label1.Caption := 'Випадкова літера: О';
  15: Label1.Caption := 'Випадкова літера: П';
  16: Label1.Caption := 'Випадкова літера: Р';
  17: Label1.Caption := 'Випадкова літера: С';
  18: Label1.Caption := 'Випадкова літера: Т';
  19: Label1.Caption := 'Випадкова літера: У';
  20: Label1.Caption := 'Випадкова літера: Ф';
  21: Label1.Caption := 'Випадкова літера: Х';
  22: Label1.Caption := 'Випадкова літера: Ц';
  end;
end;

procedure TForm1.CheckClick(Sender: TObject);
var
  input : string;
begin
if edit1.text = '' then
begin
label1.caption := 'Рядок пустий.';
exit;
end;
input := edit1.text;
if Slovo(input) = false then begin label1.caption := 'Введено некоректне слово.'; exit; end;
if input = 'Мені' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'відкрилась' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'істина' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'печальна' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'життя' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'зникає' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'як' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'ріка' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'Почайна' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'Через' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'віки' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'а' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'то' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'й' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'через' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'роки' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'вже' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'стане' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'спогадом' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'ріки' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'І' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'тільки' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'верби' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'знатимуть' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'старі' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'киян' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'хрестили' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'в' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'ній' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'не' then begin label1.caption := 'Слово присутнє'; exit; end;
if input = 'Дніпрі' then begin label1.caption := 'Слово присутнє'; exit; end;
label1.caption := 'Слово відсутнє';
end;

procedure TForm1.DataClick(Sender: TObject);
var
CurT : TDateTime;
begin
CurT := Now;
if (StrToInt(FormatDateTime('hh', CurT)) > 17) and (StrToInt(FormatDateTime('hh', CurT)) < 23) then
Label1.Caption := 'Поточна дата - ' + FormatDateTime('dd.mm', CurT)
else
  Label1.Caption := FormatDateTime('mmmm, yyyy', CurT) + ' року';
end;

procedure TForm1.MenuItem1Click(Sender: TObject);
begin
  Form2.Show;
end;


end.

