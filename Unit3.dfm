object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 515
  ClientWidth = 1098
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  PixelsPerInch = 96
  TextHeight = 15
  object TLabel: TLabel
    Left = 72
    Top = 40
    Width = 144
    Height = 23
    Caption = #1050#1110#1083#1100#1082#1110#1089#1090#1100' '#1089#1090#1091#1076#1077#1085#1090#1110#1074
    Color = clMenuHighlight
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBackground
    Font.Height = -17
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentColor = False
    ParentFont = False
  end
  object Button1: TButton
    Left = 72
    Top = 144
    Width = 144
    Height = 49
    Caption = #1056#1086#1079#1084#1110#1088#1085#1110#1089#1090#1100' '
    TabOrder = 0
    OnClick = Button1Click
  end
  object StringGrid1: TStringGrid
    Left = 280
    Top = 40
    Width = 810
    Height = 185
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 1
  end
  object StringGrid2: TStringGrid
    Left = 280
    Top = 280
    Width = 810
    Height = 185
    TabOrder = 2
    ColWidths = (
      64
      65
      64
      64
      64)
  end
  object Button2: TButton
    Left = 72
    Top = 219
    Width = 144
    Height = 49
    Caption = #1042#1074#1110#1076' '#1076#1072#1085#1080#1093
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 25
    Top = 290
    Width = 249
    Height = 55
    Caption = #1057#1090#1091#1076#1077#1085#1090#1080', '#1097#1086' '#1086#1090#1088#1080#1084#1072#1083#1080' 2'
    TabOrder = 4
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 72
    Top = 368
    Width = 144
    Height = 49
    Caption = #1042#1080#1093#1110#1076
    TabOrder = 5
    OnClick = Button4Click
  end
  object Edit1: TEdit
    Left = 72
    Top = 80
    Width = 144
    Height = 23
    TabOrder = 6
    Text = 'Edit1'
  end
end
