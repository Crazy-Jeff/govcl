procedure ControlScrollBar_Assign(AObj: TControlScrollBar; Source: TPersistent); stdcall;
begin
  AObj.Assign(Source);
end;

procedure ControlScrollBar_ChangeBiDiPosition(AObj: TControlScrollBar); stdcall;
begin
  AObj.ChangeBiDiPosition;
end;

function ControlScrollBar_IsScrollBarVisible(AObj: TControlScrollBar): LongBool; stdcall;
begin
  Result :=  AObj.IsScrollBarVisible;
end;

function ControlScrollBar_GetNamePath(AObj: TControlScrollBar): PChar; stdcall;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure ControlScrollBar_DisposeOf(AObj: TControlScrollBar); stdcall;
begin
  AObj.DisposeOf;
end;

function ControlScrollBar_ClassType(AObj: TControlScrollBar): TClass; stdcall;
begin
  Result :=  AObj.ClassType;
end;

function ControlScrollBar_ClassName(AObj: TControlScrollBar): PChar; stdcall;
begin
  Result :=  PChar(AObj.ClassName);
end;

function ControlScrollBar_InstanceSize(AObj: TControlScrollBar): Integer; stdcall;
begin
  Result :=  AObj.InstanceSize;
end;

function ControlScrollBar_InheritsFrom(AObj: TControlScrollBar; AClass: TClass): LongBool; stdcall;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function ControlScrollBar_Equals(AObj: TControlScrollBar; Obj: TObject): LongBool; stdcall;
begin
  Result :=  AObj.Equals(Obj);
end;

function ControlScrollBar_GetHashCode(AObj: TControlScrollBar): Integer; stdcall;
begin
  Result :=  AObj.GetHashCode;
end;

function ControlScrollBar_ToString(AObj: TControlScrollBar): PChar; stdcall;
begin
  Result :=  PChar(AObj.ToString);
end;

function ControlScrollBar_GetKind(AObj: TControlScrollBar): TScrollBarKind; stdcall;
begin
  Result :=  AObj.Kind;
end;

function ControlScrollBar_GetScrollPos(AObj: TControlScrollBar): Integer; stdcall;
begin
  Result :=  AObj.ScrollPos;
end;

function ControlScrollBar_GetButtonSize(AObj: TControlScrollBar): Integer; stdcall;
begin
  Result :=  AObj.ButtonSize;
end;

procedure ControlScrollBar_SetButtonSize(AObj: TControlScrollBar; AValue: Integer); stdcall;
begin
  AObj.ButtonSize := AValue;
end;

function ControlScrollBar_GetColor(AObj: TControlScrollBar): TColor; stdcall;
begin
  Result :=  AObj.Color;
end;

procedure ControlScrollBar_SetColor(AObj: TControlScrollBar; AValue: TColor); stdcall;
begin
  AObj.Color := AValue;
end;

function ControlScrollBar_GetIncrement(AObj: TControlScrollBar): TScrollBarInc; stdcall;
begin
  Result :=  AObj.Increment;
end;

procedure ControlScrollBar_SetIncrement(AObj: TControlScrollBar; AValue: TScrollBarInc); stdcall;
begin
  AObj.Increment := AValue;
end;

function ControlScrollBar_GetParentColor(AObj: TControlScrollBar): LongBool; stdcall;
begin
  Result :=  AObj.ParentColor;
end;

procedure ControlScrollBar_SetParentColor(AObj: TControlScrollBar; AValue: LongBool); stdcall;
begin
  AObj.ParentColor := AValue;
end;

function ControlScrollBar_GetPosition(AObj: TControlScrollBar): Integer; stdcall;
begin
  Result :=  AObj.Position;
end;

procedure ControlScrollBar_SetPosition(AObj: TControlScrollBar; AValue: Integer); stdcall;
begin
  AObj.Position := AValue;
end;

function ControlScrollBar_GetRange(AObj: TControlScrollBar): Integer; stdcall;
begin
  Result :=  AObj.Range;
