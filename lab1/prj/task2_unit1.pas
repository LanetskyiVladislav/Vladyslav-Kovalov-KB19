unit task2_unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls, Menus, info_task2, Valid_task2;

type

  { TForm1 }

  TForm1 = class(TForm)
    Button1: TButton;
    MainMenu1: TMainMenu;
    MenuItem1: TMenuItem;
    x_input: TEdit;
    y_input: TEdit;
    z_input: TEdit;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    procedure Button1Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure MenuItem1Click(Sender: TObject);
  private

  public

  end;

const p = 3.14159;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.Button1Click(Sender: TObject);
  var
  str : string[255];
  a, b, c, q : extended;
  x,y,z : extended;

begin
  // Proverka
  if (x_input.text = '') or (y_input.text = '') or (z_input.text = '') then
  begin
    label1.caption := 'Одне з полів є порожнім.';
    exit;
  end;

  str := x_input.text;
  str := Znaks(str);
  if lettersin(str) = false then begin Label1.Caption := 'Помилка. Введене некоректне число'; exit; end;
  x := StrToFloat(str);


  str := y_input.text;
  str := Znaks(str);
  if lettersin(str) = false then begin Label1.Caption := 'Помилка. Введене некоректне число.'; exit; end;
  y := StrToFloat(str);

  str := z_input.text;
  str := Znaks(str);
  if lettersin(str) = false then begin Label1.Caption := 'Помилка. Введене некоректне число.'; exit; end;
  z := StrToFloat(str);

  if interval(x,y,z) = false then begin showmessage('Діапазон допустимих чисел обмежений. Кожне з введених чисел має бути від 1 до 707 включно, а також число Х не може бути рівним 5.'); exit; end;

  a := abs(5-x);
  b := pi*(z+y);
  c := b/a;
  a := exp(abs(z))*ln(12*x);
  b := a-c;
  c := sqrt(b);
  q := 3*sin(c);
  label1.caption := 'Результат: ' + FloatToStr(q);

end;

procedure TForm1.FormCreate(Sender: TObject);
begin

end;

procedure TForm1.MenuItem1Click(Sender: TObject);
begin
 form2.show;
end;

end.

