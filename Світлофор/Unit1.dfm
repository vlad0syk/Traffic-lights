object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 538
  ClientWidth = 979
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Shape1: TShape
    Left = 8
    Top = 8
    Width = 289
    Height = 531
    Brush.Color = clBlack
  end
  object Shape2: TShape
    Left = 72
    Top = 24
    Width = 161
    Height = 153
    Brush.Color = clGray
    Shape = stCircle
  end
  object Shape3: TShape
    Left = 72
    Top = 196
    Width = 161
    Height = 153
    Brush.Color = clGray
    Shape = stCircle
  end
  object Shape4: TShape
    Left = 72
    Top = 370
    Width = 161
    Height = 153
    Brush.Color = clGray
    Shape = stCircle
  end
  object Shape5: TShape
    Left = 303
    Top = 119
    Width = 258
    Height = 250
    Shape = stCircle
  end
  object Label1: TLabel
    Left = 303
    Top = 383
    Width = 275
    Height = 26
    Caption = #1042#1074#1077#1076#1110#1090#1100' '#1095#1072#1089' '#1074' '#1093#1074#1080#1083#1080#1085#1072#1093
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Arial'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 303
    Top = 452
    Width = 481
    Height = 26
    Caption = #1050#1086#1083#1110#1088', '#1103#1082#1080#1081' '#1075#1086#1088#1080#1090#1100' '#1091' '#1079#1072#1079#1085#1072#1095#1077#1085#1080#1081' '#1074#1072#1084#1080' '#1095#1072#1089
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Arial'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
  end
  object Button1: TButton
    Left = 303
    Top = 8
    Width = 258
    Height = 105
    Caption = #1050#1085#1086#1087#1082#1072' '#1076#1083#1103' '#1087#1110#1096#1086#1093#1086#1076#1072
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Arial'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 303
    Top = 415
    Width = 275
    Height = 31
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object Edit2: TEdit
    Left = 303
    Top = 484
    Width = 275
    Height = 31
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Arial'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  object Button2: TButton
    Left = 567
    Top = 8
    Width = 385
    Height = 105
    Caption = #1042#1080#1079#1085#1072#1095#1080#1090#1080', '#1103#1082#1080#1081' '#1082#1086#1083#1110#1088' '#1075#1086#1088#1080#1090#1100
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Arial'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
    TabOrder = 3
    OnClick = Button2Click
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 920
    Top = 496
  end
end
