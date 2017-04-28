object frmMain: TfrmMain
  Left = 346
  Top = 213
  Width = 369
  Height = 317
  Caption = 'MD5 Checksum Generator'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 81
    Top = 255
    Width = 26
    Height = 13
    Anchors = [akRight, akBottom]
    Caption = 'MD5:'
  end
  object mmoSource: TMemo
    Left = 8
    Top = 8
    Width = 343
    Height = 238
    Anchors = [akLeft, akTop, akRight, akBottom]
    TabOrder = 0
    OnChange = mmoSourceChange
  end
  object edtHash: TEdit
    Left = 112
    Top = 252
    Width = 241
    Height = 21
    Anchors = [akRight, akBottom]
    TabOrder = 1
    Text = 'N/A'
  end
end
