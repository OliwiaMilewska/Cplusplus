object Form1: TForm1
  Left = 646
  Top = 152
  Width = 863
  Height = 541
  Caption = 'MyNote'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object tresc: TMemo
    Left = 0
    Top = 0
    Width = 847
    Height = 482
    Align = alClient
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -31
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 0
    OnKeyDown = trescKeyDown
  end
  object MainMenu1: TMainMenu
    Left = 552
    Top = 8
    object Plik1: TMenuItem
      Caption = '&Plik'
      object Nowy1: TMenuItem
        Caption = '&Nowy   Ctrl+N'
        OnClick = Nowy1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Otwrz1: TMenuItem
        Caption = '&Otw'#243'rz'
        OnClick = Otwrz1Click
      end
      object Zapisz1: TMenuItem
        Caption = '&Zapisz    Ctr+S'
        OnClick = Zapisz1Click
      end
      object Zapiszjako1: TMenuItem
        Caption = 'Z&apisz jako'
        OnClick = Zapiszjako1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object Zakocz1: TMenuItem
        Caption = 'Zako'#324'&cz   Alt+F4'
        OnClick = Zakocz1Click
      end
    end
    object Edycja1: TMenuItem
      Caption = '&Edycja'
      object WytnijCtrX1: TMenuItem
        Caption = '&Wytnij    Ctr+X'
        OnClick = WytnijCtrX1Click
      end
      object KopiujCtrC1: TMenuItem
        Caption = '&Kopiuj    Ctr+C'
        OnClick = KopiujCtrC1Click
      end
      object WklejCtrV1: TMenuItem
        Caption = 'W&klej    Ctr+V'
        OnClick = WklejCtrV1Click
      end
      object Wyczy1: TMenuItem
        Caption = 'W&yczy'#347#263
        OnClick = Wyczy1Click
      end
    end
    object Format1: TMenuItem
      Caption = '&Format'
      object Zawijaniewierszy1: TMenuItem
        AutoCheck = True
        Caption = 'Zaw&ijanie wierszy'
        OnClick = Zawijaniewierszy1Click
      end
      object Czcionka1: TMenuItem
        Caption = 'Czci&onka'
        OnClick = Czcionka1Click
      end
    end
    object Pomoc1: TMenuItem
      Caption = 'Po&moc'
      object Informacje1: TMenuItem
        Caption = 'I&nformacje'
        object Linkdostronyinternetowej1: TMenuItem
          Caption = 'Link do strony internetowej'
          OnClick = Linkdostronyinternetowej1Click
        end
        object N0programie1: TMenuItem
          Caption = 'O programie'
          OnClick = N0programie1Click
        end
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Filter = 'Wszystkie pliki|*.*'
    Left = 584
    Top = 8
  end
  object SaveDialog1: TSaveDialog
    Filter = 'Plik tekstowy|*.txt|Dowolny plik|*.*'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofEnableSizing]
    Left = 616
    Top = 8
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 648
    Top = 8
  end
end