end;

procedure ControlScrollBar_SetRange(AObj: TControlScrollBar; AValue: Integer); stdcall;
begin
  AObj.Range := AValue;
end;

function ControlScrollBar_GetSmooth(AObj: TControlScrollBar): LongBool; stdcall;
begin
  Result :=  AObj.Smooth;
end;

procedure ControlScrollBar_SetSmooth(AObj: TControlScrollBar; AValue: LongBool); stdcall;
begin
  AObj.Smooth := AValue;
end;

function ControlScrollBar_GetSize(AObj: TControlScrollBar): Integer; stdcall;
begin
  Result :=  AObj.Size;
end;

procedure ControlScrollBar_SetSize(AObj: TControlScrollBar; AValue: Integer); stdcall;
begin
  AObj.Size := AValue;
end;

function ControlScrollBar_GetStyle(AObj: TControlScrollBar): TScrollBarStyle; stdcall;
begin
  Result :=  AObj.Style;
end;

procedure ControlScrollBar_SetStyle(AObj: TControlScrollBar; AValue: TScrollBarStyle); stdcall;
begin
  AObj.Style := AValue;
end;

function ControlScrollBar_GetThumbSize(AObj: TControlScrollBar): Integer; stdcall;
begin
  Result :=  AObj.ThumbSize;
end;

procedure ControlScrollBar_SetThumbSize(AObj: TControlScrollBar; AValue: Integer); stdcall;
begin
  AObj.ThumbSize := AValue;
end;

function ControlScrollBar_GetTracking(AObj: TControlScrollBar): LongBool; stdcall;
begin
  Result :=  AObj.Tracking;
end;

procedure ControlScrollBar_SetTracking(AObj: TControlScrollBar; AValue: LongBool); stdcall;
begin
  AObj.Tracking := AValue;
end;

function ControlScrollBar_GetVisible(AObj: TControlScrollBar): LongBool; stdcall;
begin
  Result :=  AObj.Visible;
end;

procedure ControlScrollBar_SetVisible(AObj: TControlScrollBar; AValue: LongBool); stdcall;
begin
  AObj.Visible := AValue;
end;

function ControlScrollBar_StaticClassType: TClass; stdcall;
begin
  Result := TControlScrollBar;
end;

exports
  ControlScrollBar_Assign,
  ControlScrollBar_ChangeBiDiPosition,
  ControlScrollBar_IsScrollBarVisible,
  ControlScrollBar_GetNamePath,
  ControlScrollBar_DisposeOf,
  ControlScrollBar_ClassType,
  ControlScrollBar_ClassName,
  ControlScrollBar_InstanceSize,
  ControlScrollBar_InheritsFrom,
  ControlScrollBar_Equals,
  ControlScrollBar_GetHashCode,
  ControlScrollBar_ToString,
  ControlScrollBar_GetKind,
  ControlScrollBar_GetScrollPos,
  ControlScrollBar_GetButtonSize,
  ControlScrollBar_SetButtonSize,
  ControlScrollBar_GetColor,
  ControlScrollBar_SetColor,
  ControlScrollBar_GetIncrement,
  ControlScrollBar_SetIncrement,
  ControlScrollBar_GetParentColor,
  ControlScrollBar_SetParentColor,
  ControlScrollBar_GetPosition,
  ControlScrollBar_SetPosition,
  ControlScrollBar_GetRange,
  ControlScrollBar_SetRange,
  ControlScrollBar_GetSmooth,
  ControlScrollBar_SetSmooth,
  ControlScrollBar_GetSize,
  ControlScrollBar_SetSize,
  ControlScrollBar_GetStyle,
  ControlScrollBar_SetStyle,
  ControlScrollBar_GetThumbSize,
  ControlScrollBar_SetThumbSize,
  ControlScrollBar_GetTracking,
  ControlScrollBar_SetTracking,
  ControlScrollBar_GetVisible,
  ControlScrollBar_SetVisible,
  ControlScrollBar_StaticClassType;

